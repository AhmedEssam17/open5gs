#include "nchf-handler.h"
#include "pfcp-path.h"

bool smf_nchf_handle_get(smf_sess_t *sess, int state, ogs_sbi_message_t *recvmsg)
{
    ogs_info("$$$$$$$$$$$$$$ nchf-handler.c: smf_nchf_handle_get() $$$$$$$$$$$$$$");

    ogs_assert(sess);

    char buf1[OGS_ADDRSTRLEN];
    char buf2[OGS_ADDRSTRLEN];

    smf_ue_t *smf_ue = NULL;
    smf_bearer_t *qos_flow = NULL;
    ogs_pfcp_qer_t *qer = NULL;
    ogs_pfcp_pdr_t *dl_pdr = NULL;
    ogs_pfcp_pdr_t *ul_pdr = NULL;
    ogs_pfcp_pdr_t *cp2up_pdr = NULL;
    ogs_pfcp_pdr_t *up2cp_pdr = NULL;
    ogs_pfcp_far_t *up2cp_far = NULL;


    smf_ue = smf_ue_find_by_id(sess->smf_ue_id);
    ogs_assert(smf_ue);

    /*********************************************************************
     * Send PFCP Session Establiashment Request to the UPF
     *********************************************************************/
    ogs_info("XXXXXXXX Send PFCP Session Establiashment Request to the UPF XXXXXXXX");
    /* Select UPF based on UE Location Information */
    smf_sess_select_upf(sess);

    /* Check if selected UPF is associated with SMF */
    ogs_assert(sess->pfcp_node);
    if (!OGS_FSM_CHECK(&sess->pfcp_node->sm, smf_pfcp_state_associated)) {
        ogs_error("[%s:%d] No associated UPF", smf_ue->supi, sess->psi);
        return false;
    }

    /* Remove all previous QoS flow */
    smf_bearer_remove_all(sess);

    /* Setup Default QoS flow */
    qos_flow = smf_qos_flow_add(sess);
    ogs_assert(qos_flow);

    /* Setup CP/UP Data Forwarding PDR/FAR */
    smf_sess_create_cp_up_data_forwarding(sess);

    /* Copy Session QoS information to Default QoS Flow */
    memcpy(&qos_flow->qos, &sess->session.qos, sizeof(ogs_qos_t));

    /* Setup QER */
    qer = qos_flow->qer;
    ogs_assert(qer);
    qer->mbr.uplink = sess->session.ambr.uplink;
    qer->mbr.downlink = sess->session.ambr.downlink;

    /* Setup PDR */
    dl_pdr = qos_flow->dl_pdr;
    ogs_assert(dl_pdr);
    ul_pdr = qos_flow->ul_pdr;
    ogs_assert(ul_pdr);
    cp2up_pdr = sess->cp2up_pdr;
    ogs_assert(cp2up_pdr);
    up2cp_pdr = sess->up2cp_pdr;
    ogs_assert(up2cp_pdr);

    /* Setup FAR */
    up2cp_far = sess->up2cp_far;
    ogs_assert(up2cp_far);

    /* Set UE IP Address to the Default DL PDR */
    ogs_assert(OGS_OK ==
        ogs_pfcp_paa_to_ue_ip_addr(&sess->paa,
            &dl_pdr->ue_ip_addr, &dl_pdr->ue_ip_addr_len));
    dl_pdr->ue_ip_addr.sd = OGS_PFCP_UE_IP_DST;

    ogs_assert(OGS_OK ==
        ogs_pfcp_paa_to_ue_ip_addr(&sess->paa,
            &ul_pdr->ue_ip_addr, &ul_pdr->ue_ip_addr_len));

    if (sess->session.ipv4_framed_routes &&
        sess->pfcp_node->up_function_features.frrt) {
        int i = 0;
        for (i = 0; i < OGS_MAX_NUM_OF_FRAMED_ROUTES_IN_PDI; i++) {
            const char *route = sess->session.ipv4_framed_routes[i];
            if (!route) break;

            if (!dl_pdr->ipv4_framed_routes) {
                dl_pdr->ipv4_framed_routes =
                    ogs_calloc(OGS_MAX_NUM_OF_FRAMED_ROUTES_IN_PDI,
                               sizeof(dl_pdr->ipv4_framed_routes[0]));
                ogs_assert(dl_pdr->ipv4_framed_routes);
            }
            dl_pdr->ipv4_framed_routes[i] = ogs_strdup(route);

            if (!ul_pdr->ipv4_framed_routes) {
                ul_pdr->ipv4_framed_routes =
                    ogs_calloc(OGS_MAX_NUM_OF_FRAMED_ROUTES_IN_PDI,
                               sizeof(ul_pdr->ipv4_framed_routes[0]));
                ogs_assert(ul_pdr->ipv4_framed_routes);
            }
            ul_pdr->ipv4_framed_routes[i] = ogs_strdup(route);
        }
    }

    if (sess->session.ipv6_framed_routes &&
        sess->pfcp_node->up_function_features.frrt) {
        int i = 0;
        for (i = 0; i < OGS_MAX_NUM_OF_FRAMED_ROUTES_IN_PDI; i++) {
            const char *route = sess->session.ipv6_framed_routes[i];
            if (!route) break;

            if (!dl_pdr->ipv6_framed_routes) {
                dl_pdr->ipv6_framed_routes =
                    ogs_calloc(OGS_MAX_NUM_OF_FRAMED_ROUTES_IN_PDI,
                               sizeof(dl_pdr->ipv6_framed_routes[0]));
                ogs_assert(dl_pdr->ipv6_framed_routes);
            }
            dl_pdr->ipv6_framed_routes[i] = ogs_strdup(route);

            if (!ul_pdr->ipv6_framed_routes) {
                ul_pdr->ipv6_framed_routes =
                    ogs_calloc(OGS_MAX_NUM_OF_FRAMED_ROUTES_IN_PDI,
                               sizeof(ul_pdr->ipv6_framed_routes[0]));
                ogs_assert(ul_pdr->ipv6_framed_routes);
            }
            ul_pdr->ipv6_framed_routes[i] = ogs_strdup(route);
        }
    }

    ogs_info("UE SUPI[%s] DNN[%s] IPv4[%s] IPv6[%s]",
        smf_ue->supi, sess->session.name,
        sess->ipv4 ? OGS_INET_NTOP(&sess->ipv4->addr, buf1) : "",
        sess->ipv6 ? OGS_INET6_NTOP(&sess->ipv6->addr, buf2) : "");

    /* Set UE-to-CP Flow-Description and Outer-Header-Creation */
    up2cp_pdr->flow[up2cp_pdr->num_of_flow].fd = 1;
    up2cp_pdr->flow[up2cp_pdr->num_of_flow].description =
        (char *)"permit out 58 from ff02::2/128 to assigned";
    up2cp_pdr->num_of_flow++;

    ogs_assert(OGS_OK ==
        ogs_pfcp_ip_to_outer_header_creation(
            &ogs_gtp_self()->gtpu_ip,
            &up2cp_far->outer_header_creation,
            &up2cp_far->outer_header_creation_len));
    up2cp_far->outer_header_creation.teid = sess->index;

    /* Set UPF-N3 TEID & ADDR to the Default UL PDR */
    ogs_assert(sess->pfcp_node);
    if (sess->pfcp_node->up_function_features.ftup) {

       /* TS 129 244 V16.5.0 8.2.3
        *
        * At least one of the V4 and V6 flags shall be set to "1",
        * and both may be set to "1" for both scenarios:
        *
        * - when the CP function is providing F-TEID, i.e.
        *   both IPv4 address field and IPv6 address field may be present;
        *   or
        * - when the UP function is requested to allocate the F-TEID,
        *   i.e. when CHOOSE bit is set to "1",
        *   and the IPv4 address and IPv6 address fields are not present.
        */

        ul_pdr->f_teid.ipv4 = 1;
        ul_pdr->f_teid.ipv6 = 1;
        ul_pdr->f_teid.ch = 1;
        ul_pdr->f_teid.chid = 1;
        ul_pdr->f_teid.choose_id = OGS_PFCP_DEFAULT_CHOOSE_ID;
        ul_pdr->f_teid_len = 2;

        cp2up_pdr->f_teid.ipv4 = 1;
        cp2up_pdr->f_teid.ipv6 = 1;
        cp2up_pdr->f_teid.ch = 1;
        cp2up_pdr->f_teid_len = 1;

        up2cp_pdr->f_teid.ipv4 = 1;
        up2cp_pdr->f_teid.ipv6 = 1;
        up2cp_pdr->f_teid.ch = 1;
        up2cp_pdr->f_teid.chid = 1;
        up2cp_pdr->f_teid.choose_id = OGS_PFCP_DEFAULT_CHOOSE_ID;
        up2cp_pdr->f_teid_len = 2;
    } else {
        ogs_gtpu_resource_t *resource = NULL;
        resource = ogs_pfcp_find_gtpu_resource(
                &sess->pfcp_node->gtpu_resource_list,
                sess->session.name, ul_pdr->src_if);
        if (resource) {
            ogs_user_plane_ip_resource_info_to_sockaddr(&resource->info,
                &sess->upf_n3_addr, &sess->upf_n3_addr6);
            if (resource->info.teidri)
                sess->upf_n3_teid = OGS_PFCP_GTPU_INDEX_TO_TEID(
                        ul_pdr->teid, resource->info.teidri,
                        resource->info.teid_range);
            else
                sess->upf_n3_teid = ul_pdr->teid;
        } else {
            if (sess->pfcp_node->addr.ogs_sa_family == AF_INET)
                ogs_assert(OGS_OK ==
                    ogs_copyaddrinfo(
                        &sess->upf_n3_addr, &sess->pfcp_node->addr));
            else if (sess->pfcp_node->addr.ogs_sa_family == AF_INET6)
                ogs_assert(OGS_OK ==
                    ogs_copyaddrinfo(
                        &sess->upf_n3_addr6, &sess->pfcp_node->addr));
            else
                ogs_assert_if_reached();

            sess->upf_n3_teid = ul_pdr->teid;
        }

        ogs_assert(OGS_OK ==
            ogs_pfcp_sockaddr_to_f_teid(
                sess->upf_n3_addr, sess->upf_n3_addr6,
                &ul_pdr->f_teid, &ul_pdr->f_teid_len));
        ul_pdr->f_teid.teid = sess->upf_n3_teid;

        ogs_assert(OGS_OK ==
            ogs_pfcp_sockaddr_to_f_teid(
                sess->upf_n3_addr, sess->upf_n3_addr6,
                &cp2up_pdr->f_teid, &cp2up_pdr->f_teid_len));
        cp2up_pdr->f_teid.teid = cp2up_pdr->teid;

        ogs_assert(OGS_OK ==
            ogs_pfcp_sockaddr_to_f_teid(
                sess->upf_n3_addr, sess->upf_n3_addr6,
                &up2cp_pdr->f_teid, &up2cp_pdr->f_teid_len));
        up2cp_pdr->f_teid.teid = sess->upf_n3_teid;
    }

    dl_pdr->precedence = OGS_PFCP_DEFAULT_PDR_PRECEDENCE;
    ul_pdr->precedence = OGS_PFCP_DEFAULT_PDR_PRECEDENCE;

    cp2up_pdr->precedence = OGS_PFCP_CP2UP_PDR_PRECEDENCE;
    up2cp_pdr->precedence = OGS_PFCP_UP2CP_PDR_PRECEDENCE;

    ogs_assert(OGS_OK ==
            smf_5gc_pfcp_send_session_establishment_request(sess, 0));

    ogs_info("$$$$$$$$$$$$$$ End of smf_nchf_handle_get() $$$$$$$$$$$$$$");

    return true;
}