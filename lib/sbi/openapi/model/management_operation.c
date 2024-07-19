
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "management_operation.h"

OpenAPI_management_operation_t *OpenAPI_management_operation_create(
)
{
    OpenAPI_management_operation_t *management_operation_local_var = ogs_malloc(sizeof(OpenAPI_management_operation_t));
    ogs_assert(management_operation_local_var);


    return management_operation_local_var;
}

void OpenAPI_management_operation_free(OpenAPI_management_operation_t *management_operation)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == management_operation) {
        return;
    }
    ogs_free(management_operation);
}

cJSON *OpenAPI_management_operation_convertToJSON(OpenAPI_management_operation_t *management_operation)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (management_operation == NULL) {
        ogs_error("OpenAPI_management_operation_convertToJSON() failed [ManagementOperation]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_management_operation_t *OpenAPI_management_operation_parseFromJSON(cJSON *management_operationJSON)
{
    OpenAPI_management_operation_t *management_operation_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    management_operation_local_var = OpenAPI_management_operation_create (
    );

    return management_operation_local_var;
end:
    return NULL;
}

OpenAPI_management_operation_t *OpenAPI_management_operation_copy(OpenAPI_management_operation_t *dst, OpenAPI_management_operation_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_management_operation_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_management_operation_convertToJSON() failed");
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

    OpenAPI_management_operation_free(dst);
    dst = OpenAPI_management_operation_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

