/*
 * sm_message_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_sm_message_type_any_of_H_
#define _OpenAPI_sm_message_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_sm_message_type_any_of_NULL = 0, OpenAPI_sm_message_type_any_of_SUBMISSION, OpenAPI_sm_message_type_any_of_DELIVERY_REPORT, OpenAPI_sm_message_type_any_of_SM_SERVICE_REQUEST, OpenAPI_sm_message_type_any_of_DELIVERY } OpenAPI_sm_message_type_any_of_e;

char* OpenAPI_sm_message_type_any_of_ToString(OpenAPI_sm_message_type_any_of_e sm_message_type_any_of);

OpenAPI_sm_message_type_any_of_e OpenAPI_sm_message_type_any_of_FromString(char* sm_message_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_message_type_any_of_H_ */

