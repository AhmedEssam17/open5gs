
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quota_management_indicator.h"

OpenAPI_quota_management_indicator_t *OpenAPI_quota_management_indicator_create(
)
{
    OpenAPI_quota_management_indicator_t *quota_management_indicator_local_var = ogs_malloc(sizeof(OpenAPI_quota_management_indicator_t));
    ogs_assert(quota_management_indicator_local_var);


    return quota_management_indicator_local_var;
}

void OpenAPI_quota_management_indicator_free(OpenAPI_quota_management_indicator_t *quota_management_indicator)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == quota_management_indicator) {
        return;
    }
    ogs_free(quota_management_indicator);
}

cJSON *OpenAPI_quota_management_indicator_convertToJSON(OpenAPI_quota_management_indicator_t *quota_management_indicator)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (quota_management_indicator == NULL) {
        ogs_error("OpenAPI_quota_management_indicator_convertToJSON() failed [QuotaManagementIndicator]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_quota_management_indicator_t *OpenAPI_quota_management_indicator_parseFromJSON(cJSON *quota_management_indicatorJSON)
{
    OpenAPI_quota_management_indicator_t *quota_management_indicator_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    quota_management_indicator_local_var = OpenAPI_quota_management_indicator_create (
    );

    return quota_management_indicator_local_var;
end:
    return NULL;
}

OpenAPI_quota_management_indicator_t *OpenAPI_quota_management_indicator_copy(OpenAPI_quota_management_indicator_t *dst, OpenAPI_quota_management_indicator_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_quota_management_indicator_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_quota_management_indicator_convertToJSON() failed");
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

    OpenAPI_quota_management_indicator_free(dst);
    dst = OpenAPI_quota_management_indicator_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

