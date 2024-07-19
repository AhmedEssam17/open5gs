
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prose_event_type.h"

OpenAPI_prose_event_type_t *OpenAPI_prose_event_type_create(
)
{
    OpenAPI_prose_event_type_t *prose_event_type_local_var = ogs_malloc(sizeof(OpenAPI_prose_event_type_t));
    ogs_assert(prose_event_type_local_var);


    return prose_event_type_local_var;
}

void OpenAPI_prose_event_type_free(OpenAPI_prose_event_type_t *prose_event_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == prose_event_type) {
        return;
    }
    ogs_free(prose_event_type);
}

cJSON *OpenAPI_prose_event_type_convertToJSON(OpenAPI_prose_event_type_t *prose_event_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (prose_event_type == NULL) {
        ogs_error("OpenAPI_prose_event_type_convertToJSON() failed [ProseEventType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_prose_event_type_t *OpenAPI_prose_event_type_parseFromJSON(cJSON *prose_event_typeJSON)
{
    OpenAPI_prose_event_type_t *prose_event_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    prose_event_type_local_var = OpenAPI_prose_event_type_create (
    );

    return prose_event_type_local_var;
end:
    return NULL;
}

OpenAPI_prose_event_type_t *OpenAPI_prose_event_type_copy(OpenAPI_prose_event_type_t *dst, OpenAPI_prose_event_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_prose_event_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_prose_event_type_convertToJSON() failed");
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

    OpenAPI_prose_event_type_free(dst);
    dst = OpenAPI_prose_event_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

