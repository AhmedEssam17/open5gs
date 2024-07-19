/*
 * charging_characteristics_selection_mode.h
 *
 * 
 */

#ifndef _OpenAPI_charging_characteristics_selection_mode_H_
#define _OpenAPI_charging_characteristics_selection_mode_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "charging_characteristics_selection_mode_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_charging_characteristics_selection_mode_s OpenAPI_charging_characteristics_selection_mode_t;
typedef struct OpenAPI_charging_characteristics_selection_mode_s {
} OpenAPI_charging_characteristics_selection_mode_t;

OpenAPI_charging_characteristics_selection_mode_t *OpenAPI_charging_characteristics_selection_mode_create(
);
void OpenAPI_charging_characteristics_selection_mode_free(OpenAPI_charging_characteristics_selection_mode_t *charging_characteristics_selection_mode);
OpenAPI_charging_characteristics_selection_mode_t *OpenAPI_charging_characteristics_selection_mode_parseFromJSON(cJSON *charging_characteristics_selection_modeJSON);
cJSON *OpenAPI_charging_characteristics_selection_mode_convertToJSON(OpenAPI_charging_characteristics_selection_mode_t *charging_characteristics_selection_mode);
OpenAPI_charging_characteristics_selection_mode_t *OpenAPI_charging_characteristics_selection_mode_copy(OpenAPI_charging_characteristics_selection_mode_t *dst, OpenAPI_charging_characteristics_selection_mode_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_charging_characteristics_selection_mode_H_ */

