/*
 * granted_unit.h
 *
 * 
 */

#ifndef _OpenAPI_granted_unit_H_
#define _OpenAPI_granted_unit_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_granted_unit_s OpenAPI_granted_unit_t;
typedef struct OpenAPI_granted_unit_s {
    char *tariff_time_change;
    bool is_time;
    int time;
    bool is_total_volume;
    int total_volume;
    bool is_uplink_volume;
    int uplink_volume;
    bool is_downlink_volume;
    int downlink_volume;
    bool is_service_specific_units;
    int service_specific_units;
} OpenAPI_granted_unit_t;

OpenAPI_granted_unit_t *OpenAPI_granted_unit_create(
    char *tariff_time_change,
    bool is_time,
    int time,
    bool is_total_volume,
    int total_volume,
    bool is_uplink_volume,
    int uplink_volume,
    bool is_downlink_volume,
    int downlink_volume,
    bool is_service_specific_units,
    int service_specific_units
);
void OpenAPI_granted_unit_free(OpenAPI_granted_unit_t *granted_unit);
OpenAPI_granted_unit_t *OpenAPI_granted_unit_parseFromJSON(cJSON *granted_unitJSON);
cJSON *OpenAPI_granted_unit_convertToJSON(OpenAPI_granted_unit_t *granted_unit);
OpenAPI_granted_unit_t *OpenAPI_granted_unit_copy(OpenAPI_granted_unit_t *dst, OpenAPI_granted_unit_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_granted_unit_H_ */

