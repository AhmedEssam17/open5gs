
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reply_path_requested.h"

OpenAPI_reply_path_requested_t *OpenAPI_reply_path_requested_create(
)
{
    OpenAPI_reply_path_requested_t *reply_path_requested_local_var = ogs_malloc(sizeof(OpenAPI_reply_path_requested_t));
    ogs_assert(reply_path_requested_local_var);


    return reply_path_requested_local_var;
}

void OpenAPI_reply_path_requested_free(OpenAPI_reply_path_requested_t *reply_path_requested)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == reply_path_requested) {
        return;
    }
    ogs_free(reply_path_requested);
}

cJSON *OpenAPI_reply_path_requested_convertToJSON(OpenAPI_reply_path_requested_t *reply_path_requested)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (reply_path_requested == NULL) {
        ogs_error("OpenAPI_reply_path_requested_convertToJSON() failed [ReplyPathRequested]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_reply_path_requested_t *OpenAPI_reply_path_requested_parseFromJSON(cJSON *reply_path_requestedJSON)
{
    OpenAPI_reply_path_requested_t *reply_path_requested_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    reply_path_requested_local_var = OpenAPI_reply_path_requested_create (
    );

    return reply_path_requested_local_var;
end:
    return NULL;
}

OpenAPI_reply_path_requested_t *OpenAPI_reply_path_requested_copy(OpenAPI_reply_path_requested_t *dst, OpenAPI_reply_path_requested_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_reply_path_requested_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_reply_path_requested_convertToJSON() failed");
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

    OpenAPI_reply_path_requested_free(dst);
    dst = OpenAPI_reply_path_requested_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

