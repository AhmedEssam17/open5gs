
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "redirect_server.h"

OpenAPI_redirect_server_t *OpenAPI_redirect_server_create(
    OpenAPI_redirect_address_type_t *redirect_address_type,
    char *redirect_server_address
)
{
    OpenAPI_redirect_server_t *redirect_server_local_var = ogs_malloc(sizeof(OpenAPI_redirect_server_t));
    ogs_assert(redirect_server_local_var);

    redirect_server_local_var->redirect_address_type = redirect_address_type;
    redirect_server_local_var->redirect_server_address = redirect_server_address;

    return redirect_server_local_var;
}

void OpenAPI_redirect_server_free(OpenAPI_redirect_server_t *redirect_server)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == redirect_server) {
        return;
    }
    if (redirect_server->redirect_address_type) {
        OpenAPI_redirect_address_type_free(redirect_server->redirect_address_type);
        redirect_server->redirect_address_type = NULL;
    }
    if (redirect_server->redirect_server_address) {
        ogs_free(redirect_server->redirect_server_address);
        redirect_server->redirect_server_address = NULL;
    }
    ogs_free(redirect_server);
}

cJSON *OpenAPI_redirect_server_convertToJSON(OpenAPI_redirect_server_t *redirect_server)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (redirect_server == NULL) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed [RedirectServer]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!redirect_server->redirect_address_type) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed [redirect_address_type]");
        return NULL;
    }
    cJSON *redirect_address_type_local_JSON = OpenAPI_redirect_address_type_convertToJSON(redirect_server->redirect_address_type);
    if (redirect_address_type_local_JSON == NULL) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed [redirect_address_type]");
        goto end;
    }
    cJSON_AddItemToObject(item, "redirectAddressType", redirect_address_type_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed [redirect_address_type]");
        goto end;
    }

    if (!redirect_server->redirect_server_address) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed [redirect_server_address]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "redirectServerAddress", redirect_server->redirect_server_address) == NULL) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed [redirect_server_address]");
        goto end;
    }

end:
    return item;
}

OpenAPI_redirect_server_t *OpenAPI_redirect_server_parseFromJSON(cJSON *redirect_serverJSON)
{
    OpenAPI_redirect_server_t *redirect_server_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *redirect_address_type = NULL;
    OpenAPI_redirect_address_type_t *redirect_address_type_local_nonprim = NULL;
    cJSON *redirect_server_address = NULL;
    redirect_address_type = cJSON_GetObjectItemCaseSensitive(redirect_serverJSON, "redirectAddressType");
    if (!redirect_address_type) {
        ogs_error("OpenAPI_redirect_server_parseFromJSON() failed [redirect_address_type]");
        goto end;
    }
    redirect_address_type_local_nonprim = OpenAPI_redirect_address_type_parseFromJSON(redirect_address_type);
    if (!redirect_address_type_local_nonprim) {
        ogs_error("OpenAPI_redirect_address_type_parseFromJSON failed [redirect_address_type]");
        goto end;
    }

    redirect_server_address = cJSON_GetObjectItemCaseSensitive(redirect_serverJSON, "redirectServerAddress");
    if (!redirect_server_address) {
        ogs_error("OpenAPI_redirect_server_parseFromJSON() failed [redirect_server_address]");
        goto end;
    }
    if (!cJSON_IsString(redirect_server_address)) {
        ogs_error("OpenAPI_redirect_server_parseFromJSON() failed [redirect_server_address]");
        goto end;
    }

    redirect_server_local_var = OpenAPI_redirect_server_create (
        redirect_address_type_local_nonprim,
        ogs_strdup(redirect_server_address->valuestring)
    );

    return redirect_server_local_var;
end:
    if (redirect_address_type_local_nonprim) {
        OpenAPI_redirect_address_type_free(redirect_address_type_local_nonprim);
        redirect_address_type_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_redirect_server_t *OpenAPI_redirect_server_copy(OpenAPI_redirect_server_t *dst, OpenAPI_redirect_server_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_redirect_server_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_redirect_server_convertToJSON() failed");
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

    OpenAPI_redirect_server_free(dst);
    dst = OpenAPI_redirect_server_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

