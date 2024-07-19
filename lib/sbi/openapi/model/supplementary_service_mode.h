/*
 * supplementary_service_mode.h
 *
 * 
 */

#ifndef _OpenAPI_supplementary_service_mode_H_
#define _OpenAPI_supplementary_service_mode_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "supplementary_service_mode_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_supplementary_service_mode_s OpenAPI_supplementary_service_mode_t;
typedef struct OpenAPI_supplementary_service_mode_s {
} OpenAPI_supplementary_service_mode_t;

OpenAPI_supplementary_service_mode_t *OpenAPI_supplementary_service_mode_create(
);
void OpenAPI_supplementary_service_mode_free(OpenAPI_supplementary_service_mode_t *supplementary_service_mode);
OpenAPI_supplementary_service_mode_t *OpenAPI_supplementary_service_mode_parseFromJSON(cJSON *supplementary_service_modeJSON);
cJSON *OpenAPI_supplementary_service_mode_convertToJSON(OpenAPI_supplementary_service_mode_t *supplementary_service_mode);
OpenAPI_supplementary_service_mode_t *OpenAPI_supplementary_service_mode_copy(OpenAPI_supplementary_service_mode_t *dst, OpenAPI_supplementary_service_mode_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_supplementary_service_mode_H_ */

