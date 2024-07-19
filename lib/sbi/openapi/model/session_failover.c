
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "session_failover.h"

OpenAPI_session_failover_t *OpenAPI_session_failover_create(
)
{
    OpenAPI_session_failover_t *session_failover_local_var = ogs_malloc(sizeof(OpenAPI_session_failover_t));
    ogs_assert(session_failover_local_var);


    return session_failover_local_var;
}

void OpenAPI_session_failover_free(OpenAPI_session_failover_t *session_failover)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == session_failover) {
        return;
    }
    ogs_free(session_failover);
}

cJSON *OpenAPI_session_failover_convertToJSON(OpenAPI_session_failover_t *session_failover)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (session_failover == NULL) {
        ogs_error("OpenAPI_session_failover_convertToJSON() failed [SessionFailover]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_session_failover_t *OpenAPI_session_failover_parseFromJSON(cJSON *session_failoverJSON)
{
    OpenAPI_session_failover_t *session_failover_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    session_failover_local_var = OpenAPI_session_failover_create (
    );

    return session_failover_local_var;
end:
    return NULL;
}

OpenAPI_session_failover_t *OpenAPI_session_failover_copy(OpenAPI_session_failover_t *dst, OpenAPI_session_failover_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_session_failover_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_session_failover_convertToJSON() failed");
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

    OpenAPI_session_failover_free(dst);
    dst = OpenAPI_session_failover_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

