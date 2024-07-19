/*
 * mico_mode_indication.h
 *
 * 
 */

#ifndef _OpenAPI_mico_mode_indication_H_
#define _OpenAPI_mico_mode_indication_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "mico_mode_indication_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_mico_mode_indication_s OpenAPI_mico_mode_indication_t;
typedef struct OpenAPI_mico_mode_indication_s {
} OpenAPI_mico_mode_indication_t;

OpenAPI_mico_mode_indication_t *OpenAPI_mico_mode_indication_create(
);
void OpenAPI_mico_mode_indication_free(OpenAPI_mico_mode_indication_t *mico_mode_indication);
OpenAPI_mico_mode_indication_t *OpenAPI_mico_mode_indication_parseFromJSON(cJSON *mico_mode_indicationJSON);
cJSON *OpenAPI_mico_mode_indication_convertToJSON(OpenAPI_mico_mode_indication_t *mico_mode_indication);
OpenAPI_mico_mode_indication_t *OpenAPI_mico_mode_indication_copy(OpenAPI_mico_mode_indication_t *dst, OpenAPI_mico_mode_indication_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_mico_mode_indication_H_ */

