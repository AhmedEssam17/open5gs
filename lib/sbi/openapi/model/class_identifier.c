
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "class_identifier.h"

OpenAPI_class_identifier_t *OpenAPI_class_identifier_create(
)
{
    OpenAPI_class_identifier_t *class_identifier_local_var = ogs_malloc(sizeof(OpenAPI_class_identifier_t));
    ogs_assert(class_identifier_local_var);


    return class_identifier_local_var;
}

void OpenAPI_class_identifier_free(OpenAPI_class_identifier_t *class_identifier)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == class_identifier) {
        return;
    }
    ogs_free(class_identifier);
}

cJSON *OpenAPI_class_identifier_convertToJSON(OpenAPI_class_identifier_t *class_identifier)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (class_identifier == NULL) {
        ogs_error("OpenAPI_class_identifier_convertToJSON() failed [ClassIdentifier]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_class_identifier_t *OpenAPI_class_identifier_parseFromJSON(cJSON *class_identifierJSON)
{
    OpenAPI_class_identifier_t *class_identifier_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    class_identifier_local_var = OpenAPI_class_identifier_create (
    );

    return class_identifier_local_var;
end:
    return NULL;
}

OpenAPI_class_identifier_t *OpenAPI_class_identifier_copy(OpenAPI_class_identifier_t *dst, OpenAPI_class_identifier_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_class_identifier_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_class_identifier_convertToJSON() failed");
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

    OpenAPI_class_identifier_free(dst);
    dst = OpenAPI_class_identifier_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

