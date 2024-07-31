/*
 * Copyright (C) 2019-2024 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "sbi-path.h"
#include "pfcp-path.h"
#include "nas-path.h"
#include "binding.h"

#include "npcf-handler.h"

static void update_authorized_pcc_rule_and_qos(
        smf_sess_t *sess, OpenAPI_sm_policy_decision_t *SmPolicyDecision)
{
    ogs_info("*****npcf-handler.c: update_authorized_pcc_rule_and_qos*****");
    OpenAPI_lnode_t *node = NULL, *node2 = NULL;

    ogs_assert(sess);
    ogs_assert(SmPolicyDecision);

    /*
     * TS29.512
     * 4.2.6 Provisioning and Enforcement of Policy Decisions
     *
     *
     * If no other rules are defined for specific data types
     * within the SmPolicyDecision data structure, the encoding of changes
     * of the policies decisions in the SmPolicyDecision data structure
     * shall follow the following principles:
     *
     * 1) To modify an attribute with a value of type map
     * (e.g. the "sessRules" attribute, the "pccRules" attribute,
     * the "qosDecs" attribute, the "traffContDecs" attribute,
     * the "umDecs" attribute, and the "conds" attribute) the attribute
     * shall be provided with a value containing a map with entries
     * according to the following principles:
     *
     * - A new entry shall be added by supplying a new identifier
     *   (e.g. rule / decision identifier) as key and the corresponding
     *   structured data type instance (e.g. PCC rule) with complete contents
     *   as value as an entry within the map.
     * - An existing entry shall be modified by supplying the existing
     *   identifier as key and the corresponding structured data type instance
     *   with the same existing identifier (e.g. set the "qosId"
     *   to the same existing QoS data decision identifier),
     *   which shall describe the modifications following bullets 1 to 6,
     *   as value as an entry within the map.
     * - An existing entry shall be deleted by supplying the existing
     *   identifier as key and "NULL" as value as an entry within the map.
     * - For an unmodified entry, no entry needs to be provided within the map.
     *
     * 2) To modify an attribute with a structured data type instance as value,
     * the attribute shall be provided with a value containing a structured data
     * type instance with entries according to bullets 1 to 6.
     *
     * 3) To modify an attribute with another type than map or structured data
     * type as value, the attribute shall be provided with a complete
     * representation of its value that shall replace the previous value.
     *
     * 4) To create an attribute of any type, the attribute shall be provided
     * with a complete representation of its value.
     *
     * 5) To delete an attribute of any type, the attribute shall be provided
     * with NULL as value.
     * NOTE 1: Attributes that are allowed to be deleted need to be marked as
     * "nullable" within the OpenAPI file in Annex A.
     *
     * 6) Attributes that are not added, modified, or deleted do not need to be
     * provided.
     * NOTE 2: In related data structures no attrib
     */

    if (SmPolicyDecision->pcc_rules) {
        OpenAPI_map_t *PccRuleMap = NULL;
        OpenAPI_pcc_rule_t *PccRule = NULL;
        OpenAPI_flow_information_t *FlowInformation = NULL;
        OpenAPI_qos_data_t *QosData = NULL;
        char *QosId = NULL;
        int i;

        for (i = 0; i < sess->policy.num_of_pcc_rule; i++)
            OGS_PCC_RULE_FREE(&sess->policy.pcc_rule[i]);
        sess->policy.num_of_pcc_rule = 0;

        OpenAPI_list_for_each(SmPolicyDecision->pcc_rules, node) {
            ogs_pcc_rule_t *pcc_rule =
                &sess->policy.pcc_rule[sess->policy.num_of_pcc_rule];
            ogs_assert(pcc_rule);

            PccRuleMap = node->data;
            if (!PccRuleMap) {
                ogs_error("No PccRuleMap");
                continue;
            }

            if (!PccRuleMap->key) {
                ogs_error("No PccRule->id");
                continue;
            }

            PccRule = PccRuleMap->value;
            if (!PccRule) {
                pcc_rule->type = OGS_PCC_RULE_TYPE_REMOVE;
                pcc_rule->id = ogs_strdup(PccRuleMap->key);
                ogs_assert(pcc_rule->id);

                sess->policy.num_of_pcc_rule++;
                continue;
            }

            if (!PccRule->ref_qos_data) {
                ogs_error("No RefQosData");
                continue;
            }

            if (!PccRule->ref_qos_data->first) {
                ogs_error("No RefQosData->first");
                continue;
            }

            QosId = PccRule->ref_qos_data->first->data;
            if (!QosId) {
                ogs_error("no QosId");
                continue;
            }

            if (SmPolicyDecision->qos_decs) {
                OpenAPI_map_t *QosDecisionMap = NULL;
                OpenAPI_qos_data_t *QosDataIter = NULL;

                OpenAPI_list_for_each(SmPolicyDecision->qos_decs, node2) {
                    QosDecisionMap = node2->data;
                    if (!QosDecisionMap) {
                        ogs_error("No QosDecisionMap");
                        continue;
                    }

                    QosDataIter = QosDecisionMap->value;
                    if (!QosDataIter) {
                        ogs_error("No QosData");
                        continue;
                    }

                    if (!QosDataIter->qos_id) {
                        ogs_error("No QosId");
                        continue;

                    }

                    if (strcmp(QosId, QosDataIter->qos_id) == 0) {
                        QosData = QosDataIter;
                        break;
                    }
                }
            }

            if (!QosData) {
                ogs_error("no qosData");
                continue;
            }

            pcc_rule->type = OGS_PCC_RULE_TYPE_INSTALL;
            pcc_rule->id = ogs_strdup(PccRule->pcc_rule_id);
            ogs_assert(pcc_rule->id);
            pcc_rule->precedence = PccRule->precedence;

            if (PccRule->flow_infos) {
                ogs_assert(pcc_rule->num_of_flow == 0);
                OpenAPI_list_for_each(PccRule->flow_infos, node2) {
                    ogs_flow_t *flow = &pcc_rule->flow[pcc_rule->num_of_flow];

                    ogs_assert(flow);

                    FlowInformation = node2->data;
                    if (!FlowInformation) {
                        ogs_error("No FlowInformation");
                        continue;
                    }

                    if (FlowInformation->flow_direction ==
                        OpenAPI_flow_direction_UPLINK)
                        flow->direction = OGS_FLOW_UPLINK_ONLY;
                    else if (FlowInformation->flow_direction ==
                        OpenAPI_flow_direction_DOWNLINK)
                        flow->direction = OGS_FLOW_DOWNLINK_ONLY;
                    else if (FlowInformation->flow_direction ==
                        OpenAPI_flow_direction_BIDIRECTIONAL)
                        flow->direction = OGS_FLOW_BIDIRECTIONAL;
                    else {
                        ogs_error("Unsupported direction [%d]",
                                FlowInformation->flow_direction);
                        continue;
                    }

                    flow->description =
                        ogs_strdup(FlowInformation->flow_description);
                    ogs_assert(flow->description);

                    pcc_rule->num_of_flow++;
                }
            }

            pcc_rule->qos.index = QosData->_5qi;
            pcc_rule->qos.arp.priority_level = QosData->priority_level;

            if (QosData->arp) {
                pcc_rule->qos.arp.priority_level = QosData->arp->priority_level;
                if (QosData->arp->preempt_cap ==
                    OpenAPI_preemption_capability_NOT_PREEMPT)
                    pcc_rule->qos.arp.pre_emption_capability =
                        OGS_5GC_PRE_EMPTION_DISABLED;
                else if (QosData->arp->preempt_cap ==
                    OpenAPI_preemption_capability_MAY_PREEMPT)
                    pcc_rule->qos.arp.pre_emption_capability =
                        OGS_5GC_PRE_EMPTION_ENABLED;
                ogs_assert(pcc_rule->qos.arp.pre_emption_capability);

                if (QosData->arp->preempt_vuln ==
                    OpenAPI_preemption_vulnerability_NOT_PREEMPTABLE)
                    pcc_rule->qos.arp.pre_emption_vulnerability =
                        OGS_5GC_PRE_EMPTION_DISABLED;
                else if (QosData->arp->preempt_vuln ==
                    OpenAPI_preemption_vulnerability_PREEMPTABLE)
                    pcc_rule->qos.arp.pre_emption_vulnerability =
                        OGS_5GC_PRE_EMPTION_ENABLED;
                ogs_assert(pcc_rule->qos.arp.pre_emption_vulnerability);
            }

            if (QosData->maxbr_ul)
                pcc_rule->qos.mbr.uplink =
                    ogs_sbi_bitrate_from_string(QosData->maxbr_ul);
            if (QosData->maxbr_dl)
                pcc_rule->qos.mbr.downlink =
                    ogs_sbi_bitrate_from_string(QosData->maxbr_dl);

            if (QosData->gbr_ul)
                pcc_rule->qos.gbr.uplink =
                    ogs_sbi_bitrate_from_string(QosData->gbr_ul);
            if (QosData->gbr_dl)
                pcc_rule->qos.gbr.downlink =
                    ogs_sbi_bitrate_from_string(QosData->gbr_dl);

            if (pcc_rule->qos.mbr.downlink || pcc_rule->qos.mbr.uplink ||
                pcc_rule->qos.gbr.downlink || pcc_rule->qos.gbr.uplink) {
                if (pcc_rule->qos.mbr.downlink == 0)
                    pcc_rule->qos.mbr.downlink = MAX_BIT_RATE;
                if (pcc_rule->qos.mbr.uplink == 0)
                    pcc_rule->qos.mbr.uplink = MAX_BIT_RATE;
                if (pcc_rule->qos.gbr.downlink == 0)
                    pcc_rule->qos.gbr.downlink = MAX_BIT_RATE;
                if (pcc_rule->qos.gbr.uplink == 0)
                    pcc_rule->qos.gbr.uplink = MAX_BIT_RATE;
            }

            sess->policy.num_of_pcc_rule++;
        }
    }
}

bool smf_npcf_smpolicycontrol_handle_create(
        smf_sess_t *sess, int state, ogs_sbi_message_t *recvmsg)
{
    ogs_info("*****npcf-handler.c: smf_npcf_smpolicycontrol_handle_create()*****");
    // smf_sbi_discover_and_send(
    //         OGS_SBI_SERVICE_TYPE_NCHF_CONVERGEDCHARGING, NULL,
    //         smf_nchf_build_get, sess, NULL, 0, NULL);
    int rv;
    

    smf_ue_t *smf_ue = NULL;

    OpenAPI_sm_policy_decision_t *SmPolicyDecision = NULL;
    OpenAPI_lnode_t *node = NULL;

#define MAX_TRIGGER_ID 128
    bool trigger_results[MAX_TRIGGER_ID];

    ogs_sbi_message_t message;
    ogs_sbi_header_t header;

    bool rc;
    ogs_sbi_client_t *client = NULL;
    OpenAPI_uri_scheme_e scheme = OpenAPI_uri_scheme_NULL;
    char *fqdn = NULL;
    uint16_t fqdn_port = 0;
    ogs_sockaddr_t *addr = NULL, *addr6 = NULL;

    ogs_assert(sess);
    smf_ue = smf_ue_find_by_id(sess->smf_ue_id);
    ogs_assert(smf_ue);

    ogs_assert(recvmsg);

    if (!recvmsg->http.location) {
        ogs_error("[%s:%d] No http.location", smf_ue->supi, sess->psi);
        return false;
    }

    SmPolicyDecision = recvmsg->SmPolicyDecision;
    if (!SmPolicyDecision) {
        ogs_error("[%s:%d] No SmPolicyDecision", smf_ue->supi, sess->psi);
        return false;
    }

    memset(&header, 0, sizeof(header));
    header.uri = recvmsg->http.location;

    rv = ogs_sbi_parse_header(&message, &header);
    if (rv != OGS_OK) {
        ogs_error("[%s:%d] Cannot parse http.location [%s]",
                smf_ue->supi, sess->psi, recvmsg->http.location);
        return false;
    }

    if (!message.h.resource.component[1]) {
        ogs_error("[%s:%d] No Assocication ID [%s]",
                smf_ue->supi, sess->psi, recvmsg->http.location);

        ogs_sbi_header_free(&header);
        return false;
    }

    rc = ogs_sbi_getaddr_from_uri(
            &scheme, &fqdn, &fqdn_port, &addr, &addr6, header.uri);
    if (rc == false || scheme == OpenAPI_uri_scheme_NULL) {
        ogs_error("[%s:%d] Invalid URI [%s]",
                smf_ue->supi, sess->psi, header.uri);
        ogs_sbi_header_free(&header);
        return OGS_ERROR;
    }

    client = ogs_sbi_client_find(scheme, fqdn, fqdn_port, addr, addr6);
    if (!client) {
        ogs_debug("[%s:%d] ogs_sbi_client_add()", smf_ue->supi, sess->psi);
        client = ogs_sbi_client_add(scheme, fqdn, fqdn_port, addr, addr6);
        if (!client) {
            ogs_error("[%s:%d] ogs_sbi_client_add() failed",
                    smf_ue->supi, sess->psi);

            ogs_sbi_header_free(&header);
            ogs_free(fqdn);
            ogs_freeaddrinfo(addr);
            ogs_freeaddrinfo(addr6);

            return OGS_ERROR;
        }
    }

    OGS_SBI_SETUP_CLIENT(&sess->policy_association, client);

    ogs_free(fqdn);
    ogs_freeaddrinfo(addr);
    ogs_freeaddrinfo(addr6);

    PCF_SM_POLICY_STORE(sess, header.uri, message.h.resource.component[1]);

    ogs_sbi_header_free(&header);

    /* SBI Features */
    if (SmPolicyDecision->supp_feat) {
        uint64_t supported_features =
            ogs_uint64_from_string(SmPolicyDecision->supp_feat);
        sess->smpolicycontrol_features &= supported_features;
    } else {
        sess->smpolicycontrol_features = 0;
    }

    /*********************************************************************
     * Handle Policy Control Request Triggers
     *********************************************************************/

    /* Get policy control request triggers */
    memset(&trigger_results, 0, sizeof(trigger_results));
    OpenAPI_list_for_each(SmPolicyDecision->policy_ctrl_req_triggers, node) {
        if (node->data) {
            OpenAPI_policy_control_request_trigger_e trigger_id =
                (intptr_t)node->data;

            ogs_assert(trigger_id < MAX_TRIGGER_ID);
            trigger_results[trigger_id] = true;
        }
    }

    /* Update authorized session-AMBR */
    if (SmPolicyDecision->sess_rules) {
        OpenAPI_map_t *SessRuleMap = NULL;
        OpenAPI_session_rule_t *SessionRule = NULL;

        OpenAPI_ambr_t *AuthSessAmbr = NULL;
        OpenAPI_authorized_default_qos_t *AuthDefQos = NULL;

        OpenAPI_list_for_each(SmPolicyDecision->sess_rules, node) {
            SessRuleMap = node->data;
            if (!SessRuleMap) {
                ogs_error("No SessRuleMap");
                continue;
            }

            SessionRule = SessRuleMap->value;
            if (!SessionRule) {
                ogs_error("No SessionRule");
                continue;
            }


            AuthSessAmbr = SessionRule->auth_sess_ambr;
            if (AuthSessAmbr && trigger_results[
                OpenAPI_policy_control_request_trigger_SE_AMBR_CH] == true) {
                if (AuthSessAmbr->uplink)
                    sess->session.ambr.uplink =
                        ogs_sbi_bitrate_from_string(AuthSessAmbr->uplink);
                if (AuthSessAmbr->downlink)
                    sess->session.ambr.downlink =
                        ogs_sbi_bitrate_from_string(AuthSessAmbr->downlink);
            }

            AuthDefQos = SessionRule->auth_def_qos;
            if (AuthDefQos && trigger_results[
                OpenAPI_policy_control_request_trigger_DEF_QOS_CH] == true) {
                sess->session.qos.index = AuthDefQos->_5qi;
                sess->session.qos.arp.priority_level =
                    AuthDefQos->priority_level;
                if (AuthDefQos->arp) {
                    sess->session.qos.arp.priority_level =
                            AuthDefQos->arp->priority_level;
                    if (AuthDefQos->arp->preempt_cap ==
                        OpenAPI_preemption_capability_NOT_PREEMPT)
                        sess->session.qos.arp.pre_emption_capability =
                            OGS_5GC_PRE_EMPTION_DISABLED;
                    else if (AuthDefQos->arp->preempt_cap ==
                        OpenAPI_preemption_capability_MAY_PREEMPT)
                        sess->session.qos.arp.pre_emption_capability =
                            OGS_5GC_PRE_EMPTION_ENABLED;
                    ogs_assert(sess->session.qos.arp.pre_emption_capability);

                    if (AuthDefQos->arp->preempt_vuln ==
                        OpenAPI_preemption_vulnerability_NOT_PREEMPTABLE)
                        sess->session.qos.arp.pre_emption_vulnerability =
                            OGS_5GC_PRE_EMPTION_DISABLED;
                    else if (AuthDefQos->arp->preempt_vuln ==
                        OpenAPI_preemption_vulnerability_PREEMPTABLE)
                        sess->session.qos.arp.pre_emption_vulnerability =
                            OGS_5GC_PRE_EMPTION_ENABLED;
                    ogs_assert(sess->session.qos.arp.pre_emption_vulnerability);
                }
            }
        }
    }

    /* Update authorized PCC rule & QoS */
    update_authorized_pcc_rule_and_qos(sess, SmPolicyDecision);

    ogs_info("############## End of handle create of PCF ##############");

    return true;
}

bool smf_npcf_smpolicycontrol_handle_update_notify(
        smf_sess_t *sess, ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg)
{
    ogs_info("*****npcf-handler.c: smf_npcf_smpolicycontrol_handle_update_notify()*****");
    char *strerror = NULL;
    smf_ue_t *smf_ue = NULL;

    OpenAPI_sm_policy_notification_t *SmPolicyNotification = NULL;
    OpenAPI_sm_policy_decision_t *SmPolicyDecision = NULL;

    ogs_assert(sess);
    ogs_assert(stream);
    smf_ue = smf_ue_find_by_id(sess->smf_ue_id);
    ogs_assert(smf_ue);

    ogs_assert(recvmsg);

    SmPolicyNotification = recvmsg->SmPolicyNotification;
    if (!SmPolicyNotification) {
        strerror = ogs_msprintf("[%s:%d] No SmPolicyNotification",
                smf_ue->supi, sess->psi);
        goto cleanup;
    }

    SmPolicyDecision = SmPolicyNotification->sm_policy_decision;
    if (!SmPolicyDecision) {
        strerror = ogs_msprintf("[%s:%d] No SmPolicyDecision",
                smf_ue->supi, sess->psi);
        goto cleanup;
    }

    /* Update authorized PCC rule & QoS */
    update_authorized_pcc_rule_and_qos(sess, SmPolicyDecision);

    ogs_assert(true == ogs_sbi_send_http_status_no_content(stream));

    smf_qos_flow_binding(sess);

    return true;

cleanup:
    ogs_assert(strerror);

    ogs_error("%s", strerror);
    ogs_assert(true ==
        ogs_sbi_server_send_error(stream, OGS_SBI_HTTP_STATUS_BAD_REQUEST,
            recvmsg, strerror, NULL, NULL));
    ogs_free(strerror);

    return false;
}

bool smf_npcf_smpolicycontrol_handle_terminate_notify(
        smf_sess_t *sess, ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg)
{
    ogs_info("*****npcf-handler.c: smf_npcf_smpolicycontrol_handle_terminate_notify()*****");
    smf_ue_t *smf_ue = NULL;
    smf_npcf_smpolicycontrol_param_t param;
    int r;

    ogs_assert(sess);
    ogs_assert(stream);
    smf_ue = smf_ue_find_by_id(sess->smf_ue_id);
    ogs_assert(smf_ue);

    ogs_assert(recvmsg);

    ogs_assert(true == ogs_sbi_send_http_status_no_content(stream));

    if (PCF_SM_POLICY_ASSOCIATED(sess)) {
        memset(&param, 0, sizeof(param));
        r = smf_sbi_discover_and_send(
                OGS_SBI_SERVICE_TYPE_NPCF_SMPOLICYCONTROL, NULL,
                smf_npcf_smpolicycontrol_build_delete,
                sess, NULL, OGS_PFCP_DELETE_TRIGGER_PCF_INITIATED, &param);
        ogs_expect(r == OGS_OK);
        ogs_assert(r != OGS_ERROR);
    } else {
        ogs_error("[%s:%d] No PolicyAssociationId. Forcibly remove SESSION",
                smf_ue->supi, sess->psi);
        SMF_SESS_CLEAR(sess);
    }

    return true;
}
