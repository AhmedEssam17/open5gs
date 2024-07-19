
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tad_identifier.h"

OpenAPI_tad_identifier_t *OpenAPI_tad_identifier_create(
)
{
    OpenAPI_tad_identifier_t *tad_identifier_local_var = ogs_malloc(sizeof(OpenAPI_tad_identifier_t));
    ogs_assert(tad_identifier_local_var);


    return tad_identifier_local_var;
}

void OpenAPI_tad_identifier_free(OpenAPI_tad_identifier_t *tad_identifier)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == tad_identifier) {
        return;
    }
    ogs_free(tad_identifier);
}

cJSON *OpenAPI_tad_identifier_convertToJSON(OpenAPI_tad_identifier_t *tad_identifier)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (tad_identifier == NULL) {
        ogs_error("OpenAPI_tad_identifier_convertToJSON() failed [TADIdentifier]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_tad_identifier_t *OpenAPI_tad_identifier_parseFromJSON(cJSON *tad_identifierJSON)
{
    OpenAPI_tad_identifier_t *tad_identifier_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    tad_identifier_local_var = OpenAPI_tad_identifier_create (
    );

    return tad_identifier_local_var;
end:
    return NULL;
}

OpenAPI_tad_identifier_t *OpenAPI_tad_identifier_copy(OpenAPI_tad_identifier_t *dst, OpenAPI_tad_identifier_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_tad_identifier_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_tad_identifier_convertToJSON() failed");
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

    OpenAPI_tad_identifier_free(dst);
    dst = OpenAPI_tad_identifier_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

