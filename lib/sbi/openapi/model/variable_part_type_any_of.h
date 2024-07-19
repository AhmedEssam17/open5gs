/*
 * variable_part_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_variable_part_type_any_of_H_
#define _OpenAPI_variable_part_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_variable_part_type_any_of_NULL = 0, OpenAPI_variable_part_type_any_of_INTEGER, OpenAPI_variable_part_type_any_of_NUMBER, OpenAPI_variable_part_type_any_of_TIME, OpenAPI_variable_part_type_any_of_DATE, OpenAPI_variable_part_type_any_of_CURRENCY } OpenAPI_variable_part_type_any_of_e;

char* OpenAPI_variable_part_type_any_of_ToString(OpenAPI_variable_part_type_any_of_e variable_part_type_any_of);

OpenAPI_variable_part_type_any_of_e OpenAPI_variable_part_type_any_of_FromString(char* variable_part_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_variable_part_type_any_of_H_ */

