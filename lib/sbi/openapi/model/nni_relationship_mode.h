/*
 * nni_relationship_mode.h
 *
 * 
 */

#ifndef _OpenAPI_nni_relationship_mode_H_
#define _OpenAPI_nni_relationship_mode_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "nni_relationship_mode_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nni_relationship_mode_s OpenAPI_nni_relationship_mode_t;
typedef struct OpenAPI_nni_relationship_mode_s {
} OpenAPI_nni_relationship_mode_t;

OpenAPI_nni_relationship_mode_t *OpenAPI_nni_relationship_mode_create(
);
void OpenAPI_nni_relationship_mode_free(OpenAPI_nni_relationship_mode_t *nni_relationship_mode);
OpenAPI_nni_relationship_mode_t *OpenAPI_nni_relationship_mode_parseFromJSON(cJSON *nni_relationship_modeJSON);
cJSON *OpenAPI_nni_relationship_mode_convertToJSON(OpenAPI_nni_relationship_mode_t *nni_relationship_mode);
OpenAPI_nni_relationship_mode_t *OpenAPI_nni_relationship_mode_copy(OpenAPI_nni_relationship_mode_t *dst, OpenAPI_nni_relationship_mode_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nni_relationship_mode_H_ */

