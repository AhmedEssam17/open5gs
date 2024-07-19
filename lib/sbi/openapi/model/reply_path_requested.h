/*
 * reply_path_requested.h
 *
 * 
 */

#ifndef _OpenAPI_reply_path_requested_H_
#define _OpenAPI_reply_path_requested_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "reply_path_requested_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_reply_path_requested_s OpenAPI_reply_path_requested_t;
typedef struct OpenAPI_reply_path_requested_s {
} OpenAPI_reply_path_requested_t;

OpenAPI_reply_path_requested_t *OpenAPI_reply_path_requested_create(
);
void OpenAPI_reply_path_requested_free(OpenAPI_reply_path_requested_t *reply_path_requested);
OpenAPI_reply_path_requested_t *OpenAPI_reply_path_requested_parseFromJSON(cJSON *reply_path_requestedJSON);
cJSON *OpenAPI_reply_path_requested_convertToJSON(OpenAPI_reply_path_requested_t *reply_path_requested);
OpenAPI_reply_path_requested_t *OpenAPI_reply_path_requested_copy(OpenAPI_reply_path_requested_t *dst, OpenAPI_reply_path_requested_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_reply_path_requested_H_ */

