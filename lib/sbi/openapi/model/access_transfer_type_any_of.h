/*
 * access_transfer_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_access_transfer_type_any_of_H_
#define _OpenAPI_access_transfer_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_access_transfer_type_any_of_NULL = 0, OpenAPI_access_transfer_type_any_of_PS_TO_CS, OpenAPI_access_transfer_type_any_of_CS_TO_PS, OpenAPI_access_transfer_type_any_of_PS_TO_PS, OpenAPI_access_transfer_type_any_of_CS_TO_CS } OpenAPI_access_transfer_type_any_of_e;

char* OpenAPI_access_transfer_type_any_of_ToString(OpenAPI_access_transfer_type_any_of_e access_transfer_type_any_of);

OpenAPI_access_transfer_type_any_of_e OpenAPI_access_transfer_type_any_of_FromString(char* access_transfer_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_access_transfer_type_any_of_H_ */

