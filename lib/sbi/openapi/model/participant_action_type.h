/*
 * participant_action_type.h
 *
 * 
 */

#ifndef _OpenAPI_participant_action_type_H_
#define _OpenAPI_participant_action_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "participant_action_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_participant_action_type_s OpenAPI_participant_action_type_t;
typedef struct OpenAPI_participant_action_type_s {
} OpenAPI_participant_action_type_t;

OpenAPI_participant_action_type_t *OpenAPI_participant_action_type_create(
);
void OpenAPI_participant_action_type_free(OpenAPI_participant_action_type_t *participant_action_type);
OpenAPI_participant_action_type_t *OpenAPI_participant_action_type_parseFromJSON(cJSON *participant_action_typeJSON);
cJSON *OpenAPI_participant_action_type_convertToJSON(OpenAPI_participant_action_type_t *participant_action_type);
OpenAPI_participant_action_type_t *OpenAPI_participant_action_type_copy(OpenAPI_participant_action_type_t *dst, OpenAPI_participant_action_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_participant_action_type_H_ */

