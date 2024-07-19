/*
 * nspa_container_information.h
 *
 * 
 */

#ifndef _OpenAPI_nspa_container_information_H_
#define _OpenAPI_nspa_container_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "nsi_load_level_info.h"
#include "service_experience_info.h"
#include "throughput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nspa_container_information_s OpenAPI_nspa_container_information_t;
typedef struct OpenAPI_nspa_container_information_s {
    bool is_latency;
    int latency;
    struct OpenAPI_throughput_s *throughput;
    char *maximum_packet_loss_rate;
    struct OpenAPI_service_experience_info_s *service_experience_statistics_data;
    bool is_the_number_of_pdu_sessions;
    int the_number_of_pdu_sessions;
    bool is_the_number_of_registered_subscribers;
    int the_number_of_registered_subscribers;
    struct OpenAPI_nsi_load_level_info_s *load_level;
} OpenAPI_nspa_container_information_t;

OpenAPI_nspa_container_information_t *OpenAPI_nspa_container_information_create(
    bool is_latency,
    int latency,
    OpenAPI_throughput_t *throughput,
    char *maximum_packet_loss_rate,
    OpenAPI_service_experience_info_t *service_experience_statistics_data,
    bool is_the_number_of_pdu_sessions,
    int the_number_of_pdu_sessions,
    bool is_the_number_of_registered_subscribers,
    int the_number_of_registered_subscribers,
    OpenAPI_nsi_load_level_info_t *load_level
);
void OpenAPI_nspa_container_information_free(OpenAPI_nspa_container_information_t *nspa_container_information);
OpenAPI_nspa_container_information_t *OpenAPI_nspa_container_information_parseFromJSON(cJSON *nspa_container_informationJSON);
cJSON *OpenAPI_nspa_container_information_convertToJSON(OpenAPI_nspa_container_information_t *nspa_container_information);
OpenAPI_nspa_container_information_t *OpenAPI_nspa_container_information_copy(OpenAPI_nspa_container_information_t *dst, OpenAPI_nspa_container_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nspa_container_information_H_ */

