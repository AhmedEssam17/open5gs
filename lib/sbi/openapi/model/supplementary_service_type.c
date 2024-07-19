
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplementary_service_type.h"

OpenAPI_supplementary_service_type_t *OpenAPI_supplementary_service_type_create(
)
{
    OpenAPI_supplementary_service_type_t *supplementary_service_type_local_var = ogs_malloc(sizeof(OpenAPI_supplementary_service_type_t));
    ogs_assert(supplementary_service_type_local_var);


    return supplementary_service_type_local_var;
}

void OpenAPI_supplementary_service_type_free(OpenAPI_supplementary_service_type_t *supplementary_service_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == supplementary_service_type) {
        return;
    }
    ogs_free(supplementary_service_type);
}

cJSON *OpenAPI_supplementary_service_type_convertToJSON(OpenAPI_supplementary_service_type_t *supplementary_service_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (supplementary_service_type == NULL) {
        ogs_error("OpenAPI_supplementary_service_type_convertToJSON() failed [SupplementaryServiceType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_supplementary_service_type_t *OpenAPI_supplementary_service_type_parseFromJSON(cJSON *supplementary_service_typeJSON)
{
    OpenAPI_supplementary_service_type_t *supplementary_service_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    supplementary_service_type_local_var = OpenAPI_supplementary_service_type_create (
    );

    return supplementary_service_type_local_var;
end:
    return NULL;
}

OpenAPI_supplementary_service_type_t *OpenAPI_supplementary_service_type_copy(OpenAPI_supplementary_service_type_t *dst, OpenAPI_supplementary_service_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_supplementary_service_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_supplementary_service_type_convertToJSON() failed");
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

    OpenAPI_supplementary_service_type_free(dst);
    dst = OpenAPI_supplementary_service_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

