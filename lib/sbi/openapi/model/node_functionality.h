/*
 * node_functionality.h
 *
 * 
 */

#ifndef _OpenAPI_node_functionality_H_
#define _OpenAPI_node_functionality_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "node_functionality_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_node_functionality_s OpenAPI_node_functionality_t;
typedef struct OpenAPI_node_functionality_s {
} OpenAPI_node_functionality_t;

OpenAPI_node_functionality_t *OpenAPI_node_functionality_create(
);
void OpenAPI_node_functionality_free(OpenAPI_node_functionality_t *node_functionality);
OpenAPI_node_functionality_t *OpenAPI_node_functionality_parseFromJSON(cJSON *node_functionalityJSON);
cJSON *OpenAPI_node_functionality_convertToJSON(OpenAPI_node_functionality_t *node_functionality);
OpenAPI_node_functionality_t *OpenAPI_node_functionality_copy(OpenAPI_node_functionality_t *dst, OpenAPI_node_functionality_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_node_functionality_H_ */

