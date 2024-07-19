
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "role_of_ims_node.h"

OpenAPI_role_of_ims_node_t *OpenAPI_role_of_ims_node_create(
)
{
    OpenAPI_role_of_ims_node_t *role_of_ims_node_local_var = ogs_malloc(sizeof(OpenAPI_role_of_ims_node_t));
    ogs_assert(role_of_ims_node_local_var);


    return role_of_ims_node_local_var;
}

void OpenAPI_role_of_ims_node_free(OpenAPI_role_of_ims_node_t *role_of_ims_node)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == role_of_ims_node) {
        return;
    }
    ogs_free(role_of_ims_node);
}

cJSON *OpenAPI_role_of_ims_node_convertToJSON(OpenAPI_role_of_ims_node_t *role_of_ims_node)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (role_of_ims_node == NULL) {
        ogs_error("OpenAPI_role_of_ims_node_convertToJSON() failed [RoleOfIMSNode]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_role_of_ims_node_t *OpenAPI_role_of_ims_node_parseFromJSON(cJSON *role_of_ims_nodeJSON)
{
    OpenAPI_role_of_ims_node_t *role_of_ims_node_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    role_of_ims_node_local_var = OpenAPI_role_of_ims_node_create (
    );

    return role_of_ims_node_local_var;
end:
    return NULL;
}

OpenAPI_role_of_ims_node_t *OpenAPI_role_of_ims_node_copy(OpenAPI_role_of_ims_node_t *dst, OpenAPI_role_of_ims_node_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_role_of_ims_node_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_role_of_ims_node_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_role_of_ims_node_free(dst);
    dst = OpenAPI_role_of_ims_node_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

