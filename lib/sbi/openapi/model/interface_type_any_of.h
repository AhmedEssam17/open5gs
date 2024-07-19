/*
 * interface_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_interface_type_any_of_H_
#define _OpenAPI_interface_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_interface_type_any_of_NULL = 0, OpenAPI_interface_type_any_of_UNKNOWN, OpenAPI_interface_type_any_of_MOBILE_ORIGINATING, OpenAPI_interface_type_any_of_MOBILE_TERMINATING, OpenAPI_interface_type_any_of_APPLICATION_ORIGINATING, OpenAPI_interface_type_any_of_APPLICATION_TERMINATING } OpenAPI_interface_type_any_of_e;

char* OpenAPI_interface_type_any_of_ToString(OpenAPI_interface_type_any_of_e interface_type_any_of);

OpenAPI_interface_type_any_of_e OpenAPI_interface_type_any_of_FromString(char* interface_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_interface_type_any_of_H_ */

