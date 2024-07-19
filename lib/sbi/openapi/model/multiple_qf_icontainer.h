/*
 * multiple_qf_icontainer.h
 *
 * 
 */

#ifndef _OpenAPI_multiple_qf_icontainer_H_
#define _OpenAPI_multiple_qf_icontainer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "qfi_container_information.h"
#include "trigger.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_multiple_qf_icontainer_s OpenAPI_multiple_qf_icontainer_t;
typedef struct OpenAPI_multiple_qf_icontainer_s {
    OpenAPI_list_t *triggers;
    char *trigger_timestamp;
    bool is_time;
    int time;
    bool is_total_volume;
    int total_volume;
    bool is_uplink_volume;
    int uplink_volume;
    bool is_downlink_volume;
    int downlink_volume;
    int local_sequence_number;
    struct OpenAPI_qfi_container_information_s *q_fi_container_information;
} OpenAPI_multiple_qf_icontainer_t;

OpenAPI_multiple_qf_icontainer_t *OpenAPI_multiple_qf_icontainer_create(
    OpenAPI_list_t *triggers,
    char *trigger_timestamp,
    bool is_time,
    int time,
    bool is_total_volume,
    int total_volume,
    bool is_uplink_volume,
    int uplink_volume,
    bool is_downlink_volume,
    int downlink_volume,
    int local_sequence_number,
    OpenAPI_qfi_container_information_t *q_fi_container_information
);
void OpenAPI_multiple_qf_icontainer_free(OpenAPI_multiple_qf_icontainer_t *multiple_qf_icontainer);
OpenAPI_multiple_qf_icontainer_t *OpenAPI_multiple_qf_icontainer_parseFromJSON(cJSON *multiple_qf_icontainerJSON);
cJSON *OpenAPI_multiple_qf_icontainer_convertToJSON(OpenAPI_multiple_qf_icontainer_t *multiple_qf_icontainer);
OpenAPI_multiple_qf_icontainer_t *OpenAPI_multiple_qf_icontainer_copy(OpenAPI_multiple_qf_icontainer_t *dst, OpenAPI_multiple_qf_icontainer_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_multiple_qf_icontainer_H_ */

