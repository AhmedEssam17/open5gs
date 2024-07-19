/*
 * prose_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_prose_charging_information_H_
#define _OpenAPI_prose_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "direct_discovery_model.h"
#include "ip_addr.h"
#include "pc5_data_container.h"
#include "pfi_container_information.h"
#include "plmn_id.h"
#include "prose_event_type.h"
#include "prose_functionality.h"
#include "range_class.h"
#include "role_of_ue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_prose_charging_information_s OpenAPI_prose_charging_information_t;
typedef struct OpenAPI_prose_charging_information_s {
    struct OpenAPI_plmn_id_s *announcing_plmn_id;
    struct OpenAPI_plmn_id_s *announcing_ue_hplmn_identifier;
    struct OpenAPI_plmn_id_s *announcing_ue_vplmn_identifier;
    struct OpenAPI_plmn_id_s *monitoring_ue_hplmn_identifier;
    struct OpenAPI_plmn_id_s *monitoring_ue_vplmn_identifier;
    struct OpenAPI_plmn_id_s *discoverer_ue_hplmn_identifier;
    struct OpenAPI_plmn_id_s *discoverer_ue_vplmn_identifier;
    struct OpenAPI_plmn_id_s *discoveree_ue_hplmn_identifier;
    struct OpenAPI_plmn_id_s *discoveree_ue_vplmn_identifier;
    struct OpenAPI_plmn_id_s *monitored_plmn_identifier;
    char *prose_application_id;
    char *application_id;
    OpenAPI_list_t *application_specific_data_list;
    struct OpenAPI_prose_functionality_s *prose_functionality;
    struct OpenAPI_prose_event_type_s *prose_event_type;
    struct OpenAPI_direct_discovery_model_s *direct_discovery_model;
    bool is_validity_period;
    int validity_period;
    struct OpenAPI_role_of_ue_s *role_of_ue;
    char *prose_request_timestamp;
    bool is_p_c3_protocol_cause;
    int p_c3_protocol_cause;
    char *monitoring_ue_identifier;
    struct OpenAPI_plmn_id_s *requested_plmn_identifier;
    bool is_time_window;
    int time_window;
    struct OpenAPI_range_class_s *range_class;
    bool is_proximity_alert_indication;
    int proximity_alert_indication;
    char *proximity_alert_timestamp;
    char *proximity_cancellation_timestamp;
    struct OpenAPI_ip_addr_s *relay_ip_address;
    char *prose_ueto_network_relay_ueid;
    char *prose_destination_layer2_id;
    OpenAPI_list_t *p_fi_container_information;
    OpenAPI_list_t *transmission_data_container;
    OpenAPI_list_t *reception_data_container;
} OpenAPI_prose_charging_information_t;

OpenAPI_prose_charging_information_t *OpenAPI_prose_charging_information_create(
    OpenAPI_plmn_id_t *announcing_plmn_id,
    OpenAPI_plmn_id_t *announcing_ue_hplmn_identifier,
    OpenAPI_plmn_id_t *announcing_ue_vplmn_identifier,
    OpenAPI_plmn_id_t *monitoring_ue_hplmn_identifier,
    OpenAPI_plmn_id_t *monitoring_ue_vplmn_identifier,
    OpenAPI_plmn_id_t *discoverer_ue_hplmn_identifier,
    OpenAPI_plmn_id_t *discoverer_ue_vplmn_identifier,
    OpenAPI_plmn_id_t *discoveree_ue_hplmn_identifier,
    OpenAPI_plmn_id_t *discoveree_ue_vplmn_identifier,
    OpenAPI_plmn_id_t *monitored_plmn_identifier,
    char *prose_application_id,
    char *application_id,
    OpenAPI_list_t *application_specific_data_list,
    OpenAPI_prose_functionality_t *prose_functionality,
    OpenAPI_prose_event_type_t *prose_event_type,
    OpenAPI_direct_discovery_model_t *direct_discovery_model,
    bool is_validity_period,
    int validity_period,
    OpenAPI_role_of_ue_t *role_of_ue,
    char *prose_request_timestamp,
    bool is_p_c3_protocol_cause,
    int p_c3_protocol_cause,
    char *monitoring_ue_identifier,
    OpenAPI_plmn_id_t *requested_plmn_identifier,
    bool is_time_window,
    int time_window,
    OpenAPI_range_class_t *range_class,
    bool is_proximity_alert_indication,
    int proximity_alert_indication,
    char *proximity_alert_timestamp,
    char *proximity_cancellation_timestamp,
    OpenAPI_ip_addr_t *relay_ip_address,
    char *prose_ueto_network_relay_ueid,
    char *prose_destination_layer2_id,
    OpenAPI_list_t *p_fi_container_information,
    OpenAPI_list_t *transmission_data_container,
    OpenAPI_list_t *reception_data_container
);
void OpenAPI_prose_charging_information_free(OpenAPI_prose_charging_information_t *prose_charging_information);
OpenAPI_prose_charging_information_t *OpenAPI_prose_charging_information_parseFromJSON(cJSON *prose_charging_informationJSON);
cJSON *OpenAPI_prose_charging_information_convertToJSON(OpenAPI_prose_charging_information_t *prose_charging_information);
OpenAPI_prose_charging_information_t *OpenAPI_prose_charging_information_copy(OpenAPI_prose_charging_information_t *dst, OpenAPI_prose_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_prose_charging_information_H_ */

