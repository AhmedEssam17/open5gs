#include "nchf-build.h"
#include "model/nf_identification.h"

ogs_sbi_request_t *smf_nchf_build_get(smf_sess_t *sess, void *data){

    ogs_info("*****nchf-build.c: smf_nchf_build_get()*****");

    ogs_sbi_message_t message;
    ogs_sbi_header_t header;
    ogs_sbi_request_t *request = NULL;
    ogs_sbi_server_t *server = NULL;

    server = ogs_sbi_server_first();
    if(!server){
        ogs_error("No Server");
    }

    OpenAPI_charging_data_request_t ChargingDataRequest;

    smf_ue_t *smf_ue = NULL;

    memset(&message, 0, sizeof(message));
    memset(&header, 0, sizeof(header));
    memset(&ChargingDataRequest, 0, sizeof(ChargingDataRequest));

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

    header.service.name = (char *)OGS_SBI_SERVICE_NAME_NSMF_CALLBACK;
    header.api.version = (char *)OGS_SBI_API_V1;
    header.resource.component[0] = (char *)OGS_SBI_RESOURCE_NAME_SM_POLICY_NOTIFY;

    ChargingDataRequest.subscriber_identifier = smf_ue->supi;

    ChargingDataRequest.is_charging_id = 10;

    OpenAPI_nf_identification_t nf_identification;
    memset(&nf_identification, 0, sizeof(nf_identification));

    nf_identification.n_f_name = (char *)"SMF";
    nf_identification.n_fipv4_address = (char *)"127.0.0.4";
    nf_identification.n_node_functionality= (char *)"SMF";

    ChargingDataRequest.nf_consumer_identification = &nf_identification;
    
    ChargingDataRequest.invocation_time_stamp = ogs_sbi_gmtime_string(sess->ue_location_timestamp);
    ChargingDataRequest.invocation_sequence_number = 0;
    ChargingDataRequest.notify_uri = ogs_sbi_server_uri(server, &header);

    OpenAPI_pdu_session_charging_information_t pdu_session_charging_information;
    memset(&pdu_session_charging_information, 0, sizeof(pdu_session_charging_information));
    pdu_session_charging_information.is_charging_id = 1;
    
    OpenAPI_user_information_t user_information;
    memset(&user_information, 0, sizeof(user_information));
    user_information.served_gpsi = (char *)"msisdn-";
    pdu_session_charging_information.user_information = &user_information;

    OpenAPI_pdu_session_information_t pdu_session_information;
    memset(&pdu_session_information, 0, sizeof(pdu_session_information));
    pdu_session_charging_information.is_charging_id = 1;
    pdu_session_information.dnn_id = (char *)"internet";
    pdu_session_information.pdu_type = OpenAPI_pdu_session_type_IPV4;
    
    OpenAPI_network_slicing_info_t network_slicing_info;
    memset(&network_slicing_info, 0, sizeof(network_slicing_info));
    OpenAPI_snssai_t snssai;
    memset(&snssai, 0, sizeof(snssai));
    snssai.sst = 1;
    snssai.sd = (char *)"010203";
    network_slicing_info.s_nssai = &snssai;
    pdu_session_information.network_slicing_info = &network_slicing_info;
    
    OpenAPI_serving_network_function_id_t serving_network_function_id;
    memset(&serving_network_function_id, 0, sizeof(serving_network_function_id));
    serving_network_function_id.serving_network_function_information=&nf_identification;
    pdu_session_information.serving_network_function_id = &serving_network_function_id;

    pdu_session_charging_information.pdu_session_information = &pdu_session_information;
    ChargingDataRequest.p_du_session_charging_information = &pdu_session_charging_information;
    message.ChargingDataRequest = &ChargingDataRequest;
    
    request = ogs_sbi_build_request(&message);
    ogs_expect(request);

    return request;
}