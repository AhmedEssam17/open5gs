/*
 * class_identifier.h
 *
 * 
 */

#ifndef _OpenAPI_class_identifier_H_
#define _OpenAPI_class_identifier_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "class_identifier_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_class_identifier_s OpenAPI_class_identifier_t;
typedef struct OpenAPI_class_identifier_s {
} OpenAPI_class_identifier_t;

OpenAPI_class_identifier_t *OpenAPI_class_identifier_create(
);
void OpenAPI_class_identifier_free(OpenAPI_class_identifier_t *class_identifier);
OpenAPI_class_identifier_t *OpenAPI_class_identifier_parseFromJSON(cJSON *class_identifierJSON);
cJSON *OpenAPI_class_identifier_convertToJSON(OpenAPI_class_identifier_t *class_identifier);
OpenAPI_class_identifier_t *OpenAPI_class_identifier_copy(OpenAPI_class_identifier_t *dst, OpenAPI_class_identifier_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_class_identifier_H_ */

