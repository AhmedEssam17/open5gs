
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "range_class.h"

OpenAPI_range_class_t *OpenAPI_range_class_create(
)
{
    OpenAPI_range_class_t *range_class_local_var = ogs_malloc(sizeof(OpenAPI_range_class_t));
    ogs_assert(range_class_local_var);


    return range_class_local_var;
}

void OpenAPI_range_class_free(OpenAPI_range_class_t *range_class)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == range_class) {
        return;
    }
    ogs_free(range_class);
}

cJSON *OpenAPI_range_class_convertToJSON(OpenAPI_range_class_t *range_class)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (range_class == NULL) {
        ogs_error("OpenAPI_range_class_convertToJSON() failed [RangeClass]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_range_class_t *OpenAPI_range_class_parseFromJSON(cJSON *range_classJSON)
{
    OpenAPI_range_class_t *range_class_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    range_class_local_var = OpenAPI_range_class_create (
    );

    return range_class_local_var;
end:
    return NULL;
}

OpenAPI_range_class_t *OpenAPI_range_class_copy(OpenAPI_range_class_t *dst, OpenAPI_range_class_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_range_class_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_range_class_convertToJSON() failed");
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

    OpenAPI_range_class_free(dst);
    dst = OpenAPI_range_class_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

