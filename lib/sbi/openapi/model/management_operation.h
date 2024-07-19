/*
 * management_operation.h
 *
 * 
 */

#ifndef _OpenAPI_management_operation_H_
#define _OpenAPI_management_operation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "management_operation_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_management_operation_s OpenAPI_management_operation_t;
typedef struct OpenAPI_management_operation_s {
} OpenAPI_management_operation_t;

OpenAPI_management_operation_t *OpenAPI_management_operation_create(
);
void OpenAPI_management_operation_free(OpenAPI_management_operation_t *management_operation);
OpenAPI_management_operation_t *OpenAPI_management_operation_parseFromJSON(cJSON *management_operationJSON);
cJSON *OpenAPI_management_operation_convertToJSON(OpenAPI_management_operation_t *management_operation);
OpenAPI_management_operation_t *OpenAPI_management_operation_copy(OpenAPI_management_operation_t *dst, OpenAPI_management_operation_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_management_operation_H_ */

