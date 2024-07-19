
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sms_indication.h"

OpenAPI_sms_indication_t *OpenAPI_sms_indication_create(
)
{
    OpenAPI_sms_indication_t *sms_indication_local_var = ogs_malloc(sizeof(OpenAPI_sms_indication_t));
    ogs_assert(sms_indication_local_var);


    return sms_indication_local_var;
}

void OpenAPI_sms_indication_free(OpenAPI_sms_indication_t *sms_indication)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == sms_indication) {
        return;
    }
    ogs_free(sms_indication);
}

cJSON *OpenAPI_sms_indication_convertToJSON(OpenAPI_sms_indication_t *sms_indication)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (sms_indication == NULL) {
        ogs_error("OpenAPI_sms_indication_convertToJSON() failed [SmsIndication]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_sms_indication_t *OpenAPI_sms_indication_parseFromJSON(cJSON *sms_indicationJSON)
{
    OpenAPI_sms_indication_t *sms_indication_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    sms_indication_local_var = OpenAPI_sms_indication_create (
    );

    return sms_indication_local_var;
end:
    return NULL;
}

OpenAPI_sms_indication_t *OpenAPI_sms_indication_copy(OpenAPI_sms_indication_t *dst, OpenAPI_sms_indication_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_sms_indication_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_sms_indication_convertToJSON() failed");
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

    OpenAPI_sms_indication_free(dst);
    dst = OpenAPI_sms_indication_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

