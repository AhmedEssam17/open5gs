
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplementary_service_mode.h"

OpenAPI_supplementary_service_mode_t *OpenAPI_supplementary_service_mode_create(
)
{
    OpenAPI_supplementary_service_mode_t *supplementary_service_mode_local_var = ogs_malloc(sizeof(OpenAPI_supplementary_service_mode_t));
    ogs_assert(supplementary_service_mode_local_var);


    return supplementary_service_mode_local_var;
}

void OpenAPI_supplementary_service_mode_free(OpenAPI_supplementary_service_mode_t *supplementary_service_mode)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == supplementary_service_mode) {
        return;
    }
    ogs_free(supplementary_service_mode);
}

cJSON *OpenAPI_supplementary_service_mode_convertToJSON(OpenAPI_supplementary_service_mode_t *supplementary_service_mode)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (supplementary_service_mode == NULL) {
        ogs_error("OpenAPI_supplementary_service_mode_convertToJSON() failed [SupplementaryServiceMode]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_supplementary_service_mode_t *OpenAPI_supplementary_service_mode_parseFromJSON(cJSON *supplementary_service_modeJSON)
{
    OpenAPI_supplementary_service_mode_t *supplementary_service_mode_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    supplementary_service_mode_local_var = OpenAPI_supplementary_service_mode_create (
    );

    return supplementary_service_mode_local_var;
end:
    return NULL;
}

OpenAPI_supplementary_service_mode_t *OpenAPI_supplementary_service_mode_copy(OpenAPI_supplementary_service_mode_t *dst, OpenAPI_supplementary_service_mode_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_supplementary_service_mode_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_supplementary_service_mode_convertToJSON() failed");
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

    OpenAPI_supplementary_service_mode_free(dst);
    dst = OpenAPI_supplementary_service_mode_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

