/*
 * roamer_in_out.h
 *
 * 
 */

#ifndef _OpenAPI_roamer_in_out_H_
#define _OpenAPI_roamer_in_out_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "roamer_in_out_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_roamer_in_out_s OpenAPI_roamer_in_out_t;
typedef struct OpenAPI_roamer_in_out_s {
} OpenAPI_roamer_in_out_t;

OpenAPI_roamer_in_out_t *OpenAPI_roamer_in_out_create(
);
void OpenAPI_roamer_in_out_free(OpenAPI_roamer_in_out_t *roamer_in_out);
OpenAPI_roamer_in_out_t *OpenAPI_roamer_in_out_parseFromJSON(cJSON *roamer_in_outJSON);
cJSON *OpenAPI_roamer_in_out_convertToJSON(OpenAPI_roamer_in_out_t *roamer_in_out);
OpenAPI_roamer_in_out_t *OpenAPI_roamer_in_out_copy(OpenAPI_roamer_in_out_t *dst, OpenAPI_roamer_in_out_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_roamer_in_out_H_ */

