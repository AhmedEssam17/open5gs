
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "node_functionality.h"

OpenAPI_node_functionality_t *OpenAPI_node_functionality_create(
)
{
    OpenAPI_node_functionality_t *node_functionality_local_var = ogs_malloc(sizeof(OpenAPI_node_functionality_t));
    ogs_assert(node_functionality_local_var);


    return node_functionality_local_var;
}

void OpenAPI_node_functionality_free(OpenAPI_node_functionality_t *node_functionality)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == node_functionality) {
        return;
    }
    ogs_free(node_functionality);
}

cJSON *OpenAPI_node_functionality_convertToJSON(OpenAPI_node_functionality_t *node_functionality)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (node_functionality == NULL) {
        ogs_error("OpenAPI_node_functionality_convertToJSON() failed [NodeFunctionality]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_node_functionality_t *OpenAPI_node_functionality_parseFromJSON(cJSON *node_functionalityJSON)
{
    OpenAPI_node_functionality_t *node_functionality_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    node_functionality_local_var = OpenAPI_node_functionality_create (
    );

    return node_functionality_local_var;
end:
    return NULL;
}

OpenAPI_node_functionality_t *OpenAPI_node_functionality_copy(OpenAPI_node_functionality_t *dst, OpenAPI_node_functionality_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_node_functionality_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_node_functionality_convertToJSON() failed");
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

    OpenAPI_node_functionality_free(dst);
    dst = OpenAPI_node_functionality_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

