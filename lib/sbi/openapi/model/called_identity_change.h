/*
 * called_identity_change.h
 *
 * 
 */

#ifndef _OpenAPI_called_identity_change_H_
#define _OpenAPI_called_identity_change_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_called_identity_change_s OpenAPI_called_identity_change_t;
typedef struct OpenAPI_called_identity_change_s {
    char *called_identity;
    char *change_time;
} OpenAPI_called_identity_change_t;

OpenAPI_called_identity_change_t *OpenAPI_called_identity_change_create(
    char *called_identity,
    char *change_time
);
void OpenAPI_called_identity_change_free(OpenAPI_called_identity_change_t *called_identity_change);
OpenAPI_called_identity_change_t *OpenAPI_called_identity_change_parseFromJSON(cJSON *called_identity_changeJSON);
cJSON *OpenAPI_called_identity_change_convertToJSON(OpenAPI_called_identity_change_t *called_identity_change);
OpenAPI_called_identity_change_t *OpenAPI_called_identity_change_copy(OpenAPI_called_identity_change_t *dst, OpenAPI_called_identity_change_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_called_identity_change_H_ */

