
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nni_type.h"

OpenAPI_nni_type_t *OpenAPI_nni_type_create(
)
{
    OpenAPI_nni_type_t *nni_type_local_var = ogs_malloc(sizeof(OpenAPI_nni_type_t));
    ogs_assert(nni_type_local_var);


    return nni_type_local_var;
}

void OpenAPI_nni_type_free(OpenAPI_nni_type_t *nni_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nni_type) {
        return;
    }
    ogs_free(nni_type);
}

cJSON *OpenAPI_nni_type_convertToJSON(OpenAPI_nni_type_t *nni_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nni_type == NULL) {
        ogs_error("OpenAPI_nni_type_convertToJSON() failed [NNIType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_nni_type_t *OpenAPI_nni_type_parseFromJSON(cJSON *nni_typeJSON)
{
    OpenAPI_nni_type_t *nni_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    nni_type_local_var = OpenAPI_nni_type_create (
    );

    return nni_type_local_var;
end:
    return NULL;
}

OpenAPI_nni_type_t *OpenAPI_nni_type_copy(OpenAPI_nni_type_t *dst, OpenAPI_nni_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nni_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nni_type_convertToJSON() failed");
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

    OpenAPI_nni_type_free(dst);
    dst = OpenAPI_nni_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

