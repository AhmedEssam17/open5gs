
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sm_addressee_type.h"

OpenAPI_sm_addressee_type_t *OpenAPI_sm_addressee_type_create(
)
{
    OpenAPI_sm_addressee_type_t *sm_addressee_type_local_var = ogs_malloc(sizeof(OpenAPI_sm_addressee_type_t));
    ogs_assert(sm_addressee_type_local_var);


    return sm_addressee_type_local_var;
}

void OpenAPI_sm_addressee_type_free(OpenAPI_sm_addressee_type_t *sm_addressee_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == sm_addressee_type) {
        return;
    }
    ogs_free(sm_addressee_type);
}

cJSON *OpenAPI_sm_addressee_type_convertToJSON(OpenAPI_sm_addressee_type_t *sm_addressee_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (sm_addressee_type == NULL) {
        ogs_error("OpenAPI_sm_addressee_type_convertToJSON() failed [SMAddresseeType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_sm_addressee_type_t *OpenAPI_sm_addressee_type_parseFromJSON(cJSON *sm_addressee_typeJSON)
{
    OpenAPI_sm_addressee_type_t *sm_addressee_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    sm_addressee_type_local_var = OpenAPI_sm_addressee_type_create (
    );

    return sm_addressee_type_local_var;
end:
    return NULL;
}

OpenAPI_sm_addressee_type_t *OpenAPI_sm_addressee_type_copy(OpenAPI_sm_addressee_type_t *dst, OpenAPI_sm_addressee_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_sm_addressee_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_sm_addressee_type_convertToJSON() failed");
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

    OpenAPI_sm_addressee_type_free(dst);
    dst = OpenAPI_sm_addressee_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

