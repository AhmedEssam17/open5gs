/*
 * reply_path_requested_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_reply_path_requested_any_of_H_
#define _OpenAPI_reply_path_requested_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_reply_path_requested_any_of_NULL = 0, OpenAPI_reply_path_requested_any_of_NO_REPLY_PATH_SET, OpenAPI_reply_path_requested_any_of_REPLY_PATH_SET } OpenAPI_reply_path_requested_any_of_e;

char* OpenAPI_reply_path_requested_any_of_ToString(OpenAPI_reply_path_requested_any_of_e reply_path_requested_any_of);

OpenAPI_reply_path_requested_any_of_e OpenAPI_reply_path_requested_any_of_FromString(char* reply_path_requested_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_reply_path_requested_any_of_H_ */

