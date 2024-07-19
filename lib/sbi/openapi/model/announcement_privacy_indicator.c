
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "announcement_privacy_indicator.h"

OpenAPI_announcement_privacy_indicator_t *OpenAPI_announcement_privacy_indicator_create(
)
{
    OpenAPI_announcement_privacy_indicator_t *announcement_privacy_indicator_local_var = ogs_malloc(sizeof(OpenAPI_announcement_privacy_indicator_t));
    ogs_assert(announcement_privacy_indicator_local_var);


    return announcement_privacy_indicator_local_var;
}

void OpenAPI_announcement_privacy_indicator_free(OpenAPI_announcement_privacy_indicator_t *announcement_privacy_indicator)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == announcement_privacy_indicator) {
        return;
    }
    ogs_free(announcement_privacy_indicator);
}

cJSON *OpenAPI_announcement_privacy_indicator_convertToJSON(OpenAPI_announcement_privacy_indicator_t *announcement_privacy_indicator)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (announcement_privacy_indicator == NULL) {
        ogs_error("OpenAPI_announcement_privacy_indicator_convertToJSON() failed [AnnouncementPrivacyIndicator]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_announcement_privacy_indicator_t *OpenAPI_announcement_privacy_indicator_parseFromJSON(cJSON *announcement_privacy_indicatorJSON)
{
    OpenAPI_announcement_privacy_indicator_t *announcement_privacy_indicator_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    announcement_privacy_indicator_local_var = OpenAPI_announcement_privacy_indicator_create (
    );

    return announcement_privacy_indicator_local_var;
end:
    return NULL;
}

OpenAPI_announcement_privacy_indicator_t *OpenAPI_announcement_privacy_indicator_copy(OpenAPI_announcement_privacy_indicator_t *dst, OpenAPI_announcement_privacy_indicator_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_announcement_privacy_indicator_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_announcement_privacy_indicator_convertToJSON() failed");
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

    OpenAPI_announcement_privacy_indicator_free(dst);
    dst = OpenAPI_announcement_privacy_indicator_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

