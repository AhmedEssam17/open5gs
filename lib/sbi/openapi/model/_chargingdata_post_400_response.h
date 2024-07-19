/*
 * _chargingdata_post_400_response.h
 *
 * 
 */

#ifndef _OpenAPI__chargingdata_post_400_response_H_
#define _OpenAPI__chargingdata_post_400_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "access_token_err.h"
#include "access_token_req.h"
#include "charging_notify_response.h"
#include "invalid_param.h"
#include "invocation_result.h"
#include "problem_details.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI__chargingdata_post_400_response_s OpenAPI__chargingdata_post_400_response_t;
typedef struct OpenAPI__chargingdata_post_400_response_s {
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
    struct OpenAPI_invocation_result_s *invocation_result;
} OpenAPI__chargingdata_post_400_response_t;

OpenAPI__chargingdata_post_400_response_t *OpenAPI__chargingdata_post_400_response_create(
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
    OpenAPI_invocation_result_t *invocation_result
);
void OpenAPI__chargingdata_post_400_response_free(OpenAPI__chargingdata_post_400_response_t *_chargingdata_post_400_response);
OpenAPI__chargingdata_post_400_response_t *OpenAPI__chargingdata_post_400_response_parseFromJSON(cJSON *_chargingdata_post_400_responseJSON);
cJSON *OpenAPI__chargingdata_post_400_response_convertToJSON(OpenAPI__chargingdata_post_400_response_t *_chargingdata_post_400_response);
OpenAPI__chargingdata_post_400_response_t *OpenAPI__chargingdata_post_400_response_copy(OpenAPI__chargingdata_post_400_response_t *dst, OpenAPI__chargingdata_post_400_response_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI__chargingdata_post_400_response_H_ */

