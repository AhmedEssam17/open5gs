
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ims_session_priority.h"

OpenAPI_ims_session_priority_t *OpenAPI_ims_session_priority_create(
)
{
    OpenAPI_ims_session_priority_t *ims_session_priority_local_var = ogs_malloc(sizeof(OpenAPI_ims_session_priority_t));
    ogs_assert(ims_session_priority_local_var);


    return ims_session_priority_local_var;
}

void OpenAPI_ims_session_priority_free(OpenAPI_ims_session_priority_t *ims_session_priority)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == ims_session_priority) {
        return;
    }
    ogs_free(ims_session_priority);
}

cJSON *OpenAPI_ims_session_priority_convertToJSON(OpenAPI_ims_session_priority_t *ims_session_priority)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (ims_session_priority == NULL) {
        ogs_error("OpenAPI_ims_session_priority_convertToJSON() failed [IMSSessionPriority]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_ims_session_priority_t *OpenAPI_ims_session_priority_parseFromJSON(cJSON *ims_session_priorityJSON)
{
    OpenAPI_ims_session_priority_t *ims_session_priority_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    ims_session_priority_local_var = OpenAPI_ims_session_priority_create (
    );

    return ims_session_priority_local_var;
end:
    return NULL;
}

OpenAPI_ims_session_priority_t *OpenAPI_ims_session_priority_copy(OpenAPI_ims_session_priority_t *dst, OpenAPI_ims_session_priority_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_ims_session_priority_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_ims_session_priority_convertToJSON() failed");
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

    OpenAPI_ims_session_priority_free(dst);
    dst = OpenAPI_ims_session_priority_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

