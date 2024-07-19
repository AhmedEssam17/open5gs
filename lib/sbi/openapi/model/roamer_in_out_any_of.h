/*
 * roamer_in_out_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_roamer_in_out_any_of_H_
#define _OpenAPI_roamer_in_out_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_roamer_in_out_any_of_NULL = 0, OpenAPI_roamer_in_out_any_of_IN_BOUND, OpenAPI_roamer_in_out_any_of_OUT_BOUND } OpenAPI_roamer_in_out_any_of_e;

char* OpenAPI_roamer_in_out_any_of_ToString(OpenAPI_roamer_in_out_any_of_e roamer_in_out_any_of);

OpenAPI_roamer_in_out_any_of_e OpenAPI_roamer_in_out_any_of_FromString(char* roamer_in_out_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_roamer_in_out_any_of_H_ */

