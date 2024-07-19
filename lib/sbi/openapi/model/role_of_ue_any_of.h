/*
 * role_of_ue_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_role_of_ue_any_of_H_
#define _OpenAPI_role_of_ue_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_role_of_ue_any_of_NULL = 0, OpenAPI_role_of_ue_any_of_ANNOUNCING_UE, OpenAPI_role_of_ue_any_of_MONITORING_UE, OpenAPI_role_of_ue_any_of_REQUESTOR_UE, OpenAPI_role_of_ue_any_of_REQUESTED_UE } OpenAPI_role_of_ue_any_of_e;

char* OpenAPI_role_of_ue_any_of_ToString(OpenAPI_role_of_ue_any_of_e role_of_ue_any_of);

OpenAPI_role_of_ue_any_of_e OpenAPI_role_of_ue_any_of_FromString(char* role_of_ue_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_role_of_ue_any_of_H_ */

