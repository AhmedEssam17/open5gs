/*
 * role_of_ims_node.h
 *
 * 
 */

#ifndef _OpenAPI_role_of_ims_node_H_
#define _OpenAPI_role_of_ims_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "role_of_ims_node_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_role_of_ims_node_s OpenAPI_role_of_ims_node_t;
typedef struct OpenAPI_role_of_ims_node_s {
} OpenAPI_role_of_ims_node_t;

OpenAPI_role_of_ims_node_t *OpenAPI_role_of_ims_node_create(
);
void OpenAPI_role_of_ims_node_free(OpenAPI_role_of_ims_node_t *role_of_ims_node);
OpenAPI_role_of_ims_node_t *OpenAPI_role_of_ims_node_parseFromJSON(cJSON *role_of_ims_nodeJSON);
cJSON *OpenAPI_role_of_ims_node_convertToJSON(OpenAPI_role_of_ims_node_t *role_of_ims_node);
OpenAPI_role_of_ims_node_t *OpenAPI_role_of_ims_node_copy(OpenAPI_role_of_ims_node_t *dst, OpenAPI_role_of_ims_node_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_role_of_ims_node_H_ */

