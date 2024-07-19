/*
 * nsm_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_nsm_charging_information_H_
#define _OpenAPI_nsm_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "management_operation.h"
#include "management_operation_status.h"
#include "service_profile_charging_information.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nsm_charging_information_s OpenAPI_nsm_charging_information_t;
typedef struct OpenAPI_nsm_charging_information_s {
    struct OpenAPI_management_operation_s *management_operation;
    char *id_network_slice_instance;
    OpenAPI_list_t *list_ofservice_profile_charging_information;
    struct OpenAPI_management_operation_status_s *management_operation_status;
} OpenAPI_nsm_charging_information_t;

OpenAPI_nsm_charging_information_t *OpenAPI_nsm_charging_information_create(
    OpenAPI_management_operation_t *management_operation,
    char *id_network_slice_instance,
    OpenAPI_list_t *list_ofservice_profile_charging_information,
    OpenAPI_management_operation_status_t *management_operation_status
);
void OpenAPI_nsm_charging_information_free(OpenAPI_nsm_charging_information_t *nsm_charging_information);
OpenAPI_nsm_charging_information_t *OpenAPI_nsm_charging_information_parseFromJSON(cJSON *nsm_charging_informationJSON);
cJSON *OpenAPI_nsm_charging_information_convertToJSON(OpenAPI_nsm_charging_information_t *nsm_charging_information);
OpenAPI_nsm_charging_information_t *OpenAPI_nsm_charging_information_copy(OpenAPI_nsm_charging_information_t *dst, OpenAPI_nsm_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nsm_charging_information_H_ */

