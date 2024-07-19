
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "direct_discovery_model.h"

OpenAPI_direct_discovery_model_t *OpenAPI_direct_discovery_model_create(
)
{
    OpenAPI_direct_discovery_model_t *direct_discovery_model_local_var = ogs_malloc(sizeof(OpenAPI_direct_discovery_model_t));
    ogs_assert(direct_discovery_model_local_var);


    return direct_discovery_model_local_var;
}

void OpenAPI_direct_discovery_model_free(OpenAPI_direct_discovery_model_t *direct_discovery_model)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == direct_discovery_model) {
        return;
    }
    ogs_free(direct_discovery_model);
}

cJSON *OpenAPI_direct_discovery_model_convertToJSON(OpenAPI_direct_discovery_model_t *direct_discovery_model)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (direct_discovery_model == NULL) {
        ogs_error("OpenAPI_direct_discovery_model_convertToJSON() failed [DirectDiscoveryModel]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_direct_discovery_model_t *OpenAPI_direct_discovery_model_parseFromJSON(cJSON *direct_discovery_modelJSON)
{
    OpenAPI_direct_discovery_model_t *direct_discovery_model_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    direct_discovery_model_local_var = OpenAPI_direct_discovery_model_create (
    );

    return direct_discovery_model_local_var;
end:
    return NULL;
}

OpenAPI_direct_discovery_model_t *OpenAPI_direct_discovery_model_copy(OpenAPI_direct_discovery_model_t *dst, OpenAPI_direct_discovery_model_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_direct_discovery_model_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_direct_discovery_model_convertToJSON() failed");
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

    OpenAPI_direct_discovery_model_free(dst);
    dst = OpenAPI_direct_discovery_model_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

