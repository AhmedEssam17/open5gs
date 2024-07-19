/*
 * qos_flows_usage_report.h
 *
 * 
 */

#ifndef _OpenAPI_qos_flows_usage_report_H_
#define _OpenAPI_qos_flows_usage_report_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_qos_flows_usage_report_s OpenAPI_qos_flows_usage_report_t;
typedef struct OpenAPI_qos_flows_usage_report_s {
    bool is_q_fi;
    int q_fi;
    char *start_timestamp;
    char *end_timestamp;
    bool is_uplink_volume;
    int uplink_volume;
    bool is_downlink_volume;
    int downlink_volume;
} OpenAPI_qos_flows_usage_report_t;

OpenAPI_qos_flows_usage_report_t *OpenAPI_qos_flows_usage_report_create(
    bool is_q_fi,
    int q_fi,
    char *start_timestamp,
    char *end_timestamp,
    bool is_uplink_volume,
    int uplink_volume,
    bool is_downlink_volume,
    int downlink_volume
);
void OpenAPI_qos_flows_usage_report_free(OpenAPI_qos_flows_usage_report_t *qos_flows_usage_report);
OpenAPI_qos_flows_usage_report_t *OpenAPI_qos_flows_usage_report_parseFromJSON(cJSON *qos_flows_usage_reportJSON);
cJSON *OpenAPI_qos_flows_usage_report_convertToJSON(OpenAPI_qos_flows_usage_report_t *qos_flows_usage_report);
OpenAPI_qos_flows_usage_report_t *OpenAPI_qos_flows_usage_report_copy(OpenAPI_qos_flows_usage_report_t *dst, OpenAPI_qos_flows_usage_report_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_qos_flows_usage_report_H_ */

