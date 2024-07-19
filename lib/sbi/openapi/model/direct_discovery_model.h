/*
 * direct_discovery_model.h
 *
 * 
 */

#ifndef _OpenAPI_direct_discovery_model_H_
#define _OpenAPI_direct_discovery_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "direct_discovery_model_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_direct_discovery_model_s OpenAPI_direct_discovery_model_t;
typedef struct OpenAPI_direct_discovery_model_s {
} OpenAPI_direct_discovery_model_t;

OpenAPI_direct_discovery_model_t *OpenAPI_direct_discovery_model_create(
);
void OpenAPI_direct_discovery_model_free(OpenAPI_direct_discovery_model_t *direct_discovery_model);
OpenAPI_direct_discovery_model_t *OpenAPI_direct_discovery_model_parseFromJSON(cJSON *direct_discovery_modelJSON);
cJSON *OpenAPI_direct_discovery_model_convertToJSON(OpenAPI_direct_discovery_model_t *direct_discovery_model);
OpenAPI_direct_discovery_model_t *OpenAPI_direct_discovery_model_copy(OpenAPI_direct_discovery_model_t *dst, OpenAPI_direct_discovery_model_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_direct_discovery_model_H_ */

