/*
 * session_failover_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_session_failover_any_of_H_
#define _OpenAPI_session_failover_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_session_failover_any_of_NULL = 0, OpenAPI_session_failover_any_of_FAILOVER_NOT_SUPPORTED, OpenAPI_session_failover_any_of_FAILOVER_SUPPORTED } OpenAPI_session_failover_any_of_e;

char* OpenAPI_session_failover_any_of_ToString(OpenAPI_session_failover_any_of_e session_failover_any_of);

OpenAPI_session_failover_any_of_e OpenAPI_session_failover_any_of_FromString(char* session_failover_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_session_failover_any_of_H_ */

