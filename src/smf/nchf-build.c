#include "nchf-build.h"

ogs_sbi_request_t *smf_nchf_build_get(smf_sess_t *sess, void *data){

    ogs_info("*****nchf-build.c: smf_nchf_build_get()*****");

    ogs_sbi_message_t message;
    ogs_sbi_header_t header;
    ogs_sbi_request_t *request = NULL;
    ogs_sbi_server_t *server = NULL;

    ogs_info("*****ogs_sbi_server_first****");
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
    ogs_info("*****smf_ue_find_by_id****");
    smf_ue = smf_ue_find_by_id(sess->smf_ue_id);
    ogs_assert(smf_ue);

    message.h.method = (char *)OGS_SBI_HTTP_METHOD_POST;
    message.h.service.name = (char *)OGS_SBI_SERVICE_TYPE_NCHF_CONVERGEDCHARGING;
    message.h.api.version = (char *)OGS_SBI_API_V1;
    message.h.resource.component[0] = (char *)"chargingdata";

    // ogs_info("message.h.service.name = %s", message.h.service.name);

    // header.service.name = (char *)OGS_SBI_SERVICE_NAME_NSMF_CALLBACK;
    // header.api.version = (char *)OGS_SBI_API_V1;
    // header.resource.component[0] = (char *)OGS_SBI_CALLBACK_NCHF_CONVERGEDCHARGING_NOTIFY;

    // ChargingDataRequest.subscriber_identifier = smf_ue->supi;

    // ChargingDataRequest.charging_id = 10;

    // OpenAPI_nf_identification_t nf_identification;

    // nf_identification.n_f_name = (char *)"smf";
    // nf_identification.n_fipv4_address = (char *)"127.0.0.4";

    // ChargingDataRequest.nf_consumer_identification = &nf_identification;

    // ogs_info("*****ogs_sbi_gmtime_string****");
    // ChargingDataRequest.invocation_time_stamp = ogs_sbi_gmtime_string(sess->ue_location_timestamp);
    // ChargingDataRequest.invocation_sequence_number = 0;
    // ogs_info("*****ogs_sbi_server_uri****");
    // ChargingDataRequest.notify_uri = ogs_sbi_server_uri(server, &header);

    // message.ChargingDataRequest = &ChargingDataRequest;

    ogs_info("*****ogs_sbi_build_request****");
    request = ogs_sbi_build_request(&message);
    ogs_info("*****ogs_sbi_build_request completed*****");
    ogs_expect(request);

    ogs_info("*****nchf-build.c: end of smf_nchf_build_get()*****");

    return request;
}