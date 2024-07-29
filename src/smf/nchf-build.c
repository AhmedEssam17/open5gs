#include "nchf-build.h"
#include "model/nf_identification.h"

ogs_sbi_request_t *smf_nchf_build_get(smf_sess_t *sess, void *data){

    ogs_info("*****nchf-build.c: smf_nchf_build_get()*****");

    ogs_sbi_message_t message;
    ogs_sbi_header_t header;
    ogs_sbi_request_t *request = NULL;
    ogs_sbi_server_t *server = NULL;
    OpenAPI_nf_identification_t nf_identification;
    OpenAPI_pdu_session_charging_information_t pdu_session_charging_information;
    OpenAPI_user_information_t user_information;
    OpenAPI_pdu_session_information_t pdu_session_information;
    OpenAPI_network_slicing_info_t network_slicing_info;
    OpenAPI_snssai_t snssai;
    OpenAPI_serving_network_function_id_t serving_network_function_id;

    ogs_uuid_t uuid;
    char id[OGS_UUID_FORMATTED_LENGTH + 1];

    server = ogs_sbi_server_first();
    if(!server){
        ogs_error("No Server");
    }

    OpenAPI_charging_data_request_t ChargingDataRequest;

    smf_ue_t *smf_ue = NULL;

    memset(&user_information, 0, sizeof(user_information));
    memset(&nf_identification, 0, sizeof(nf_identification));
    memset(&message, 0, sizeof(message));
    memset(&header, 0, sizeof(header));
    memset(&ChargingDataRequest, 0, sizeof(ChargingDataRequest));
    memset(&pdu_session_charging_information, 0, sizeof(pdu_session_charging_information));
    memset(&pdu_session_information, 0, sizeof(pdu_session_information));
    memset(&network_slicing_info, 0, sizeof(network_slicing_info));
    memset(&snssai, 0, sizeof(snssai));
    memset(&serving_network_function_id, 0, sizeof(serving_network_function_id));


    ogs_assert(sess);
    ogs_assert(sess->sm_context_ref);
    ogs_assert(sess->session.name);
    smf_ue = smf_ue_find_by_id(sess->smf_ue_id);
    ogs_assert(smf_ue);

    message.h.method = (char *)OGS_SBI_HTTP_METHOD_POST;
    message.h.service.name = (char *)OGS_SBI_SERVICE_NAME_NCHF_CONVERGEDCHARGING;
    message.h.api.version = (char *)OGS_SBI_API_V1;
    message.h.resource.component[0] = (char *)"chargingdata";
    message.http.content_type = (char *)OGS_SBI_CONTENT_JSON_TYPE;

    ogs_uuid_get(&uuid);
    ogs_uuid_format(id, &uuid);
    const char* notify_urn = "notify_urn:uuid:";
    char *notify_uri = ogs_msprintf("%s%s", notify_urn, id);

    //TODO: remove OGS_SBI_API_V1
    header.service.name = (char *)OGS_SBI_SERVICE_NAME_NSMF_CALLBACK;
    header.api.version = (char *)OGS_SBI_API_V1;    
    header.resource.component[0] = (char *)notify_uri;

    ChargingDataRequest.subscriber_identifier = smf_ue->supi;

    ChargingDataRequest.is_charging_id = sess->charging.id;

    nf_identification.n_f_name = OpenAPI_node_functionality_any_of_ToString(OpenAPI_node_functionality_any_of_SMF);
    nf_identification.n_node_functionality = OpenAPI_node_functionality_any_of_ToString(OpenAPI_node_functionality_any_of_SMF);
    nf_identification.n_fipv4_address = ogs_ipv4_to_string(sess->ipv4->addr[0]);

    ChargingDataRequest.nf_consumer_identification = &nf_identification;
    
    ChargingDataRequest.invocation_time_stamp = ogs_sbi_gmtime_string(sess->ue_location_timestamp);
    ChargingDataRequest.invocation_sequence_number = 0;
    ChargingDataRequest.notify_uri = ogs_sbi_server_uri(server, &header);
    
    pdu_session_charging_information.is_charging_id = sess->charging.id;
    
    user_information.served_gpsi = (char *)"msisdn-";
    pdu_session_charging_information.user_information = &user_information;

    pdu_session_charging_information.is_charging_id = sess->charging.id;
    pdu_session_information.pdu_type = OpenAPI_pdu_session_type_IPV4;

    pdu_session_information.dnn_id = ogs_strdup(sess->session.name);
    ogs_assert(pdu_session_information.dnn_id);

    snssai.sst = sess->s_nssai.sst;
    snssai.sd = ogs_s_nssai_sd_to_string(sess->s_nssai.sd);
    network_slicing_info.s_nssai = &snssai;
    pdu_session_information.network_slicing_info = &network_slicing_info;
    
    serving_network_function_id.serving_network_function_information=&nf_identification;
    pdu_session_information.serving_network_function_id = &serving_network_function_id;

    pdu_session_charging_information.pdu_session_information = &pdu_session_information;
    ChargingDataRequest.p_du_session_charging_information = &pdu_session_charging_information;
    message.ChargingDataRequest = &ChargingDataRequest;
    
    request = ogs_sbi_build_request(&message);
    ogs_expect(request);

    return request;
}
