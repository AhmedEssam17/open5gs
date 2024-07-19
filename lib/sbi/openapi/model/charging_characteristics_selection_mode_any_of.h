/*
 * charging_characteristics_selection_mode_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_charging_characteristics_selection_mode_any_of_H_
#define _OpenAPI_charging_characteristics_selection_mode_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_charging_characteristics_selection_mode_any_of_NULL = 0, OpenAPI_charging_characteristics_selection_mode_any_of_HOME_DEFAULT, OpenAPI_charging_characteristics_selection_mode_any_of_ROAMING_DEFAULT, OpenAPI_charging_characteristics_selection_mode_any_of_VISITING_DEFAULT } OpenAPI_charging_characteristics_selection_mode_any_of_e;

char* OpenAPI_charging_characteristics_selection_mode_any_of_ToString(OpenAPI_charging_characteristics_selection_mode_any_of_e charging_characteristics_selection_mode_any_of);

OpenAPI_charging_characteristics_selection_mode_any_of_e OpenAPI_charging_characteristics_selection_mode_any_of_FromString(char* charging_characteristics_selection_mode_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_charging_characteristics_selection_mode_any_of_H_ */

