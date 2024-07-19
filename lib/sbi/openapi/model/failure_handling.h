/*
 * failure_handling.h
 *
 * 
 */

#ifndef _OpenAPI_failure_handling_H_
#define _OpenAPI_failure_handling_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "failure_handling_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_failure_handling_s OpenAPI_failure_handling_t;
typedef struct OpenAPI_failure_handling_s {
} OpenAPI_failure_handling_t;

OpenAPI_failure_handling_t *OpenAPI_failure_handling_create(
);
void OpenAPI_failure_handling_free(OpenAPI_failure_handling_t *failure_handling);
OpenAPI_failure_handling_t *OpenAPI_failure_handling_parseFromJSON(cJSON *failure_handlingJSON);
cJSON *OpenAPI_failure_handling_convertToJSON(OpenAPI_failure_handling_t *failure_handling);
OpenAPI_failure_handling_t *OpenAPI_failure_handling_copy(OpenAPI_failure_handling_t *dst, OpenAPI_failure_handling_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_failure_handling_H_ */

