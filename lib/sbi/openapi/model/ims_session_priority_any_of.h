/*
 * ims_session_priority_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_ims_session_priority_any_of_H_
#define _OpenAPI_ims_session_priority_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_ims_session_priority_any_of_NULL = 0, OpenAPI_ims_session_priority_any_of_PRIORITY_0, OpenAPI_ims_session_priority_any_of_PRIORITY_1, OpenAPI_ims_session_priority_any_of_PRIORITY_2, OpenAPI_ims_session_priority_any_of_PRIORITY_3, OpenAPI_ims_session_priority_any_of_PRIORITY_4 } OpenAPI_ims_session_priority_any_of_e;

char* OpenAPI_ims_session_priority_any_of_ToString(OpenAPI_ims_session_priority_any_of_e ims_session_priority_any_of);

OpenAPI_ims_session_priority_any_of_e OpenAPI_ims_session_priority_any_of_FromString(char* ims_session_priority_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_ims_session_priority_any_of_H_ */

