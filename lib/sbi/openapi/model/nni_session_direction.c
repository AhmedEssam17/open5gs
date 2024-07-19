
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nni_session_direction.h"

OpenAPI_nni_session_direction_t *OpenAPI_nni_session_direction_create(
)
{
    OpenAPI_nni_session_direction_t *nni_session_direction_local_var = ogs_malloc(sizeof(OpenAPI_nni_session_direction_t));
    ogs_assert(nni_session_direction_local_var);


    return nni_session_direction_local_var;
}

void OpenAPI_nni_session_direction_free(OpenAPI_nni_session_direction_t *nni_session_direction)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nni_session_direction) {
        return;
    }
    ogs_free(nni_session_direction);
}

cJSON *OpenAPI_nni_session_direction_convertToJSON(OpenAPI_nni_session_direction_t *nni_session_direction)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nni_session_direction == NULL) {
        ogs_error("OpenAPI_nni_session_direction_convertToJSON() failed [NNISessionDirection]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_nni_session_direction_t *OpenAPI_nni_session_direction_parseFromJSON(cJSON *nni_session_directionJSON)
{
    OpenAPI_nni_session_direction_t *nni_session_direction_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    nni_session_direction_local_var = OpenAPI_nni_session_direction_create (
    );

    return nni_session_direction_local_var;
end:
    return NULL;
}

OpenAPI_nni_session_direction_t *OpenAPI_nni_session_direction_copy(OpenAPI_nni_session_direction_t *dst, OpenAPI_nni_session_direction_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nni_session_direction_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nni_session_direction_convertToJSON() failed");
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

    OpenAPI_nni_session_direction_free(dst);
    dst = OpenAPI_nni_session_direction_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

