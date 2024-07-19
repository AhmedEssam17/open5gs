/*
 * prose_functionality.h
 *
 * 
 */

#ifndef _OpenAPI_prose_functionality_H_
#define _OpenAPI_prose_functionality_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "prose_functionality_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_prose_functionality_s OpenAPI_prose_functionality_t;
typedef struct OpenAPI_prose_functionality_s {
} OpenAPI_prose_functionality_t;

OpenAPI_prose_functionality_t *OpenAPI_prose_functionality_create(
);
void OpenAPI_prose_functionality_free(OpenAPI_prose_functionality_t *prose_functionality);
OpenAPI_prose_functionality_t *OpenAPI_prose_functionality_parseFromJSON(cJSON *prose_functionalityJSON);
cJSON *OpenAPI_prose_functionality_convertToJSON(OpenAPI_prose_functionality_t *prose_functionality);
OpenAPI_prose_functionality_t *OpenAPI_prose_functionality_copy(OpenAPI_prose_functionality_t *dst, OpenAPI_prose_functionality_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_prose_functionality_H_ */

