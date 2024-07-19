
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nni_relationship_mode.h"

OpenAPI_nni_relationship_mode_t *OpenAPI_nni_relationship_mode_create(
)
{
    OpenAPI_nni_relationship_mode_t *nni_relationship_mode_local_var = ogs_malloc(sizeof(OpenAPI_nni_relationship_mode_t));
    ogs_assert(nni_relationship_mode_local_var);


    return nni_relationship_mode_local_var;
}

void OpenAPI_nni_relationship_mode_free(OpenAPI_nni_relationship_mode_t *nni_relationship_mode)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nni_relationship_mode) {
        return;
    }
    ogs_free(nni_relationship_mode);
}

cJSON *OpenAPI_nni_relationship_mode_convertToJSON(OpenAPI_nni_relationship_mode_t *nni_relationship_mode)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nni_relationship_mode == NULL) {
        ogs_error("OpenAPI_nni_relationship_mode_convertToJSON() failed [NNIRelationshipMode]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_nni_relationship_mode_t *OpenAPI_nni_relationship_mode_parseFromJSON(cJSON *nni_relationship_modeJSON)
{
    OpenAPI_nni_relationship_mode_t *nni_relationship_mode_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    nni_relationship_mode_local_var = OpenAPI_nni_relationship_mode_create (
    );

    return nni_relationship_mode_local_var;
end:
    return NULL;
}

OpenAPI_nni_relationship_mode_t *OpenAPI_nni_relationship_mode_copy(OpenAPI_nni_relationship_mode_t *dst, OpenAPI_nni_relationship_mode_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nni_relationship_mode_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nni_relationship_mode_convertToJSON() failed");
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

    OpenAPI_nni_relationship_mode_free(dst);
    dst = OpenAPI_nni_relationship_mode_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

