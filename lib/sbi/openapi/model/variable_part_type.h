/*
 * variable_part_type.h
 *
 * 
 */

#ifndef _OpenAPI_variable_part_type_H_
#define _OpenAPI_variable_part_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "variable_part_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_variable_part_type_s OpenAPI_variable_part_type_t;
typedef struct OpenAPI_variable_part_type_s {
} OpenAPI_variable_part_type_t;

OpenAPI_variable_part_type_t *OpenAPI_variable_part_type_create(
);
void OpenAPI_variable_part_type_free(OpenAPI_variable_part_type_t *variable_part_type);
OpenAPI_variable_part_type_t *OpenAPI_variable_part_type_parseFromJSON(cJSON *variable_part_typeJSON);
cJSON *OpenAPI_variable_part_type_convertToJSON(OpenAPI_variable_part_type_t *variable_part_type);
OpenAPI_variable_part_type_t *OpenAPI_variable_part_type_copy(OpenAPI_variable_part_type_t *dst, OpenAPI_variable_part_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_variable_part_type_H_ */

