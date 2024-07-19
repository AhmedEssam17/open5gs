/*
 * api_direction_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_api_direction_any_of_H_
#define _OpenAPI_api_direction_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_api_direction_any_of_NULL = 0, OpenAPI_api_direction_any_of_INVOCATION, OpenAPI_api_direction_any_of_NOTIFICATION } OpenAPI_api_direction_any_of_e;

char* OpenAPI_api_direction_any_of_ToString(OpenAPI_api_direction_any_of_e api_direction_any_of);

OpenAPI_api_direction_any_of_e OpenAPI_api_direction_any_of_FromString(char* api_direction_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_api_direction_any_of_H_ */

