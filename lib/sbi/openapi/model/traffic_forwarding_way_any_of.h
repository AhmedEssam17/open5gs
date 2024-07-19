/*
 * traffic_forwarding_way_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_traffic_forwarding_way_any_of_H_
#define _OpenAPI_traffic_forwarding_way_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_traffic_forwarding_way_any_of_NULL = 0, OpenAPI_traffic_forwarding_way_any_of_N6, OpenAPI_traffic_forwarding_way_any_of_N19, OpenAPI_traffic_forwarding_way_any_of_LOCAL_SWITCH } OpenAPI_traffic_forwarding_way_any_of_e;

char* OpenAPI_traffic_forwarding_way_any_of_ToString(OpenAPI_traffic_forwarding_way_any_of_e traffic_forwarding_way_any_of);

OpenAPI_traffic_forwarding_way_any_of_e OpenAPI_traffic_forwarding_way_any_of_FromString(char* traffic_forwarding_way_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_traffic_forwarding_way_any_of_H_ */

