/*
 * redundant_transmission_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_redundant_transmission_type_any_of_H_
#define _OpenAPI_redundant_transmission_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_redundant_transmission_type_any_of_NULL = 0, OpenAPI_redundant_transmission_type_any_of_NON_TRANSMISSION, OpenAPI_redundant_transmission_type_any_of_END_TO_END_USER_PLANE_PATHS, OpenAPI_redundant_transmission_type_any_of_N3_N9, OpenAPI_redundant_transmission_type_any_of_TRANSPORT_LAYER } OpenAPI_redundant_transmission_type_any_of_e;

char* OpenAPI_redundant_transmission_type_any_of_ToString(OpenAPI_redundant_transmission_type_any_of_e redundant_transmission_type_any_of);

OpenAPI_redundant_transmission_type_any_of_e OpenAPI_redundant_transmission_type_any_of_FromString(char* redundant_transmission_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_redundant_transmission_type_any_of_H_ */

