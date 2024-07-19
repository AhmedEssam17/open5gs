/*
 * prose_functionality_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_prose_functionality_any_of_H_
#define _OpenAPI_prose_functionality_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_prose_functionality_any_of_NULL = 0, OpenAPI_prose_functionality_any_of_DIRECT_DISCOVERY, OpenAPI_prose_functionality_any_of_DIRECT_COMMUNICATION } OpenAPI_prose_functionality_any_of_e;

char* OpenAPI_prose_functionality_any_of_ToString(OpenAPI_prose_functionality_any_of_e prose_functionality_any_of);

OpenAPI_prose_functionality_any_of_e OpenAPI_prose_functionality_any_of_FromString(char* prose_functionality_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_prose_functionality_any_of_H_ */

