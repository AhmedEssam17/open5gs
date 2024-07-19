/*
 * api_direction.h
 *
 * 
 */

#ifndef _OpenAPI_api_direction_H_
#define _OpenAPI_api_direction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "api_direction_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_api_direction_s OpenAPI_api_direction_t;
typedef struct OpenAPI_api_direction_s {
} OpenAPI_api_direction_t;

OpenAPI_api_direction_t *OpenAPI_api_direction_create(
);
void OpenAPI_api_direction_free(OpenAPI_api_direction_t *api_direction);
OpenAPI_api_direction_t *OpenAPI_api_direction_parseFromJSON(cJSON *api_directionJSON);
cJSON *OpenAPI_api_direction_convertToJSON(OpenAPI_api_direction_t *api_direction);
OpenAPI_api_direction_t *OpenAPI_api_direction_copy(OpenAPI_api_direction_t *dst, OpenAPI_api_direction_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_api_direction_H_ */

