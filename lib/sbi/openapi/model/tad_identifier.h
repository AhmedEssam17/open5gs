/*
 * tad_identifier.h
 *
 * 
 */

#ifndef _OpenAPI_tad_identifier_H_
#define _OpenAPI_tad_identifier_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "tad_identifier_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_tad_identifier_s OpenAPI_tad_identifier_t;
typedef struct OpenAPI_tad_identifier_s {
} OpenAPI_tad_identifier_t;

OpenAPI_tad_identifier_t *OpenAPI_tad_identifier_create(
);
void OpenAPI_tad_identifier_free(OpenAPI_tad_identifier_t *tad_identifier);
OpenAPI_tad_identifier_t *OpenAPI_tad_identifier_parseFromJSON(cJSON *tad_identifierJSON);
cJSON *OpenAPI_tad_identifier_convertToJSON(OpenAPI_tad_identifier_t *tad_identifier);
OpenAPI_tad_identifier_t *OpenAPI_tad_identifier_copy(OpenAPI_tad_identifier_t *dst, OpenAPI_tad_identifier_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_tad_identifier_H_ */

