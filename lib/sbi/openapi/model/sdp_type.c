
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sdp_type.h"

OpenAPI_sdp_type_t *OpenAPI_sdp_type_create(
)
{
    OpenAPI_sdp_type_t *sdp_type_local_var = ogs_malloc(sizeof(OpenAPI_sdp_type_t));
    ogs_assert(sdp_type_local_var);


    return sdp_type_local_var;
}

void OpenAPI_sdp_type_free(OpenAPI_sdp_type_t *sdp_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == sdp_type) {
        return;
    }
    ogs_free(sdp_type);
}

cJSON *OpenAPI_sdp_type_convertToJSON(OpenAPI_sdp_type_t *sdp_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (sdp_type == NULL) {
        ogs_error("OpenAPI_sdp_type_convertToJSON() failed [SDPType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_sdp_type_t *OpenAPI_sdp_type_parseFromJSON(cJSON *sdp_typeJSON)
{
    OpenAPI_sdp_type_t *sdp_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    sdp_type_local_var = OpenAPI_sdp_type_create (
    );

    return sdp_type_local_var;
end:
    return NULL;
}

OpenAPI_sdp_type_t *OpenAPI_sdp_type_copy(OpenAPI_sdp_type_t *dst, OpenAPI_sdp_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_sdp_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_sdp_type_convertToJSON() failed");
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

    OpenAPI_sdp_type_free(dst);
    dst = OpenAPI_sdp_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

