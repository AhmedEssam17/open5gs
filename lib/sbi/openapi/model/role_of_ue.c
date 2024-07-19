
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "role_of_ue.h"

OpenAPI_role_of_ue_t *OpenAPI_role_of_ue_create(
)
{
    OpenAPI_role_of_ue_t *role_of_ue_local_var = ogs_malloc(sizeof(OpenAPI_role_of_ue_t));
    ogs_assert(role_of_ue_local_var);


    return role_of_ue_local_var;
}

void OpenAPI_role_of_ue_free(OpenAPI_role_of_ue_t *role_of_ue)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == role_of_ue) {
        return;
    }
    ogs_free(role_of_ue);
}

cJSON *OpenAPI_role_of_ue_convertToJSON(OpenAPI_role_of_ue_t *role_of_ue)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (role_of_ue == NULL) {
        ogs_error("OpenAPI_role_of_ue_convertToJSON() failed [RoleOfUE]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_role_of_ue_t *OpenAPI_role_of_ue_parseFromJSON(cJSON *role_of_ueJSON)
{
    OpenAPI_role_of_ue_t *role_of_ue_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    role_of_ue_local_var = OpenAPI_role_of_ue_create (
    );

    return role_of_ue_local_var;
end:
    return NULL;
}

OpenAPI_role_of_ue_t *OpenAPI_role_of_ue_copy(OpenAPI_role_of_ue_t *dst, OpenAPI_role_of_ue_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_role_of_ue_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_role_of_ue_convertToJSON() failed");
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

    OpenAPI_role_of_ue_free(dst);
    dst = OpenAPI_role_of_ue_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

