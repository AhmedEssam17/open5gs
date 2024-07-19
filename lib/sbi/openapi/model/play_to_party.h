/*
 * play_to_party.h
 *
 * 
 */

#ifndef _OpenAPI_play_to_party_H_
#define _OpenAPI_play_to_party_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "play_to_party_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_play_to_party_s OpenAPI_play_to_party_t;
typedef struct OpenAPI_play_to_party_s {
} OpenAPI_play_to_party_t;

OpenAPI_play_to_party_t *OpenAPI_play_to_party_create(
);
void OpenAPI_play_to_party_free(OpenAPI_play_to_party_t *play_to_party);
OpenAPI_play_to_party_t *OpenAPI_play_to_party_parseFromJSON(cJSON *play_to_partyJSON);
cJSON *OpenAPI_play_to_party_convertToJSON(OpenAPI_play_to_party_t *play_to_party);
OpenAPI_play_to_party_t *OpenAPI_play_to_party_copy(OpenAPI_play_to_party_t *dst, OpenAPI_play_to_party_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_play_to_party_H_ */

