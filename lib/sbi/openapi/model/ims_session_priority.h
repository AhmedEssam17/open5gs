/*
 * ims_session_priority.h
 *
 * 
 */

#ifndef _OpenAPI_ims_session_priority_H_
#define _OpenAPI_ims_session_priority_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "ims_session_priority_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_ims_session_priority_s OpenAPI_ims_session_priority_t;
typedef struct OpenAPI_ims_session_priority_s {
} OpenAPI_ims_session_priority_t;

OpenAPI_ims_session_priority_t *OpenAPI_ims_session_priority_create(
);
void OpenAPI_ims_session_priority_free(OpenAPI_ims_session_priority_t *ims_session_priority);
OpenAPI_ims_session_priority_t *OpenAPI_ims_session_priority_parseFromJSON(cJSON *ims_session_priorityJSON);
cJSON *OpenAPI_ims_session_priority_convertToJSON(OpenAPI_ims_session_priority_t *ims_session_priority);
OpenAPI_ims_session_priority_t *OpenAPI_ims_session_priority_copy(OpenAPI_ims_session_priority_t *dst, OpenAPI_ims_session_priority_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_ims_session_priority_H_ */

