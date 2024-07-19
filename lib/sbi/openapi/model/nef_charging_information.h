/*
 * nef_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_nef_charging_information_H_
#define _OpenAPI_nef_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "api_direction.h"
#include "nf_identification.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nef_charging_information_s OpenAPI_nef_charging_information_t;
typedef struct OpenAPI_nef_charging_information_s {
    char *external_individual_identifier;
    char *external_group_identifier;
    char *group_identifier;
    struct OpenAPI_api_direction_s *a_pi_direction;
    struct OpenAPI_nf_identification_s *a_pi_target_network_function;
    bool is_a_pi_result_code;
    int a_pi_result_code;
    char *a_pi_name;
    char *a_pi_reference;
    char *a_pi_content;
} OpenAPI_nef_charging_information_t;

OpenAPI_nef_charging_information_t *OpenAPI_nef_charging_information_create(
    char *external_individual_identifier,
    char *external_group_identifier,
    char *group_identifier,
    OpenAPI_api_direction_t *a_pi_direction,
    OpenAPI_nf_identification_t *a_pi_target_network_function,
    bool is_a_pi_result_code,
    int a_pi_result_code,
    char *a_pi_name,
    char *a_pi_reference,
    char *a_pi_content
);
void OpenAPI_nef_charging_information_free(OpenAPI_nef_charging_information_t *nef_charging_information);
OpenAPI_nef_charging_information_t *OpenAPI_nef_charging_information_parseFromJSON(cJSON *nef_charging_informationJSON);
cJSON *OpenAPI_nef_charging_information_convertToJSON(OpenAPI_nef_charging_information_t *nef_charging_information);
OpenAPI_nef_charging_information_t *OpenAPI_nef_charging_information_copy(OpenAPI_nef_charging_information_t *dst, OpenAPI_nef_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nef_charging_information_H_ */

