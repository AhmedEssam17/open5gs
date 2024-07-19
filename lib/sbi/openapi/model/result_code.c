
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "result_code.h"

OpenAPI_result_code_t *OpenAPI_result_code_create(
)
{
    OpenAPI_result_code_t *result_code_local_var = ogs_malloc(sizeof(OpenAPI_result_code_t));
    ogs_assert(result_code_local_var);


    return result_code_local_var;
}

void OpenAPI_result_code_free(OpenAPI_result_code_t *result_code)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == result_code) {
        return;
    }
    ogs_free(result_code);
}

cJSON *OpenAPI_result_code_convertToJSON(OpenAPI_result_code_t *result_code)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (result_code == NULL) {
        ogs_error("OpenAPI_result_code_convertToJSON() failed [ResultCode]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_result_code_t *OpenAPI_result_code_parseFromJSON(cJSON *result_codeJSON)
{
    OpenAPI_result_code_t *result_code_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    result_code_local_var = OpenAPI_result_code_create (
    );

    return result_code_local_var;
end:
    return NULL;
}

OpenAPI_result_code_t *OpenAPI_result_code_copy(OpenAPI_result_code_t *dst, OpenAPI_result_code_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_result_code_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_result_code_convertToJSON() failed");
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

    OpenAPI_result_code_free(dst);
    dst = OpenAPI_result_code_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

