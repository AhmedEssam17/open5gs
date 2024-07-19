/*
 * service_profile_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_service_profile_charging_information_H_
#define _OpenAPI_service_profile_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "snssai.h"
#include "throughput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_service_profile_charging_information_s OpenAPI_service_profile_charging_information_t;
typedef struct OpenAPI_service_profile_charging_information_s {
    char *service_profile_identifier;
    OpenAPI_list_t *s_nssai_list;
    bool is_latency;
    int latency;
    bool is_availability;
    double availability;
    bool is_jitter;
    int jitter;
    char *reliability;
    bool is_max_numberof_ues;
    int max_numberof_ues;
    char *coverage_area;
    struct OpenAPI_throughput_s *d_l_thpt_per_slice;
    struct OpenAPI_throughput_s *d_l_thpt_per_ue;
    struct OpenAPI_throughput_s *u_l_thpt_per_slice;
    struct OpenAPI_throughput_s *u_l_thpt_per_ue;
    bool is_max_numberof_pd_usessions;
    int max_numberof_pd_usessions;
    char *k_pi_monitoring_list;
    bool is_supported_access_technology;
    int supported_access_technology;
    char *add_service_profile_info;
} OpenAPI_service_profile_charging_information_t;

OpenAPI_service_profile_charging_information_t *OpenAPI_service_profile_charging_information_create(
    char *service_profile_identifier,
    OpenAPI_list_t *s_nssai_list,
    bool is_latency,
    int latency,
    bool is_availability,
    double availability,
    bool is_jitter,
    int jitter,
    char *reliability,
    bool is_max_numberof_ues,
    int max_numberof_ues,
    char *coverage_area,
    OpenAPI_throughput_t *d_l_thpt_per_slice,
    OpenAPI_throughput_t *d_l_thpt_per_ue,
    OpenAPI_throughput_t *u_l_thpt_per_slice,
    OpenAPI_throughput_t *u_l_thpt_per_ue,
    bool is_max_numberof_pd_usessions,
    int max_numberof_pd_usessions,
    char *k_pi_monitoring_list,
    bool is_supported_access_technology,
    int supported_access_technology,
    char *add_service_profile_info
);
void OpenAPI_service_profile_charging_information_free(OpenAPI_service_profile_charging_information_t *service_profile_charging_information);
OpenAPI_service_profile_charging_information_t *OpenAPI_service_profile_charging_information_parseFromJSON(cJSON *service_profile_charging_informationJSON);
cJSON *OpenAPI_service_profile_charging_information_convertToJSON(OpenAPI_service_profile_charging_information_t *service_profile_charging_information);
OpenAPI_service_profile_charging_information_t *OpenAPI_service_profile_charging_information_copy(OpenAPI_service_profile_charging_information_t *dst, OpenAPI_service_profile_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_service_profile_charging_information_H_ */

