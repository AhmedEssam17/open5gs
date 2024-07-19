/*
 * range_class.h
 *
 * 
 */

#ifndef _OpenAPI_range_class_H_
#define _OpenAPI_range_class_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "range_class_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_range_class_s OpenAPI_range_class_t;
typedef struct OpenAPI_range_class_s {
} OpenAPI_range_class_t;

OpenAPI_range_class_t *OpenAPI_range_class_create(
);
void OpenAPI_range_class_free(OpenAPI_range_class_t *range_class);
OpenAPI_range_class_t *OpenAPI_range_class_parseFromJSON(cJSON *range_classJSON);
cJSON *OpenAPI_range_class_convertToJSON(OpenAPI_range_class_t *range_class);
OpenAPI_range_class_t *OpenAPI_range_class_copy(OpenAPI_range_class_t *dst, OpenAPI_range_class_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_range_class_H_ */

