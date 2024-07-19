
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "interface_type.h"

OpenAPI_interface_type_t *OpenAPI_interface_type_create(
)
{
    OpenAPI_interface_type_t *interface_type_local_var = ogs_malloc(sizeof(OpenAPI_interface_type_t));
    ogs_assert(interface_type_local_var);


    return interface_type_local_var;
}

void OpenAPI_interface_type_free(OpenAPI_interface_type_t *interface_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == interface_type) {
        return;
    }
    ogs_free(interface_type);
}

cJSON *OpenAPI_interface_type_convertToJSON(OpenAPI_interface_type_t *interface_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (interface_type == NULL) {
        ogs_error("OpenAPI_interface_type_convertToJSON() failed [InterfaceType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_interface_type_t *OpenAPI_interface_type_parseFromJSON(cJSON *interface_typeJSON)
{
    OpenAPI_interface_type_t *interface_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    interface_type_local_var = OpenAPI_interface_type_create (
    );

    return interface_type_local_var;
end:
    return NULL;
}

OpenAPI_interface_type_t *OpenAPI_interface_type_copy(OpenAPI_interface_type_t *dst, OpenAPI_interface_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_interface_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_interface_type_convertToJSON() failed");
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

    OpenAPI_interface_type_free(dst);
    dst = OpenAPI_interface_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

