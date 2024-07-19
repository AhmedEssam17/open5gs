
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "roamer_in_out.h"

OpenAPI_roamer_in_out_t *OpenAPI_roamer_in_out_create(
)
{
    OpenAPI_roamer_in_out_t *roamer_in_out_local_var = ogs_malloc(sizeof(OpenAPI_roamer_in_out_t));
    ogs_assert(roamer_in_out_local_var);


    return roamer_in_out_local_var;
}

void OpenAPI_roamer_in_out_free(OpenAPI_roamer_in_out_t *roamer_in_out)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == roamer_in_out) {
        return;
    }
    ogs_free(roamer_in_out);
}

cJSON *OpenAPI_roamer_in_out_convertToJSON(OpenAPI_roamer_in_out_t *roamer_in_out)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (roamer_in_out == NULL) {
        ogs_error("OpenAPI_roamer_in_out_convertToJSON() failed [RoamerInOut]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_roamer_in_out_t *OpenAPI_roamer_in_out_parseFromJSON(cJSON *roamer_in_outJSON)
{
    OpenAPI_roamer_in_out_t *roamer_in_out_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    roamer_in_out_local_var = OpenAPI_roamer_in_out_create (
    );

    return roamer_in_out_local_var;
end:
    return NULL;
}

OpenAPI_roamer_in_out_t *OpenAPI_roamer_in_out_copy(OpenAPI_roamer_in_out_t *dst, OpenAPI_roamer_in_out_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_roamer_in_out_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_roamer_in_out_convertToJSON() failed");
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

    OpenAPI_roamer_in_out_free(dst);
    dst = OpenAPI_roamer_in_out_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

