/*
 * mico_mode_indication_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_mico_mode_indication_any_of_H_
#define _OpenAPI_mico_mode_indication_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_mico_mode_indication_any_of_NULL = 0, OpenAPI_mico_mode_indication_any_of_MICO_MODE, OpenAPI_mico_mode_indication_any_of_NO_MICO_MODE } OpenAPI_mico_mode_indication_any_of_e;

char* OpenAPI_mico_mode_indication_any_of_ToString(OpenAPI_mico_mode_indication_any_of_e mico_mode_indication_any_of);

OpenAPI_mico_mode_indication_any_of_e OpenAPI_mico_mode_indication_any_of_FromString(char* mico_mode_indication_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_mico_mode_indication_any_of_H_ */

