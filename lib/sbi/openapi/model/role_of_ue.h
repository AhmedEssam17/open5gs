/*
 * role_of_ue.h
 *
 * 
 */

#ifndef _OpenAPI_role_of_ue_H_
#define _OpenAPI_role_of_ue_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "role_of_ue_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_role_of_ue_s OpenAPI_role_of_ue_t;
typedef struct OpenAPI_role_of_ue_s {
} OpenAPI_role_of_ue_t;

OpenAPI_role_of_ue_t *OpenAPI_role_of_ue_create(
);
void OpenAPI_role_of_ue_free(OpenAPI_role_of_ue_t *role_of_ue);
OpenAPI_role_of_ue_t *OpenAPI_role_of_ue_parseFromJSON(cJSON *role_of_ueJSON);
cJSON *OpenAPI_role_of_ue_convertToJSON(OpenAPI_role_of_ue_t *role_of_ue);
OpenAPI_role_of_ue_t *OpenAPI_role_of_ue_copy(OpenAPI_role_of_ue_t *dst, OpenAPI_role_of_ue_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_role_of_ue_H_ */

