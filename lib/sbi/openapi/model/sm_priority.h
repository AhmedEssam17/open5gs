/*
 * sm_priority.h
 *
 * 
 */

#ifndef _OpenAPI_sm_priority_H_
#define _OpenAPI_sm_priority_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "sm_priority_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sm_priority_s OpenAPI_sm_priority_t;
typedef struct OpenAPI_sm_priority_s {
} OpenAPI_sm_priority_t;

OpenAPI_sm_priority_t *OpenAPI_sm_priority_create(
);
void OpenAPI_sm_priority_free(OpenAPI_sm_priority_t *sm_priority);
OpenAPI_sm_priority_t *OpenAPI_sm_priority_parseFromJSON(cJSON *sm_priorityJSON);
cJSON *OpenAPI_sm_priority_convertToJSON(OpenAPI_sm_priority_t *sm_priority);
OpenAPI_sm_priority_t *OpenAPI_sm_priority_copy(OpenAPI_sm_priority_t *dst, OpenAPI_sm_priority_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_priority_H_ */

