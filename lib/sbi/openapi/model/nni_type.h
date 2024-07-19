/*
 * nni_type.h
 *
 * 
 */

#ifndef _OpenAPI_nni_type_H_
#define _OpenAPI_nni_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "nni_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nni_type_s OpenAPI_nni_type_t;
typedef struct OpenAPI_nni_type_s {
} OpenAPI_nni_type_t;

OpenAPI_nni_type_t *OpenAPI_nni_type_create(
);
void OpenAPI_nni_type_free(OpenAPI_nni_type_t *nni_type);
OpenAPI_nni_type_t *OpenAPI_nni_type_parseFromJSON(cJSON *nni_typeJSON);
cJSON *OpenAPI_nni_type_convertToJSON(OpenAPI_nni_type_t *nni_type);
OpenAPI_nni_type_t *OpenAPI_nni_type_copy(OpenAPI_nni_type_t *dst, OpenAPI_nni_type_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nni_type_H_ */

