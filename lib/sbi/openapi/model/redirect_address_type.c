
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "redirect_address_type.h"
#include "redirect_address_type_any_of.h"

OpenAPI_redirect_address_type_t *OpenAPI_redirect_address_type_create(
)
{
    OpenAPI_redirect_address_type_t *redirect_address_type_local_var = ogs_malloc(sizeof(OpenAPI_redirect_address_type_t));
    ogs_assert(redirect_address_type_local_var);


    return redirect_address_type_local_var;
}

void OpenAPI_redirect_address_type_free(OpenAPI_redirect_address_type_t *redirect_address_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == redirect_address_type) {
        return;
    }
    ogs_free(redirect_address_type);
}

cJSON *OpenAPI_redirect_address_type_convertToJSON(OpenAPI_redirect_address_type_t *redirect_address_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (redirect_address_type == NULL) {
        ogs_error("OpenAPI_redirect_address_type_convertToJSON() failed [RedirectAddressType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_redirect_address_type_t *OpenAPI_redirect_address_type_parseFromJSON(cJSON *redirect_address_typeJSON)
{
    OpenAPI_redirect_address_type_t *redirect_address_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    redirect_address_type_local_var = OpenAPI_redirect_address_type_create (
    );

    return redirect_address_type_local_var;
end:
    return NULL;
}

OpenAPI_redirect_address_type_t *OpenAPI_redirect_address_type_copy(OpenAPI_redirect_address_type_t *dst, OpenAPI_redirect_address_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_redirect_address_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_redirect_address_type_convertToJSON() failed");
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

    OpenAPI_redirect_address_type_free(dst);
    dst = OpenAPI_redirect_address_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

