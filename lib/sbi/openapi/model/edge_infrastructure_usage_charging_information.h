/*
 * edge_infrastructure_usage_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_edge_infrastructure_usage_charging_information_H_
#define _OpenAPI_edge_infrastructure_usage_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_edge_infrastructure_usage_charging_information_s OpenAPI_edge_infrastructure_usage_charging_information_t;
typedef struct OpenAPI_edge_infrastructure_usage_charging_information_s {
    bool is_mean_virtual_cpu_usage;
    float mean_virtual_cpu_usage;
    bool is_mean_virtual_memory_usage;
    float mean_virtual_memory_usage;
    bool is_mean_virtual_disk_usage;
    float mean_virtual_disk_usage;
    char *duration_start_time;
    char *duration_end_time;
} OpenAPI_edge_infrastructure_usage_charging_information_t;

OpenAPI_edge_infrastructure_usage_charging_information_t *OpenAPI_edge_infrastructure_usage_charging_information_create(
    bool is_mean_virtual_cpu_usage,
    float mean_virtual_cpu_usage,
    bool is_mean_virtual_memory_usage,
    float mean_virtual_memory_usage,
    bool is_mean_virtual_disk_usage,
    float mean_virtual_disk_usage,
    char *duration_start_time,
    char *duration_end_time
);
void OpenAPI_edge_infrastructure_usage_charging_information_free(OpenAPI_edge_infrastructure_usage_charging_information_t *edge_infrastructure_usage_charging_information);
OpenAPI_edge_infrastructure_usage_charging_information_t *OpenAPI_edge_infrastructure_usage_charging_information_parseFromJSON(cJSON *edge_infrastructure_usage_charging_informationJSON);
cJSON *OpenAPI_edge_infrastructure_usage_charging_information_convertToJSON(OpenAPI_edge_infrastructure_usage_charging_information_t *edge_infrastructure_usage_charging_information);
OpenAPI_edge_infrastructure_usage_charging_information_t *OpenAPI_edge_infrastructure_usage_charging_information_copy(OpenAPI_edge_infrastructure_usage_charging_information_t *dst, OpenAPI_edge_infrastructure_usage_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_edge_infrastructure_usage_charging_information_H_ */

