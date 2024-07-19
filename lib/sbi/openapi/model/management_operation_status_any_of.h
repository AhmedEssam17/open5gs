/*
 * management_operation_status_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_management_operation_status_any_of_H_
#define _OpenAPI_management_operation_status_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_management_operation_status_any_of_NULL = 0, OpenAPI_management_operation_status_any_of_OPERATION_SUCCEEDED, OpenAPI_management_operation_status_any_of_OPERATION_FAILED } OpenAPI_management_operation_status_any_of_e;

char* OpenAPI_management_operation_status_any_of_ToString(OpenAPI_management_operation_status_any_of_e management_operation_status_any_of);

OpenAPI_management_operation_status_any_of_e OpenAPI_management_operation_status_any_of_FromString(char* management_operation_status_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_management_operation_status_any_of_H_ */

