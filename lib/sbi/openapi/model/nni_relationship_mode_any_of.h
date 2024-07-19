/*
 * nni_relationship_mode_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_nni_relationship_mode_any_of_H_
#define _OpenAPI_nni_relationship_mode_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_nni_relationship_mode_any_of_NULL = 0, OpenAPI_nni_relationship_mode_any_of_TRUSTED, OpenAPI_nni_relationship_mode_any_of_NON_TRUSTED } OpenAPI_nni_relationship_mode_any_of_e;

char* OpenAPI_nni_relationship_mode_any_of_ToString(OpenAPI_nni_relationship_mode_any_of_e nni_relationship_mode_any_of);

OpenAPI_nni_relationship_mode_any_of_e OpenAPI_nni_relationship_mode_any_of_FromString(char* nni_relationship_mode_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nni_relationship_mode_any_of_H_ */

