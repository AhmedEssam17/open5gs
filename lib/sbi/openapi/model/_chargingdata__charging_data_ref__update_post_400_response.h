/*
 * _chargingdata__charging_data_ref__update_post_400_response.h
 *
 * 
 */

#ifndef _OpenAPI__chargingdata__charging_data_ref__update_post_400_response_H_
#define _OpenAPI__chargingdata__charging_data_ref__update_post_400_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "access_token_err.h"
#include "access_token_req.h"
#include "charging_data_response.h"
#include "invalid_param.h"
#include "invocation_result.h"
#include "location_reporting_charging_information.h"
#include "multiple_unit_information.h"
#include "pdu_session_charging_information.h"
#include "problem_details.h"
#include "roaming_qbc_information.h"
#include "session_failover.h"
#include "trigger.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI__chargingdata__charging_data_ref__update_post_400_response_s OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t;
typedef struct OpenAPI__chargingdata__charging_data_ref__update_post_400_response_s {
    char *type;
    char *title;
    bool is_status;
    int status;
    char *detail;
    char *instance;
    char *cause;
    OpenAPI_list_t *invalid_params;
    char *supported_features;
    struct OpenAPI_access_token_err_s *access_token_error;
    struct OpenAPI_access_token_req_s *access_token_request;
    char *nrf_id;
    char *invocation_time_stamp;
    int invocation_sequence_number;
    struct OpenAPI_invocation_result_s *invocation_result;
    struct OpenAPI_session_failover_s *session_failover;
    OpenAPI_list_t *multiple_unit_information;
    OpenAPI_list_t *triggers;
    struct OpenAPI_pdu_session_charging_information_s *p_du_session_charging_information;
    struct OpenAPI_roaming_qbc_information_s *roaming_qbc_information;
    struct OpenAPI_location_reporting_charging_information_s *location_reporting_charging_information;
} OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t;

OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *OpenAPI__chargingdata__charging_data_ref__update_post_400_response_create(
    char *type,
    char *title,
    bool is_status,
    int status,
    char *detail,
    char *instance,
    char *cause,
    OpenAPI_list_t *invalid_params,
    char *supported_features,
    OpenAPI_access_token_err_t *access_token_error,
    OpenAPI_access_token_req_t *access_token_request,
    char *nrf_id,
    char *invocation_time_stamp,
    int invocation_sequence_number,
    OpenAPI_invocation_result_t *invocation_result,
    OpenAPI_session_failover_t *session_failover,
    OpenAPI_list_t *multiple_unit_information,
    OpenAPI_list_t *triggers,
    OpenAPI_pdu_session_charging_information_t *p_du_session_charging_information,
    OpenAPI_roaming_qbc_information_t *roaming_qbc_information,
    OpenAPI_location_reporting_charging_information_t *location_reporting_charging_information
);
void OpenAPI__chargingdata__charging_data_ref__update_post_400_response_free(OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *_chargingdata__charging_data_ref__update_post_400_response);
OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *OpenAPI__chargingdata__charging_data_ref__update_post_400_response_parseFromJSON(cJSON *_chargingdata__charging_data_ref__update_post_400_responseJSON);
cJSON *OpenAPI__chargingdata__charging_data_ref__update_post_400_response_convertToJSON(OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *_chargingdata__charging_data_ref__update_post_400_response);
OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *OpenAPI__chargingdata__charging_data_ref__update_post_400_response_copy(OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *dst, OpenAPI__chargingdata__charging_data_ref__update_post_400_response_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI__chargingdata__charging_data_ref__update_post_400_response_H_ */

