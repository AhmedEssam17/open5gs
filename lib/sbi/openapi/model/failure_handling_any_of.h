/*
 * failure_handling_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_failure_handling_any_of_H_
#define _OpenAPI_failure_handling_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_failure_handling_any_of_NULL = 0, OpenAPI_failure_handling_any_of_TERMINATE, OpenAPI_failure_handling_any_of__CONTINUE, OpenAPI_failure_handling_any_of_RETRY_AND_TERMINATE } OpenAPI_failure_handling_any_of_e;

char* OpenAPI_failure_handling_any_of_ToString(OpenAPI_failure_handling_any_of_e failure_handling_any_of);

OpenAPI_failure_handling_any_of_e OpenAPI_failure_handling_any_of_FromString(char* failure_handling_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_failure_handling_any_of_H_ */

