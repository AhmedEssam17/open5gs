
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delivery_report_requested.h"

OpenAPI_delivery_report_requested_t *OpenAPI_delivery_report_requested_create(
)
{
    OpenAPI_delivery_report_requested_t *delivery_report_requested_local_var = ogs_malloc(sizeof(OpenAPI_delivery_report_requested_t));
    ogs_assert(delivery_report_requested_local_var);


    return delivery_report_requested_local_var;
}

void OpenAPI_delivery_report_requested_free(OpenAPI_delivery_report_requested_t *delivery_report_requested)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == delivery_report_requested) {
        return;
    }
    ogs_free(delivery_report_requested);
}

cJSON *OpenAPI_delivery_report_requested_convertToJSON(OpenAPI_delivery_report_requested_t *delivery_report_requested)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (delivery_report_requested == NULL) {
        ogs_error("OpenAPI_delivery_report_requested_convertToJSON() failed [DeliveryReportRequested]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_delivery_report_requested_t *OpenAPI_delivery_report_requested_parseFromJSON(cJSON *delivery_report_requestedJSON)
{
    OpenAPI_delivery_report_requested_t *delivery_report_requested_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    delivery_report_requested_local_var = OpenAPI_delivery_report_requested_create (
    );

    return delivery_report_requested_local_var;
end:
    return NULL;
}

OpenAPI_delivery_report_requested_t *OpenAPI_delivery_report_requested_copy(OpenAPI_delivery_report_requested_t *dst, OpenAPI_delivery_report_requested_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_delivery_report_requested_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_delivery_report_requested_convertToJSON() failed");
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

    OpenAPI_delivery_report_requested_free(dst);
    dst = OpenAPI_delivery_report_requested_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

