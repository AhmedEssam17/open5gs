
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "media_initiator_flag.h"

OpenAPI_media_initiator_flag_t *OpenAPI_media_initiator_flag_create(
)
{
    OpenAPI_media_initiator_flag_t *media_initiator_flag_local_var = ogs_malloc(sizeof(OpenAPI_media_initiator_flag_t));
    ogs_assert(media_initiator_flag_local_var);


    return media_initiator_flag_local_var;
}

void OpenAPI_media_initiator_flag_free(OpenAPI_media_initiator_flag_t *media_initiator_flag)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == media_initiator_flag) {
        return;
    }
    ogs_free(media_initiator_flag);
}

cJSON *OpenAPI_media_initiator_flag_convertToJSON(OpenAPI_media_initiator_flag_t *media_initiator_flag)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (media_initiator_flag == NULL) {
        ogs_error("OpenAPI_media_initiator_flag_convertToJSON() failed [MediaInitiatorFlag]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_media_initiator_flag_t *OpenAPI_media_initiator_flag_parseFromJSON(cJSON *media_initiator_flagJSON)
{
    OpenAPI_media_initiator_flag_t *media_initiator_flag_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    media_initiator_flag_local_var = OpenAPI_media_initiator_flag_create (
    );

    return media_initiator_flag_local_var;
end:
    return NULL;
}

OpenAPI_media_initiator_flag_t *OpenAPI_media_initiator_flag_copy(OpenAPI_media_initiator_flag_t *dst, OpenAPI_media_initiator_flag_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_media_initiator_flag_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_media_initiator_flag_convertToJSON() failed");
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

    OpenAPI_media_initiator_flag_free(dst);
    dst = OpenAPI_media_initiator_flag_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

