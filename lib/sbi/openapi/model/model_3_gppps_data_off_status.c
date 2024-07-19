
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "model_3_gppps_data_off_status.h"

OpenAPI_model_3_gppps_data_off_status_t *OpenAPI_model_3_gppps_data_off_status_create(
)
{
    OpenAPI_model_3_gppps_data_off_status_t *model_3_gppps_data_off_status_local_var = ogs_malloc(sizeof(OpenAPI_model_3_gppps_data_off_status_t));
    ogs_assert(model_3_gppps_data_off_status_local_var);


    return model_3_gppps_data_off_status_local_var;
}

void OpenAPI_model_3_gppps_data_off_status_free(OpenAPI_model_3_gppps_data_off_status_t *model_3_gppps_data_off_status)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == model_3_gppps_data_off_status) {
        return;
    }
    ogs_free(model_3_gppps_data_off_status);
}

cJSON *OpenAPI_model_3_gppps_data_off_status_convertToJSON(OpenAPI_model_3_gppps_data_off_status_t *model_3_gppps_data_off_status)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (model_3_gppps_data_off_status == NULL) {
        ogs_error("OpenAPI_model_3_gppps_data_off_status_convertToJSON() failed [3GPPPSDataOffStatus]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_model_3_gppps_data_off_status_t *OpenAPI_model_3_gppps_data_off_status_parseFromJSON(cJSON *model_3_gppps_data_off_statusJSON)
{
    OpenAPI_model_3_gppps_data_off_status_t *model_3_gppps_data_off_status_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    model_3_gppps_data_off_status_local_var = OpenAPI_model_3_gppps_data_off_status_create (
    );

    return model_3_gppps_data_off_status_local_var;
end:
    return NULL;
}

OpenAPI_model_3_gppps_data_off_status_t *OpenAPI_model_3_gppps_data_off_status_copy(OpenAPI_model_3_gppps_data_off_status_t *dst, OpenAPI_model_3_gppps_data_off_status_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_model_3_gppps_data_off_status_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_model_3_gppps_data_off_status_convertToJSON() failed");
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

    OpenAPI_model_3_gppps_data_off_status_free(dst);
    dst = OpenAPI_model_3_gppps_data_off_status_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

