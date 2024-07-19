/*
 * notification_type.h
 *
 * 
 */

#ifndef _OpenAPI_notification_type_H_
#define _OpenAPI_notification_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "notification_type.h"
#include "notification_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_notification_type_s OpenAPI_notification_type_t;
typedef struct OpenAPI_notification_type_s {
} OpenAPI_notification_type_t;

OpenAPI_notification_type_t *OpenAPI_notification_type_create(
);
void OpenAPI_notification_type_free(OpenAPI_notification_type_t *notification_type);
OpenAPI_notification_type_t *OpenAPI_notification_type_parseFromJSON(cJSON *notification_typeJSON);
cJSON *OpenAPI_notification_type_convertToJSON(OpenAPI_notification_type_t *notification_type);
OpenAPI_notification_type_t *OpenAPI_notification_type_copy(OpenAPI_notification_type_t *dst, OpenAPI_notification_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_notification_type_H_ */

