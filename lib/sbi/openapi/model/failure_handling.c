
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "failure_handling.h"

OpenAPI_failure_handling_t *OpenAPI_failure_handling_create(
)
{
    OpenAPI_failure_handling_t *failure_handling_local_var = ogs_malloc(sizeof(OpenAPI_failure_handling_t));
    ogs_assert(failure_handling_local_var);


    return failure_handling_local_var;
}

void OpenAPI_failure_handling_free(OpenAPI_failure_handling_t *failure_handling)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == failure_handling) {
        return;
    }
    ogs_free(failure_handling);
}

cJSON *OpenAPI_failure_handling_convertToJSON(OpenAPI_failure_handling_t *failure_handling)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (failure_handling == NULL) {
        ogs_error("OpenAPI_failure_handling_convertToJSON() failed [FailureHandling]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_failure_handling_t *OpenAPI_failure_handling_parseFromJSON(cJSON *failure_handlingJSON)
{
    OpenAPI_failure_handling_t *failure_handling_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    failure_handling_local_var = OpenAPI_failure_handling_create (
    );

    return failure_handling_local_var;
end:
    return NULL;
}

OpenAPI_failure_handling_t *OpenAPI_failure_handling_copy(OpenAPI_failure_handling_t *dst, OpenAPI_failure_handling_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_failure_handling_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_failure_handling_convertToJSON() failed");
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

    OpenAPI_failure_handling_free(dst);
    dst = OpenAPI_failure_handling_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

