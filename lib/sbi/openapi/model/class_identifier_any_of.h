/*
 * class_identifier_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_class_identifier_any_of_H_
#define _OpenAPI_class_identifier_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_class_identifier_any_of_NULL = 0, OpenAPI_class_identifier_any_of_PERSONAL, OpenAPI_class_identifier_any_of_ADVERTISEMENT, OpenAPI_class_identifier_any_of_INFORMATIONAL, OpenAPI_class_identifier_any_of__AUTO } OpenAPI_class_identifier_any_of_e;

char* OpenAPI_class_identifier_any_of_ToString(OpenAPI_class_identifier_any_of_e class_identifier_any_of);

OpenAPI_class_identifier_any_of_e OpenAPI_class_identifier_any_of_FromString(char* class_identifier_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_class_identifier_any_of_H_ */

