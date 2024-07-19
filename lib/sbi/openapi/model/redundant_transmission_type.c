
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "redundant_transmission_type.h"

OpenAPI_redundant_transmission_type_t *OpenAPI_redundant_transmission_type_create(
)
{
    OpenAPI_redundant_transmission_type_t *redundant_transmission_type_local_var = ogs_malloc(sizeof(OpenAPI_redundant_transmission_type_t));
    ogs_assert(redundant_transmission_type_local_var);


    return redundant_transmission_type_local_var;
}

void OpenAPI_redundant_transmission_type_free(OpenAPI_redundant_transmission_type_t *redundant_transmission_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == redundant_transmission_type) {
        return;
    }
    ogs_free(redundant_transmission_type);
}

cJSON *OpenAPI_redundant_transmission_type_convertToJSON(OpenAPI_redundant_transmission_type_t *redundant_transmission_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (redundant_transmission_type == NULL) {
        ogs_error("OpenAPI_redundant_transmission_type_convertToJSON() failed [RedundantTransmissionType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_redundant_transmission_type_t *OpenAPI_redundant_transmission_type_parseFromJSON(cJSON *redundant_transmission_typeJSON)
{
    OpenAPI_redundant_transmission_type_t *redundant_transmission_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    redundant_transmission_type_local_var = OpenAPI_redundant_transmission_type_create (
    );

    return redundant_transmission_type_local_var;
end:
    return NULL;
}

OpenAPI_redundant_transmission_type_t *OpenAPI_redundant_transmission_type_copy(OpenAPI_redundant_transmission_type_t *dst, OpenAPI_redundant_transmission_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_redundant_transmission_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_redundant_transmission_type_convertToJSON() failed");
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

    OpenAPI_redundant_transmission_type_free(dst);
    dst = OpenAPI_redundant_transmission_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

