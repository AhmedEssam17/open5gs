/*
 * access_transfer_information.h
 *
 * 
 */

#ifndef _OpenAPI_access_transfer_information_H_
#define _OpenAPI_access_transfer_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "access_transfer_type.h"
#include "ims_address.h"
#include "ue_transfer_type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_access_transfer_information_s OpenAPI_access_transfer_information_t;
typedef struct OpenAPI_access_transfer_information_s {
    struct OpenAPI_access_transfer_type_s *access_transfer_type;
    OpenAPI_list_t *access_network_information;
    char *cellular_network_information;
    struct OpenAPI_ue_transfer_type_s *inter_ue_transfer;
    char *user_equipment_info;
    char *instance_id;
    char *related_ims_charging_identifier;
    struct OpenAPI_ims_address_s *related_ims_charging_identifier_node;
    char *change_time;
} OpenAPI_access_transfer_information_t;

OpenAPI_access_transfer_information_t *OpenAPI_access_transfer_information_create(
    OpenAPI_access_transfer_type_t *access_transfer_type,
    OpenAPI_list_t *access_network_information,
    char *cellular_network_information,
    OpenAPI_ue_transfer_type_t *inter_ue_transfer,
    char *user_equipment_info,
    char *instance_id,
    char *related_ims_charging_identifier,
    OpenAPI_ims_address_t *related_ims_charging_identifier_node,
    char *change_time
);
void OpenAPI_access_transfer_information_free(OpenAPI_access_transfer_information_t *access_transfer_information);
OpenAPI_access_transfer_information_t *OpenAPI_access_transfer_information_parseFromJSON(cJSON *access_transfer_informationJSON);
cJSON *OpenAPI_access_transfer_information_convertToJSON(OpenAPI_access_transfer_information_t *access_transfer_information);
OpenAPI_access_transfer_information_t *OpenAPI_access_transfer_information_copy(OpenAPI_access_transfer_information_t *dst, OpenAPI_access_transfer_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_access_transfer_information_H_ */

