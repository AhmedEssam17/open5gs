/*
 * ue_transfer_type.h
 *
 * 
 */

#ifndef _OpenAPI_ue_transfer_type_H_
#define _OpenAPI_ue_transfer_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "ue_transfer_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_ue_transfer_type_s OpenAPI_ue_transfer_type_t;
typedef struct OpenAPI_ue_transfer_type_s {
} OpenAPI_ue_transfer_type_t;

OpenAPI_ue_transfer_type_t *OpenAPI_ue_transfer_type_create(
);
void OpenAPI_ue_transfer_type_free(OpenAPI_ue_transfer_type_t *ue_transfer_type);
OpenAPI_ue_transfer_type_t *OpenAPI_ue_transfer_type_parseFromJSON(cJSON *ue_transfer_typeJSON);
cJSON *OpenAPI_ue_transfer_type_convertToJSON(OpenAPI_ue_transfer_type_t *ue_transfer_type);
OpenAPI_ue_transfer_type_t *OpenAPI_ue_transfer_type_copy(OpenAPI_ue_transfer_type_t *dst, OpenAPI_ue_transfer_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_ue_transfer_type_H_ */

