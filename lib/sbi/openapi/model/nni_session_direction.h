/*
 * nni_session_direction.h
 *
 * 
 */

#ifndef _OpenAPI_nni_session_direction_H_
#define _OpenAPI_nni_session_direction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "nni_session_direction_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nni_session_direction_s OpenAPI_nni_session_direction_t;
typedef struct OpenAPI_nni_session_direction_s {
} OpenAPI_nni_session_direction_t;

OpenAPI_nni_session_direction_t *OpenAPI_nni_session_direction_create(
);
void OpenAPI_nni_session_direction_free(OpenAPI_nni_session_direction_t *nni_session_direction);
OpenAPI_nni_session_direction_t *OpenAPI_nni_session_direction_parseFromJSON(cJSON *nni_session_directionJSON);
cJSON *OpenAPI_nni_session_direction_convertToJSON(OpenAPI_nni_session_direction_t *nni_session_direction);
OpenAPI_nni_session_direction_t *OpenAPI_nni_session_direction_copy(OpenAPI_nni_session_direction_t *dst, OpenAPI_nni_session_direction_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nni_session_direction_H_ */

