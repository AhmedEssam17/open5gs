
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "radio_resources_id.h"

OpenAPI_radio_resources_id_t *OpenAPI_radio_resources_id_create(
)
{
    OpenAPI_radio_resources_id_t *radio_resources_id_local_var = ogs_malloc(sizeof(OpenAPI_radio_resources_id_t));
    ogs_assert(radio_resources_id_local_var);


    return radio_resources_id_local_var;
}

void OpenAPI_radio_resources_id_free(OpenAPI_radio_resources_id_t *radio_resources_id)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == radio_resources_id) {
        return;
    }
    ogs_free(radio_resources_id);
}

cJSON *OpenAPI_radio_resources_id_convertToJSON(OpenAPI_radio_resources_id_t *radio_resources_id)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (radio_resources_id == NULL) {
        ogs_error("OpenAPI_radio_resources_id_convertToJSON() failed [RadioResourcesId]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_radio_resources_id_t *OpenAPI_radio_resources_id_parseFromJSON(cJSON *radio_resources_idJSON)
{
    OpenAPI_radio_resources_id_t *radio_resources_id_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    radio_resources_id_local_var = OpenAPI_radio_resources_id_create (
    );

    return radio_resources_id_local_var;
end:
    return NULL;
}

OpenAPI_radio_resources_id_t *OpenAPI_radio_resources_id_copy(OpenAPI_radio_resources_id_t *dst, OpenAPI_radio_resources_id_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_radio_resources_id_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_radio_resources_id_convertToJSON() failed");
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

    OpenAPI_radio_resources_id_free(dst);
    dst = OpenAPI_radio_resources_id_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

