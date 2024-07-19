
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "traffic_forwarding_way.h"

OpenAPI_traffic_forwarding_way_t *OpenAPI_traffic_forwarding_way_create(
)
{
    OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way_local_var = ogs_malloc(sizeof(OpenAPI_traffic_forwarding_way_t));
    ogs_assert(traffic_forwarding_way_local_var);


    return traffic_forwarding_way_local_var;
}

void OpenAPI_traffic_forwarding_way_free(OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == traffic_forwarding_way) {
        return;
    }
    ogs_free(traffic_forwarding_way);
}

cJSON *OpenAPI_traffic_forwarding_way_convertToJSON(OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (traffic_forwarding_way == NULL) {
        ogs_error("OpenAPI_traffic_forwarding_way_convertToJSON() failed [TrafficForwardingWay]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_traffic_forwarding_way_t *OpenAPI_traffic_forwarding_way_parseFromJSON(cJSON *traffic_forwarding_wayJSON)
{
    OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    traffic_forwarding_way_local_var = OpenAPI_traffic_forwarding_way_create (
    );

    return traffic_forwarding_way_local_var;
end:
    return NULL;
}

OpenAPI_traffic_forwarding_way_t *OpenAPI_traffic_forwarding_way_copy(OpenAPI_traffic_forwarding_way_t *dst, OpenAPI_traffic_forwarding_way_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_traffic_forwarding_way_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_traffic_forwarding_way_convertToJSON() failed");
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

    OpenAPI_traffic_forwarding_way_free(dst);
    dst = OpenAPI_traffic_forwarding_way_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

