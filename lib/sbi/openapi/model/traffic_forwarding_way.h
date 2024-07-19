/*
 * traffic_forwarding_way.h
 *
 * 
 */

#ifndef _OpenAPI_traffic_forwarding_way_H_
#define _OpenAPI_traffic_forwarding_way_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "traffic_forwarding_way_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_traffic_forwarding_way_s OpenAPI_traffic_forwarding_way_t;
typedef struct OpenAPI_traffic_forwarding_way_s {
} OpenAPI_traffic_forwarding_way_t;

OpenAPI_traffic_forwarding_way_t *OpenAPI_traffic_forwarding_way_create(
);
void OpenAPI_traffic_forwarding_way_free(OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way);
OpenAPI_traffic_forwarding_way_t *OpenAPI_traffic_forwarding_way_parseFromJSON(cJSON *traffic_forwarding_wayJSON);
cJSON *OpenAPI_traffic_forwarding_way_convertToJSON(OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way);
OpenAPI_traffic_forwarding_way_t *OpenAPI_traffic_forwarding_way_copy(OpenAPI_traffic_forwarding_way_t *dst, OpenAPI_traffic_forwarding_way_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_traffic_forwarding_way_H_ */

