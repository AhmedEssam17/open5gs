/*
 * radio_resources_id.h
 *
 * 
 */

#ifndef _OpenAPI_radio_resources_id_H_
#define _OpenAPI_radio_resources_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "radio_resources_id_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_radio_resources_id_s OpenAPI_radio_resources_id_t;
typedef struct OpenAPI_radio_resources_id_s {
} OpenAPI_radio_resources_id_t;

OpenAPI_radio_resources_id_t *OpenAPI_radio_resources_id_create(
);
void OpenAPI_radio_resources_id_free(OpenAPI_radio_resources_id_t *radio_resources_id);
OpenAPI_radio_resources_id_t *OpenAPI_radio_resources_id_parseFromJSON(cJSON *radio_resources_idJSON);
cJSON *OpenAPI_radio_resources_id_convertToJSON(OpenAPI_radio_resources_id_t *radio_resources_id);
OpenAPI_radio_resources_id_t *OpenAPI_radio_resources_id_copy(OpenAPI_radio_resources_id_t *dst, OpenAPI_radio_resources_id_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_radio_resources_id_H_ */

