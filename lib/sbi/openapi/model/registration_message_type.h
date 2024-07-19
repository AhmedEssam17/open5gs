/*
 * registration_message_type.h
 *
 * 
 */

#ifndef _OpenAPI_registration_message_type_H_
#define _OpenAPI_registration_message_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "registration_message_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_registration_message_type_s OpenAPI_registration_message_type_t;
typedef struct OpenAPI_registration_message_type_s {
} OpenAPI_registration_message_type_t;

OpenAPI_registration_message_type_t *OpenAPI_registration_message_type_create(
);
void OpenAPI_registration_message_type_free(OpenAPI_registration_message_type_t *registration_message_type);
OpenAPI_registration_message_type_t *OpenAPI_registration_message_type_parseFromJSON(cJSON *registration_message_typeJSON);
cJSON *OpenAPI_registration_message_type_convertToJSON(OpenAPI_registration_message_type_t *registration_message_type);
OpenAPI_registration_message_type_t *OpenAPI_registration_message_type_copy(OpenAPI_registration_message_type_t *dst, OpenAPI_registration_message_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_registration_message_type_H_ */

