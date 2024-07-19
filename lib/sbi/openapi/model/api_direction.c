
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_direction.h"

OpenAPI_api_direction_t *OpenAPI_api_direction_create(
)
{
    OpenAPI_api_direction_t *api_direction_local_var = ogs_malloc(sizeof(OpenAPI_api_direction_t));
    ogs_assert(api_direction_local_var);


    return api_direction_local_var;
}

void OpenAPI_api_direction_free(OpenAPI_api_direction_t *api_direction)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == api_direction) {
        return;
    }
    ogs_free(api_direction);
}

cJSON *OpenAPI_api_direction_convertToJSON(OpenAPI_api_direction_t *api_direction)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (api_direction == NULL) {
        ogs_error("OpenAPI_api_direction_convertToJSON() failed [APIDirection]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_api_direction_t *OpenAPI_api_direction_parseFromJSON(cJSON *api_directionJSON)
{
    OpenAPI_api_direction_t *api_direction_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    api_direction_local_var = OpenAPI_api_direction_create (
    );

    return api_direction_local_var;
end:
    return NULL;
}

OpenAPI_api_direction_t *OpenAPI_api_direction_copy(OpenAPI_api_direction_t *dst, OpenAPI_api_direction_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_api_direction_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_api_direction_convertToJSON() failed");
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

    OpenAPI_api_direction_free(dst);
    dst = OpenAPI_api_direction_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

