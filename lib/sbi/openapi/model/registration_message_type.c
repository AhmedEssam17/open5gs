
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "registration_message_type.h"

OpenAPI_registration_message_type_t *OpenAPI_registration_message_type_create(
)
{
    OpenAPI_registration_message_type_t *registration_message_type_local_var = ogs_malloc(sizeof(OpenAPI_registration_message_type_t));
    ogs_assert(registration_message_type_local_var);


    return registration_message_type_local_var;
}

void OpenAPI_registration_message_type_free(OpenAPI_registration_message_type_t *registration_message_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == registration_message_type) {
        return;
    }
    ogs_free(registration_message_type);
}

cJSON *OpenAPI_registration_message_type_convertToJSON(OpenAPI_registration_message_type_t *registration_message_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (registration_message_type == NULL) {
        ogs_error("OpenAPI_registration_message_type_convertToJSON() failed [RegistrationMessageType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_registration_message_type_t *OpenAPI_registration_message_type_parseFromJSON(cJSON *registration_message_typeJSON)
{
    OpenAPI_registration_message_type_t *registration_message_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    registration_message_type_local_var = OpenAPI_registration_message_type_create (
    );

    return registration_message_type_local_var;
end:
    return NULL;
}

OpenAPI_registration_message_type_t *OpenAPI_registration_message_type_copy(OpenAPI_registration_message_type_t *dst, OpenAPI_registration_message_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_registration_message_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_registration_message_type_convertToJSON() failed");
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

    OpenAPI_registration_message_type_free(dst);
    dst = OpenAPI_registration_message_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

