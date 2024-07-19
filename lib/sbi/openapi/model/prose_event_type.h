/*
 * prose_event_type.h
 *
 * 
 */

#ifndef _OpenAPI_prose_event_type_H_
#define _OpenAPI_prose_event_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "prose_event_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_prose_event_type_s OpenAPI_prose_event_type_t;
typedef struct OpenAPI_prose_event_type_s {
} OpenAPI_prose_event_type_t;

OpenAPI_prose_event_type_t *OpenAPI_prose_event_type_create(
);
void OpenAPI_prose_event_type_free(OpenAPI_prose_event_type_t *prose_event_type);
OpenAPI_prose_event_type_t *OpenAPI_prose_event_type_parseFromJSON(cJSON *prose_event_typeJSON);
cJSON *OpenAPI_prose_event_type_convertToJSON(OpenAPI_prose_event_type_t *prose_event_type);
OpenAPI_prose_event_type_t *OpenAPI_prose_event_type_copy(OpenAPI_prose_event_type_t *dst, OpenAPI_prose_event_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_prose_event_type_H_ */

