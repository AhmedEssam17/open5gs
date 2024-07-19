
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variable_part_type.h"

OpenAPI_variable_part_type_t *OpenAPI_variable_part_type_create(
)
{
    OpenAPI_variable_part_type_t *variable_part_type_local_var = ogs_malloc(sizeof(OpenAPI_variable_part_type_t));
    ogs_assert(variable_part_type_local_var);


    return variable_part_type_local_var;
}

void OpenAPI_variable_part_type_free(OpenAPI_variable_part_type_t *variable_part_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == variable_part_type) {
        return;
    }
    ogs_free(variable_part_type);
}

cJSON *OpenAPI_variable_part_type_convertToJSON(OpenAPI_variable_part_type_t *variable_part_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (variable_part_type == NULL) {
        ogs_error("OpenAPI_variable_part_type_convertToJSON() failed [VariablePartType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_variable_part_type_t *OpenAPI_variable_part_type_parseFromJSON(cJSON *variable_part_typeJSON)
{
    OpenAPI_variable_part_type_t *variable_part_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    variable_part_type_local_var = OpenAPI_variable_part_type_create (
    );

    return variable_part_type_local_var;
end:
    return NULL;
}

OpenAPI_variable_part_type_t *OpenAPI_variable_part_type_copy(OpenAPI_variable_part_type_t *dst, OpenAPI_variable_part_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_variable_part_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_variable_part_type_convertToJSON() failed");
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

    OpenAPI_variable_part_type_free(dst);
    dst = OpenAPI_variable_part_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

