/*
 * result_code.h
 *
 * 
 */

#ifndef _OpenAPI_result_code_H_
#define _OpenAPI_result_code_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "result_code_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_result_code_s OpenAPI_result_code_t;
typedef struct OpenAPI_result_code_s {
} OpenAPI_result_code_t;

OpenAPI_result_code_t *OpenAPI_result_code_create(
);
void OpenAPI_result_code_free(OpenAPI_result_code_t *result_code);
OpenAPI_result_code_t *OpenAPI_result_code_parseFromJSON(cJSON *result_codeJSON);
cJSON *OpenAPI_result_code_convertToJSON(OpenAPI_result_code_t *result_code);
OpenAPI_result_code_t *OpenAPI_result_code_copy(OpenAPI_result_code_t *dst, OpenAPI_result_code_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_result_code_H_ */

