/*
 * session_failover.h
 *
 * 
 */

#ifndef _OpenAPI_session_failover_H_
#define _OpenAPI_session_failover_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "session_failover_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_session_failover_s OpenAPI_session_failover_t;
typedef struct OpenAPI_session_failover_s {
} OpenAPI_session_failover_t;

OpenAPI_session_failover_t *OpenAPI_session_failover_create(
);
void OpenAPI_session_failover_free(OpenAPI_session_failover_t *session_failover);
OpenAPI_session_failover_t *OpenAPI_session_failover_parseFromJSON(cJSON *session_failoverJSON);
cJSON *OpenAPI_session_failover_convertToJSON(OpenAPI_session_failover_t *session_failover);
OpenAPI_session_failover_t *OpenAPI_session_failover_copy(OpenAPI_session_failover_t *dst, OpenAPI_session_failover_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_session_failover_H_ */

