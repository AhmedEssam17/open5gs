/*
 * play_to_party_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_play_to_party_any_of_H_
#define _OpenAPI_play_to_party_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_play_to_party_any_of_NULL = 0, OpenAPI_play_to_party_any_of_SERVED, OpenAPI_play_to_party_any_of_REMOTE } OpenAPI_play_to_party_any_of_e;

char* OpenAPI_play_to_party_any_of_ToString(OpenAPI_play_to_party_any_of_e play_to_party_any_of);

OpenAPI_play_to_party_any_of_e OpenAPI_play_to_party_any_of_FromString(char* play_to_party_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_play_to_party_any_of_H_ */

