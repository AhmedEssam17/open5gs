
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "originator_party_type.h"

OpenAPI_originator_party_type_t *OpenAPI_originator_party_type_create(
)
{
    OpenAPI_originator_party_type_t *originator_party_type_local_var = ogs_malloc(sizeof(OpenAPI_originator_party_type_t));
    ogs_assert(originator_party_type_local_var);


    return originator_party_type_local_var;
}

void OpenAPI_originator_party_type_free(OpenAPI_originator_party_type_t *originator_party_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == originator_party_type) {
        return;
    }
    ogs_free(originator_party_type);
}

cJSON *OpenAPI_originator_party_type_convertToJSON(OpenAPI_originator_party_type_t *originator_party_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (originator_party_type == NULL) {
        ogs_error("OpenAPI_originator_party_type_convertToJSON() failed [OriginatorPartyType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_originator_party_type_t *OpenAPI_originator_party_type_parseFromJSON(cJSON *originator_party_typeJSON)
{
    OpenAPI_originator_party_type_t *originator_party_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    originator_party_type_local_var = OpenAPI_originator_party_type_create (
    );

    return originator_party_type_local_var;
end:
    return NULL;
}

OpenAPI_originator_party_type_t *OpenAPI_originator_party_type_copy(OpenAPI_originator_party_type_t *dst, OpenAPI_originator_party_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_originator_party_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_originator_party_type_convertToJSON() failed");
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

    OpenAPI_originator_party_type_free(dst);
    dst = OpenAPI_originator_party_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

