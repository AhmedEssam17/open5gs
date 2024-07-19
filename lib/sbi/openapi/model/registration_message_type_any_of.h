/*
 * registration_message_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_registration_message_type_any_of_H_
#define _OpenAPI_registration_message_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_registration_message_type_any_of_NULL = 0, OpenAPI_registration_message_type_any_of_INITIAL, OpenAPI_registration_message_type_any_of_MOBILITY, OpenAPI_registration_message_type_any_of_PERIODIC, OpenAPI_registration_message_type_any_of_EMERGENCY, OpenAPI_registration_message_type_any_of_DEREGISTRATION } OpenAPI_registration_message_type_any_of_e;

char* OpenAPI_registration_message_type_any_of_ToString(OpenAPI_registration_message_type_any_of_e registration_message_type_any_of);

OpenAPI_registration_message_type_any_of_e OpenAPI_registration_message_type_any_of_FromString(char* registration_message_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_registration_message_type_any_of_H_ */

