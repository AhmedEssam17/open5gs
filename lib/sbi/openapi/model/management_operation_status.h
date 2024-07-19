/*
 * management_operation_status.h
 *
 * 
 */

#ifndef _OpenAPI_management_operation_status_H_
#define _OpenAPI_management_operation_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "management_operation_status_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_management_operation_status_s OpenAPI_management_operation_status_t;
typedef struct OpenAPI_management_operation_status_s {
} OpenAPI_management_operation_status_t;

OpenAPI_management_operation_status_t *OpenAPI_management_operation_status_create(
);
void OpenAPI_management_operation_status_free(OpenAPI_management_operation_status_t *management_operation_status);
OpenAPI_management_operation_status_t *OpenAPI_management_operation_status_parseFromJSON(cJSON *management_operation_statusJSON);
cJSON *OpenAPI_management_operation_status_convertToJSON(OpenAPI_management_operation_status_t *management_operation_status);
OpenAPI_management_operation_status_t *OpenAPI_management_operation_status_copy(OpenAPI_management_operation_status_t *dst, OpenAPI_management_operation_status_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_management_operation_status_H_ */

