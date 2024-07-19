/*
 * eas_deployment_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_eas_deployment_charging_information_H_
#define _OpenAPI_eas_deployment_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_eas_deployment_charging_information_s OpenAPI_eas_deployment_charging_information_t;
typedef struct OpenAPI_eas_deployment_charging_information_s {
    char *l_cm_start_time;
    char *l_cm_end_time;
} OpenAPI_eas_deployment_charging_information_t;

OpenAPI_eas_deployment_charging_information_t *OpenAPI_eas_deployment_charging_information_create(
    char *l_cm_start_time,
    char *l_cm_end_time
);
void OpenAPI_eas_deployment_charging_information_free(OpenAPI_eas_deployment_charging_information_t *eas_deployment_charging_information);
OpenAPI_eas_deployment_charging_information_t *OpenAPI_eas_deployment_charging_information_parseFromJSON(cJSON *eas_deployment_charging_informationJSON);
cJSON *OpenAPI_eas_deployment_charging_information_convertToJSON(OpenAPI_eas_deployment_charging_information_t *eas_deployment_charging_information);
OpenAPI_eas_deployment_charging_information_t *OpenAPI_eas_deployment_charging_information_copy(OpenAPI_eas_deployment_charging_information_t *dst, OpenAPI_eas_deployment_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_eas_deployment_charging_information_H_ */

