/*
 * result_code_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_result_code_any_of_H_
#define _OpenAPI_result_code_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_result_code_any_of_NULL = 0, OpenAPI_result_code_any_of_SUCCESS, OpenAPI_result_code_any_of_END_USER_SERVICE_DENIED, OpenAPI_result_code_any_of_QUOTA_MANAGEMENT_NOT_APPLICABLE, OpenAPI_result_code_any_of_QUOTA_LIMIT_REACHED, OpenAPI_result_code_any_of_END_USER_SERVICE_REJECTED, OpenAPI_result_code_any_of_USER_UNKNOWN, OpenAPI_result_code_any_of_RATING_FAILED, OpenAPI_result_code_any_of_QUOTA_MANAGEMENT } OpenAPI_result_code_any_of_e;

char* OpenAPI_result_code_any_of_ToString(OpenAPI_result_code_any_of_e result_code_any_of);

OpenAPI_result_code_any_of_e OpenAPI_result_code_any_of_FromString(char* result_code_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_result_code_any_of_H_ */

