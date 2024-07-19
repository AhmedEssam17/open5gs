/*
 * redundant_transmission_type.h
 *
 * 
 */

#ifndef _OpenAPI_redundant_transmission_type_H_
#define _OpenAPI_redundant_transmission_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "redundant_transmission_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_redundant_transmission_type_s OpenAPI_redundant_transmission_type_t;
typedef struct OpenAPI_redundant_transmission_type_s {
} OpenAPI_redundant_transmission_type_t;

OpenAPI_redundant_transmission_type_t *OpenAPI_redundant_transmission_type_create(
);
void OpenAPI_redundant_transmission_type_free(OpenAPI_redundant_transmission_type_t *redundant_transmission_type);
OpenAPI_redundant_transmission_type_t *OpenAPI_redundant_transmission_type_parseFromJSON(cJSON *redundant_transmission_typeJSON);
cJSON *OpenAPI_redundant_transmission_type_convertToJSON(OpenAPI_redundant_transmission_type_t *redundant_transmission_type);
OpenAPI_redundant_transmission_type_t *OpenAPI_redundant_transmission_type_copy(OpenAPI_redundant_transmission_type_t *dst, OpenAPI_redundant_transmission_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_redundant_transmission_type_H_ */

