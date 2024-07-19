/*
 * originator_party_type.h
 *
 * 
 */

#ifndef _OpenAPI_originator_party_type_H_
#define _OpenAPI_originator_party_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "originator_party_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_originator_party_type_s OpenAPI_originator_party_type_t;
typedef struct OpenAPI_originator_party_type_s {
} OpenAPI_originator_party_type_t;

OpenAPI_originator_party_type_t *OpenAPI_originator_party_type_create(
);
void OpenAPI_originator_party_type_free(OpenAPI_originator_party_type_t *originator_party_type);
OpenAPI_originator_party_type_t *OpenAPI_originator_party_type_parseFromJSON(cJSON *originator_party_typeJSON);
cJSON *OpenAPI_originator_party_type_convertToJSON(OpenAPI_originator_party_type_t *originator_party_type);
OpenAPI_originator_party_type_t *OpenAPI_originator_party_type_copy(OpenAPI_originator_party_type_t *dst, OpenAPI_originator_party_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_originator_party_type_H_ */

