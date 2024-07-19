/*
 * participant_action_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_participant_action_type_any_of_H_
#define _OpenAPI_participant_action_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_participant_action_type_any_of_NULL = 0, OpenAPI_participant_action_type_any_of_CREATE, OpenAPI_participant_action_type_any_of_JOIN, OpenAPI_participant_action_type_any_of_INVITE_INTO, OpenAPI_participant_action_type_any_of_QUIT } OpenAPI_participant_action_type_any_of_e;

char* OpenAPI_participant_action_type_any_of_ToString(OpenAPI_participant_action_type_any_of_e participant_action_type_any_of);

OpenAPI_participant_action_type_any_of_e OpenAPI_participant_action_type_any_of_FromString(char* participant_action_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_participant_action_type_any_of_H_ */

