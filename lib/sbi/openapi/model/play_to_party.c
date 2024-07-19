
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "play_to_party.h"

OpenAPI_play_to_party_t *OpenAPI_play_to_party_create(
)
{
    OpenAPI_play_to_party_t *play_to_party_local_var = ogs_malloc(sizeof(OpenAPI_play_to_party_t));
    ogs_assert(play_to_party_local_var);


    return play_to_party_local_var;
}

void OpenAPI_play_to_party_free(OpenAPI_play_to_party_t *play_to_party)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == play_to_party) {
        return;
    }
    ogs_free(play_to_party);
}

cJSON *OpenAPI_play_to_party_convertToJSON(OpenAPI_play_to_party_t *play_to_party)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (play_to_party == NULL) {
        ogs_error("OpenAPI_play_to_party_convertToJSON() failed [PlayToParty]");
        return NULL;
    }

    item = cJSON_CreateObject();
end:
    return item;
}

OpenAPI_play_to_party_t *OpenAPI_play_to_party_parseFromJSON(cJSON *play_to_partyJSON)
{
    OpenAPI_play_to_party_t *play_to_party_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    play_to_party_local_var = OpenAPI_play_to_party_create (
    );

    return play_to_party_local_var;
end:
    return NULL;
}

OpenAPI_play_to_party_t *OpenAPI_play_to_party_copy(OpenAPI_play_to_party_t *dst, OpenAPI_play_to_party_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_play_to_party_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_play_to_party_convertToJSON() failed");
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

    OpenAPI_play_to_party_free(dst);
    dst = OpenAPI_play_to_party_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

