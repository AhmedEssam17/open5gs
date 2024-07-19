/*
 * sm_addressee_type.h
 *
 * 
 */

#ifndef _OpenAPI_sm_addressee_type_H_
#define _OpenAPI_sm_addressee_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "sm_addressee_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sm_addressee_type_s OpenAPI_sm_addressee_type_t;
typedef struct OpenAPI_sm_addressee_type_s {
} OpenAPI_sm_addressee_type_t;

OpenAPI_sm_addressee_type_t *OpenAPI_sm_addressee_type_create(
);
void OpenAPI_sm_addressee_type_free(OpenAPI_sm_addressee_type_t *sm_addressee_type);
OpenAPI_sm_addressee_type_t *OpenAPI_sm_addressee_type_parseFromJSON(cJSON *sm_addressee_typeJSON);
cJSON *OpenAPI_sm_addressee_type_convertToJSON(OpenAPI_sm_addressee_type_t *sm_addressee_type);
OpenAPI_sm_addressee_type_t *OpenAPI_sm_addressee_type_copy(OpenAPI_sm_addressee_type_t *dst, OpenAPI_sm_addressee_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_addressee_type_H_ */

