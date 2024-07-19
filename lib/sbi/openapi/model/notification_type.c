
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notification_type.h"
#include "notification_type_any_of.h"

OpenAPI_notification_type_t *OpenAPI_notification_type_create(
)
{
    OpenAPI_notification_type_t *notification_type_local_var = ogs_malloc(sizeof(OpenAPI_notification_type_t));
    ogs_assert(notification_type_local_var);


    return notification_type_local_var;
}

void OpenAPI_notification_type_free(OpenAPI_notification_type_t *notification_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == notification_type) {
        return;
    }
    ogs_free(notification_type);
}

cJSON *OpenAPI_notification_type_convertToJSON(OpenAPI_notification_type_t *notification_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (notification_type == NULL) {
        ogs_error("OpenAPI_notification_type_convertToJSON() failed [NotificationType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_notification_type_t *OpenAPI_notification_type_parseFromJSON(cJSON *notification_typeJSON)
{
    OpenAPI_notification_type_t *notification_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    notification_type_local_var = OpenAPI_notification_type_create (
    );

    return notification_type_local_var;
end:
    return NULL;
}

OpenAPI_notification_type_t *OpenAPI_notification_type_copy(OpenAPI_notification_type_t *dst, OpenAPI_notification_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_notification_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_notification_type_convertToJSON() failed");
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

    OpenAPI_notification_type_free(dst);
    dst = OpenAPI_notification_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

