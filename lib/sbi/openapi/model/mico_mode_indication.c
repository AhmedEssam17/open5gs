
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mico_mode_indication.h"

OpenAPI_mico_mode_indication_t *OpenAPI_mico_mode_indication_create(
)
{
    OpenAPI_mico_mode_indication_t *mico_mode_indication_local_var = ogs_malloc(sizeof(OpenAPI_mico_mode_indication_t));
    ogs_assert(mico_mode_indication_local_var);


    return mico_mode_indication_local_var;
}

void OpenAPI_mico_mode_indication_free(OpenAPI_mico_mode_indication_t *mico_mode_indication)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == mico_mode_indication) {
        return;
    }
    ogs_free(mico_mode_indication);
}

cJSON *OpenAPI_mico_mode_indication_convertToJSON(OpenAPI_mico_mode_indication_t *mico_mode_indication)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (mico_mode_indication == NULL) {
        ogs_error("OpenAPI_mico_mode_indication_convertToJSON() failed [MICOModeIndication]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_mico_mode_indication_t *OpenAPI_mico_mode_indication_parseFromJSON(cJSON *mico_mode_indicationJSON)
{
    OpenAPI_mico_mode_indication_t *mico_mode_indication_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    mico_mode_indication_local_var = OpenAPI_mico_mode_indication_create (
    );

    return mico_mode_indication_local_var;
end:
    return NULL;
}

OpenAPI_mico_mode_indication_t *OpenAPI_mico_mode_indication_copy(OpenAPI_mico_mode_indication_t *dst, OpenAPI_mico_mode_indication_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_mico_mode_indication_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_mico_mode_indication_convertToJSON() failed");
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

    OpenAPI_mico_mode_indication_free(dst);
    dst = OpenAPI_mico_mode_indication_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

