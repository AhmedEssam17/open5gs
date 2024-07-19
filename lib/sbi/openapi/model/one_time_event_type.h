/*
 * one_time_event_type.h
 *
 * 
 */

#ifndef _OpenAPI_one_time_event_type_H_
#define _OpenAPI_one_time_event_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "one_time_event_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_one_time_event_type_s OpenAPI_one_time_event_type_t;
typedef struct OpenAPI_one_time_event_type_s {
} OpenAPI_one_time_event_type_t;

OpenAPI_one_time_event_type_t *OpenAPI_one_time_event_type_create(
);
void OpenAPI_one_time_event_type_free(OpenAPI_one_time_event_type_t *one_time_event_type);
OpenAPI_one_time_event_type_t *OpenAPI_one_time_event_type_parseFromJSON(cJSON *one_time_event_typeJSON);
cJSON *OpenAPI_one_time_event_type_convertToJSON(OpenAPI_one_time_event_type_t *one_time_event_type);
OpenAPI_one_time_event_type_t *OpenAPI_one_time_event_type_copy(OpenAPI_one_time_event_type_t *dst, OpenAPI_one_time_event_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_one_time_event_type_H_ */

