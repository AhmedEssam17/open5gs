/*
 * ims_charging_information.h
 *
 * 
 */

#ifndef _OpenAPI_ims_charging_information_H_
#define _OpenAPI_ims_charging_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "access_network_info_change.h"
#include "access_transfer_information.h"
#include "called_identity_change.h"
#include "early_media_description.h"
#include "ims_address.h"
#include "ims_node_functionality.h"
#include "ims_session_priority.h"
#include "inter_operator_identifier.h"
#include "isup_cause.h"
#include "message_body.h"
#include "model_3_gppps_data_off_status.h"
#include "nni_information.h"
#include "role_of_ims_node.h"
#include "sdp_media_component.h"
#include "server_capabilities.h"
#include "sip_event_type.h"
#include "tad_identifier.h"
#include "trunk_group_id.h"
#include "user_information.h"
#include "user_location.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_ims_charging_information_s OpenAPI_ims_charging_information_t;
typedef struct OpenAPI_ims_charging_information_s {
    struct OpenAPI_sip_event_type_s *event_type;
    OpenAPI_ims_node_functionality_e i_ms_node_functionality;
    struct OpenAPI_role_of_ims_node_s *role_of_node;
    struct OpenAPI_user_information_s *user_information;
    struct OpenAPI_user_location_s *user_location_info;
    char *ue_time_zone;
    struct OpenAPI_model_3_gppps_data_off_status_s *_3gpp_ps_data_off_status;
    struct OpenAPI_isup_cause_s *isup_cause;
    struct OpenAPI_ims_address_s *control_plane_address;
    char *vlr_number;
    char *msc_address;
    char *user_session_id;
    char *outgoing_session_id;
    struct OpenAPI_ims_session_priority_s *session_priority;
    OpenAPI_list_t *calling_party_addresses;
    char *called_party_address;
    char *number_portability_routinginformation;
    char *carrier_select_routing_information;
    char *alternate_charged_party_address;
    OpenAPI_list_t *requested_party_address;
    OpenAPI_list_t *called_asserted_identities;
    OpenAPI_list_t *called_identity_changes;
    OpenAPI_list_t *associated_uri;
    char *time_stamps;
    OpenAPI_list_t *application_server_information;
    OpenAPI_list_t *inter_operator_identifier;
    char *ims_charging_identifier;
    char *related_icid;
    char *related_icid_generation_node;
    OpenAPI_list_t *transit_ioi_list;
    OpenAPI_list_t *early_media_description;
    OpenAPI_list_t *sdp_session_description;
    OpenAPI_list_t *sdp_media_component;
    struct OpenAPI_ims_address_s *served_party_ip_address;
    struct OpenAPI_server_capabilities_s *server_capabilities;
    struct OpenAPI_trunk_group_id_s *trunk_group_id;
    char *bearer_service;
    char *ims_service_id;
    OpenAPI_list_t *message_bodies;
    OpenAPI_list_t *access_network_information;
    char *additional_access_network_information;
    char *cellular_network_information;
    OpenAPI_list_t *access_transfer_information;
    OpenAPI_list_t *access_network_info_change;
    char *ims_communication_service_id;
    char *ims_application_reference_id;
    bool is_cause_code;
    int cause_code;
    OpenAPI_list_t *reason_header;
    char *initial_ims_charging_identifier;
    OpenAPI_list_t *nni_information;
    char *from_address;
    bool is_ims_emergency_indication;
    int ims_emergency_indication;
    char *ims_visited_network_identifier;
    char *sip_route_header_received;
    char *sip_route_header_transmitted;
    struct OpenAPI_tad_identifier_s *tad_identifier;
    char *fe_identifier_list;
} OpenAPI_ims_charging_information_t;

OpenAPI_ims_charging_information_t *OpenAPI_ims_charging_information_create(
    OpenAPI_sip_event_type_t *event_type,
    OpenAPI_ims_node_functionality_e i_ms_node_functionality,
    OpenAPI_role_of_ims_node_t *role_of_node,
    OpenAPI_user_information_t *user_information,
    OpenAPI_user_location_t *user_location_info,
    char *ue_time_zone,
    OpenAPI_model_3_gppps_data_off_status_t *_3gpp_ps_data_off_status,
    OpenAPI_isup_cause_t *isup_cause,
    OpenAPI_ims_address_t *control_plane_address,
    char *vlr_number,
    char *msc_address,
    char *user_session_id,
    char *outgoing_session_id,
    OpenAPI_ims_session_priority_t *session_priority,
    OpenAPI_list_t *calling_party_addresses,
    char *called_party_address,
    char *number_portability_routinginformation,
    char *carrier_select_routing_information,
    char *alternate_charged_party_address,
    OpenAPI_list_t *requested_party_address,
    OpenAPI_list_t *called_asserted_identities,
    OpenAPI_list_t *called_identity_changes,
    OpenAPI_list_t *associated_uri,
    char *time_stamps,
    OpenAPI_list_t *application_server_information,
    OpenAPI_list_t *inter_operator_identifier,
    char *ims_charging_identifier,
    char *related_icid,
    char *related_icid_generation_node,
    OpenAPI_list_t *transit_ioi_list,
    OpenAPI_list_t *early_media_description,
    OpenAPI_list_t *sdp_session_description,
    OpenAPI_list_t *sdp_media_component,
    OpenAPI_ims_address_t *served_party_ip_address,
    OpenAPI_server_capabilities_t *server_capabilities,
    OpenAPI_trunk_group_id_t *trunk_group_id,
    char *bearer_service,
    char *ims_service_id,
    OpenAPI_list_t *message_bodies,
    OpenAPI_list_t *access_network_information,
    char *additional_access_network_information,
    char *cellular_network_information,
    OpenAPI_list_t *access_transfer_information,
    OpenAPI_list_t *access_network_info_change,
    char *ims_communication_service_id,
    char *ims_application_reference_id,
    bool is_cause_code,
    int cause_code,
    OpenAPI_list_t *reason_header,
    char *initial_ims_charging_identifier,
    OpenAPI_list_t *nni_information,
    char *from_address,
    bool is_ims_emergency_indication,
    int ims_emergency_indication,
    char *ims_visited_network_identifier,
    char *sip_route_header_received,
    char *sip_route_header_transmitted,
    OpenAPI_tad_identifier_t *tad_identifier,
    char *fe_identifier_list
);
void OpenAPI_ims_charging_information_free(OpenAPI_ims_charging_information_t *ims_charging_information);
OpenAPI_ims_charging_information_t *OpenAPI_ims_charging_information_parseFromJSON(cJSON *ims_charging_informationJSON);
cJSON *OpenAPI_ims_charging_information_convertToJSON(OpenAPI_ims_charging_information_t *ims_charging_information);
OpenAPI_ims_charging_information_t *OpenAPI_ims_charging_information_copy(OpenAPI_ims_charging_information_t *dst, OpenAPI_ims_charging_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_ims_charging_information_H_ */

