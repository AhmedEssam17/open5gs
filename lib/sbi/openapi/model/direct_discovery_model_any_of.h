/*
 * direct_discovery_model_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_direct_discovery_model_any_of_H_
#define _OpenAPI_direct_discovery_model_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_direct_discovery_model_any_of_NULL = 0, OpenAPI_direct_discovery_model_any_of_MODEL_A, OpenAPI_direct_discovery_model_any_of_MODEL_B } OpenAPI_direct_discovery_model_any_of_e;

char* OpenAPI_direct_discovery_model_any_of_ToString(OpenAPI_direct_discovery_model_any_of_e direct_discovery_model_any_of);

OpenAPI_direct_discovery_model_any_of_e OpenAPI_direct_discovery_model_any_of_FromString(char* direct_discovery_model_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_direct_discovery_model_any_of_H_ */

