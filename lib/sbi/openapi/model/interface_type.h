/*
 * interface_type.h
 *
 * 
 */

#ifndef _OpenAPI_interface_type_H_
#define _OpenAPI_interface_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "interface_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_interface_type_s OpenAPI_interface_type_t;
typedef struct OpenAPI_interface_type_s {
} OpenAPI_interface_type_t;

OpenAPI_interface_type_t *OpenAPI_interface_type_create(
);
void OpenAPI_interface_type_free(OpenAPI_interface_type_t *interface_type);
OpenAPI_interface_type_t *OpenAPI_interface_type_parseFromJSON(cJSON *interface_typeJSON);
cJSON *OpenAPI_interface_type_convertToJSON(OpenAPI_interface_type_t *interface_type);
OpenAPI_interface_type_t *OpenAPI_interface_type_copy(OpenAPI_interface_type_t *dst, OpenAPI_interface_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_interface_type_H_ */

