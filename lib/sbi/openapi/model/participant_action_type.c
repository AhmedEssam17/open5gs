
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "participant_action_type.h"

OpenAPI_participant_action_type_t *OpenAPI_participant_action_type_create(
)
{
    OpenAPI_participant_action_type_t *participant_action_type_local_var = ogs_malloc(sizeof(OpenAPI_participant_action_type_t));
    ogs_assert(participant_action_type_local_var);


    return participant_action_type_local_var;
}

void OpenAPI_participant_action_type_free(OpenAPI_participant_action_type_t *participant_action_type)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == participant_action_type) {
        return;
    }
    ogs_free(participant_action_type);
}

cJSON *OpenAPI_participant_action_type_convertToJSON(OpenAPI_participant_action_type_t *participant_action_type)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (participant_action_type == NULL) {
        ogs_error("OpenAPI_participant_action_type_convertToJSON() failed [ParticipantActionType]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_participant_action_type_t *OpenAPI_participant_action_type_parseFromJSON(cJSON *participant_action_typeJSON)
{
    OpenAPI_participant_action_type_t *participant_action_type_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    participant_action_type_local_var = OpenAPI_participant_action_type_create (
    );

    return participant_action_type_local_var;
end:
    return NULL;
}

OpenAPI_participant_action_type_t *OpenAPI_participant_action_type_copy(OpenAPI_participant_action_type_t *dst, OpenAPI_participant_action_type_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_participant_action_type_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_participant_action_type_convertToJSON() failed");
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

    OpenAPI_participant_action_type_free(dst);
    dst = OpenAPI_participant_action_type_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

