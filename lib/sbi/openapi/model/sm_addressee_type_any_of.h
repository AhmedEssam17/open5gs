/*
 * sm_addressee_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_sm_addressee_type_any_of_H_
#define _OpenAPI_sm_addressee_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_sm_addressee_type_any_of_NULL = 0, OpenAPI_sm_addressee_type_any_of_TO, OpenAPI_sm_addressee_type_any_of_CC, OpenAPI_sm_addressee_type_any_of_BCC } OpenAPI_sm_addressee_type_any_of_e;

char* OpenAPI_sm_addressee_type_any_of_ToString(OpenAPI_sm_addressee_type_any_of_e sm_addressee_type_any_of);

OpenAPI_sm_addressee_type_any_of_e OpenAPI_sm_addressee_type_any_of_FromString(char* sm_addressee_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_addressee_type_any_of_H_ */

