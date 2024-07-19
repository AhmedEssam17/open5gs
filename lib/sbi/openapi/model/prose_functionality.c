
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prose_functionality.h"

OpenAPI_prose_functionality_t *OpenAPI_prose_functionality_create(
)
{
    OpenAPI_prose_functionality_t *prose_functionality_local_var = ogs_malloc(sizeof(OpenAPI_prose_functionality_t));
    ogs_assert(prose_functionality_local_var);


    return prose_functionality_local_var;
}

void OpenAPI_prose_functionality_free(OpenAPI_prose_functionality_t *prose_functionality)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == prose_functionality) {
        return;
    }
    ogs_free(prose_functionality);
}

cJSON *OpenAPI_prose_functionality_convertToJSON(OpenAPI_prose_functionality_t *prose_functionality)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (prose_functionality == NULL) {
        ogs_error("OpenAPI_prose_functionality_convertToJSON() failed [ProseFunctionality]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_prose_functionality_t *OpenAPI_prose_functionality_parseFromJSON(cJSON *prose_functionalityJSON)
{
    OpenAPI_prose_functionality_t *prose_functionality_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    prose_functionality_local_var = OpenAPI_prose_functionality_create (
    );

    return prose_functionality_local_var;
end:
    return NULL;
}

OpenAPI_prose_functionality_t *OpenAPI_prose_functionality_copy(OpenAPI_prose_functionality_t *dst, OpenAPI_prose_functionality_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_prose_functionality_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_prose_functionality_convertToJSON() failed");
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

    OpenAPI_prose_functionality_free(dst);
    dst = OpenAPI_prose_functionality_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

