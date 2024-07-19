
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sm_priority.h"

OpenAPI_sm_priority_t *OpenAPI_sm_priority_create(
)
{
    OpenAPI_sm_priority_t *sm_priority_local_var = ogs_malloc(sizeof(OpenAPI_sm_priority_t));
    ogs_assert(sm_priority_local_var);


    return sm_priority_local_var;
}

void OpenAPI_sm_priority_free(OpenAPI_sm_priority_t *sm_priority)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == sm_priority) {
        return;
    }
    ogs_free(sm_priority);
}

cJSON *OpenAPI_sm_priority_convertToJSON(OpenAPI_sm_priority_t *sm_priority)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (sm_priority == NULL) {
        ogs_error("OpenAPI_sm_priority_convertToJSON() failed [SMPriority]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_sm_priority_t *OpenAPI_sm_priority_parseFromJSON(cJSON *sm_priorityJSON)
{
    OpenAPI_sm_priority_t *sm_priority_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    sm_priority_local_var = OpenAPI_sm_priority_create (
    );

    return sm_priority_local_var;
end:
    return NULL;
}

OpenAPI_sm_priority_t *OpenAPI_sm_priority_copy(OpenAPI_sm_priority_t *dst, OpenAPI_sm_priority_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_sm_priority_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_sm_priority_convertToJSON() failed");
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

    OpenAPI_sm_priority_free(dst);
    dst = OpenAPI_sm_priority_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

