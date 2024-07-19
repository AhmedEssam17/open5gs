
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "eas_deployment_charging_information.h"

OpenAPI_eas_deployment_charging_information_t *OpenAPI_eas_deployment_charging_information_create(
    char *l_cm_start_time,
    char *l_cm_end_time
)
{
    OpenAPI_eas_deployment_charging_information_t *eas_deployment_charging_information_local_var = ogs_malloc(sizeof(OpenAPI_eas_deployment_charging_information_t));
    ogs_assert(eas_deployment_charging_information_local_var);

    eas_deployment_charging_information_local_var->l_cm_start_time = l_cm_start_time;
    eas_deployment_charging_information_local_var->l_cm_end_time = l_cm_end_time;

    return eas_deployment_charging_information_local_var;
}

void OpenAPI_eas_deployment_charging_information_free(OpenAPI_eas_deployment_charging_information_t *eas_deployment_charging_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == eas_deployment_charging_information) {
        return;
    }
    if (eas_deployment_charging_information->l_cm_start_time) {
        ogs_free(eas_deployment_charging_information->l_cm_start_time);
        eas_deployment_charging_information->l_cm_start_time = NULL;
    }
    if (eas_deployment_charging_information->l_cm_end_time) {
        ogs_free(eas_deployment_charging_information->l_cm_end_time);
        eas_deployment_charging_information->l_cm_end_time = NULL;
    }
    ogs_free(eas_deployment_charging_information);
}

cJSON *OpenAPI_eas_deployment_charging_information_convertToJSON(OpenAPI_eas_deployment_charging_information_t *eas_deployment_charging_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (eas_deployment_charging_information == NULL) {
        ogs_error("OpenAPI_eas_deployment_charging_information_convertToJSON() failed [EASDeploymentChargingInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (eas_deployment_charging_information->l_cm_start_time) {
    if (cJSON_AddStringToObject(item, "lCMStartTime", eas_deployment_charging_information->l_cm_start_time) == NULL) {
        ogs_error("OpenAPI_eas_deployment_charging_information_convertToJSON() failed [l_cm_start_time]");
        goto end;
    }
    }

    if (eas_deployment_charging_information->l_cm_end_time) {
    if (cJSON_AddStringToObject(item, "lCMEndTime", eas_deployment_charging_information->l_cm_end_time) == NULL) {
        ogs_error("OpenAPI_eas_deployment_charging_information_convertToJSON() failed [l_cm_end_time]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_eas_deployment_charging_information_t *OpenAPI_eas_deployment_charging_information_parseFromJSON(cJSON *eas_deployment_charging_informationJSON)
{
    OpenAPI_eas_deployment_charging_information_t *eas_deployment_charging_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *l_cm_start_time = NULL;
    cJSON *l_cm_end_time = NULL;
    l_cm_start_time = cJSON_GetObjectItemCaseSensitive(eas_deployment_charging_informationJSON, "lCMStartTime");
    if (l_cm_start_time) {
    if (!cJSON_IsString(l_cm_start_time) && !cJSON_IsNull(l_cm_start_time)) {
        ogs_error("OpenAPI_eas_deployment_charging_information_parseFromJSON() failed [l_cm_start_time]");
        goto end;
    }
    }

    l_cm_end_time = cJSON_GetObjectItemCaseSensitive(eas_deployment_charging_informationJSON, "lCMEndTime");
    if (l_cm_end_time) {
    if (!cJSON_IsString(l_cm_end_time) && !cJSON_IsNull(l_cm_end_time)) {
        ogs_error("OpenAPI_eas_deployment_charging_information_parseFromJSON() failed [l_cm_end_time]");
        goto end;
    }
    }

    eas_deployment_charging_information_local_var = OpenAPI_eas_deployment_charging_information_create (
        l_cm_start_time && !cJSON_IsNull(l_cm_start_time) ? ogs_strdup(l_cm_start_time->valuestring) : NULL,
        l_cm_end_time && !cJSON_IsNull(l_cm_end_time) ? ogs_strdup(l_cm_end_time->valuestring) : NULL
    );

    return eas_deployment_charging_information_local_var;
end:
    return NULL;
}

OpenAPI_eas_deployment_charging_information_t *OpenAPI_eas_deployment_charging_information_copy(OpenAPI_eas_deployment_charging_information_t *dst, OpenAPI_eas_deployment_charging_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_eas_deployment_charging_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_eas_deployment_charging_information_convertToJSON() failed");
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

    OpenAPI_eas_deployment_charging_information_free(dst);
    dst = OpenAPI_eas_deployment_charging_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

