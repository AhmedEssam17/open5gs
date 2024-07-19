/*
 * sdp_type.h
 *
 * 
 */

#ifndef _OpenAPI_sdp_type_H_
#define _OpenAPI_sdp_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "sdp_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sdp_type_s OpenAPI_sdp_type_t;
typedef struct OpenAPI_sdp_type_s {
} OpenAPI_sdp_type_t;

OpenAPI_sdp_type_t *OpenAPI_sdp_type_create(
);
void OpenAPI_sdp_type_free(OpenAPI_sdp_type_t *sdp_type);
OpenAPI_sdp_type_t *OpenAPI_sdp_type_parseFromJSON(cJSON *sdp_typeJSON);
cJSON *OpenAPI_sdp_type_convertToJSON(OpenAPI_sdp_type_t *sdp_type);
OpenAPI_sdp_type_t *OpenAPI_sdp_type_copy(OpenAPI_sdp_type_t *dst, OpenAPI_sdp_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sdp_type_H_ */

