
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prose_charging_information.h"

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
)
{
    OpenAPI_prose_charging_information_t *prose_charging_information_local_var = ogs_malloc(sizeof(OpenAPI_prose_charging_information_t));
    ogs_assert(prose_charging_information_local_var);

    prose_charging_information_local_var->announcing_plmn_id = announcing_plmn_id;
    prose_charging_information_local_var->announcing_ue_hplmn_identifier = announcing_ue_hplmn_identifier;
    prose_charging_information_local_var->announcing_ue_vplmn_identifier = announcing_ue_vplmn_identifier;
    prose_charging_information_local_var->monitoring_ue_hplmn_identifier = monitoring_ue_hplmn_identifier;
    prose_charging_information_local_var->monitoring_ue_vplmn_identifier = monitoring_ue_vplmn_identifier;
    prose_charging_information_local_var->discoverer_ue_hplmn_identifier = discoverer_ue_hplmn_identifier;
    prose_charging_information_local_var->discoverer_ue_vplmn_identifier = discoverer_ue_vplmn_identifier;
    prose_charging_information_local_var->discoveree_ue_hplmn_identifier = discoveree_ue_hplmn_identifier;
    prose_charging_information_local_var->discoveree_ue_vplmn_identifier = discoveree_ue_vplmn_identifier;
    prose_charging_information_local_var->monitored_plmn_identifier = monitored_plmn_identifier;
    prose_charging_information_local_var->prose_application_id = prose_application_id;
    prose_charging_information_local_var->application_id = application_id;
    prose_charging_information_local_var->application_specific_data_list = application_specific_data_list;
    prose_charging_information_local_var->prose_functionality = prose_functionality;
    prose_charging_information_local_var->prose_event_type = prose_event_type;
    prose_charging_information_local_var->direct_discovery_model = direct_discovery_model;
    prose_charging_information_local_var->is_validity_period = is_validity_period;
    prose_charging_information_local_var->validity_period = validity_period;
    prose_charging_information_local_var->role_of_ue = role_of_ue;
    prose_charging_information_local_var->prose_request_timestamp = prose_request_timestamp;
    prose_charging_information_local_var->is_p_c3_protocol_cause = is_p_c3_protocol_cause;
    prose_charging_information_local_var->p_c3_protocol_cause = p_c3_protocol_cause;
    prose_charging_information_local_var->monitoring_ue_identifier = monitoring_ue_identifier;
    prose_charging_information_local_var->requested_plmn_identifier = requested_plmn_identifier;
    prose_charging_information_local_var->is_time_window = is_time_window;
    prose_charging_information_local_var->time_window = time_window;
    prose_charging_information_local_var->range_class = range_class;
    prose_charging_information_local_var->is_proximity_alert_indication = is_proximity_alert_indication;
    prose_charging_information_local_var->proximity_alert_indication = proximity_alert_indication;
    prose_charging_information_local_var->proximity_alert_timestamp = proximity_alert_timestamp;
    prose_charging_information_local_var->proximity_cancellation_timestamp = proximity_cancellation_timestamp;
    prose_charging_information_local_var->relay_ip_address = relay_ip_address;
    prose_charging_information_local_var->prose_ueto_network_relay_ueid = prose_ueto_network_relay_ueid;
    prose_charging_information_local_var->prose_destination_layer2_id = prose_destination_layer2_id;
    prose_charging_information_local_var->p_fi_container_information = p_fi_container_information;
    prose_charging_information_local_var->transmission_data_container = transmission_data_container;
    prose_charging_information_local_var->reception_data_container = reception_data_container;

    return prose_charging_information_local_var;
}

void OpenAPI_prose_charging_information_free(OpenAPI_prose_charging_information_t *prose_charging_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == prose_charging_information) {
        return;
    }
    if (prose_charging_information->announcing_plmn_id) {
        OpenAPI_plmn_id_free(prose_charging_information->announcing_plmn_id);
        prose_charging_information->announcing_plmn_id = NULL;
    }
    if (prose_charging_information->announcing_ue_hplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->announcing_ue_hplmn_identifier);
        prose_charging_information->announcing_ue_hplmn_identifier = NULL;
    }
    if (prose_charging_information->announcing_ue_vplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->announcing_ue_vplmn_identifier);
        prose_charging_information->announcing_ue_vplmn_identifier = NULL;
    }
    if (prose_charging_information->monitoring_ue_hplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->monitoring_ue_hplmn_identifier);
        prose_charging_information->monitoring_ue_hplmn_identifier = NULL;
    }
    if (prose_charging_information->monitoring_ue_vplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->monitoring_ue_vplmn_identifier);
        prose_charging_information->monitoring_ue_vplmn_identifier = NULL;
    }
    if (prose_charging_information->discoverer_ue_hplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->discoverer_ue_hplmn_identifier);
        prose_charging_information->discoverer_ue_hplmn_identifier = NULL;
    }
    if (prose_charging_information->discoverer_ue_vplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->discoverer_ue_vplmn_identifier);
        prose_charging_information->discoverer_ue_vplmn_identifier = NULL;
    }
    if (prose_charging_information->discoveree_ue_hplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->discoveree_ue_hplmn_identifier);
        prose_charging_information->discoveree_ue_hplmn_identifier = NULL;
    }
    if (prose_charging_information->discoveree_ue_vplmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->discoveree_ue_vplmn_identifier);
        prose_charging_information->discoveree_ue_vplmn_identifier = NULL;
    }
    if (prose_charging_information->monitored_plmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->monitored_plmn_identifier);
        prose_charging_information->monitored_plmn_identifier = NULL;
    }
    if (prose_charging_information->prose_application_id) {
        ogs_free(prose_charging_information->prose_application_id);
        prose_charging_information->prose_application_id = NULL;
    }
    if (prose_charging_information->application_id) {
        ogs_free(prose_charging_information->application_id);
        prose_charging_information->application_id = NULL;
    }
    if (prose_charging_information->application_specific_data_list) {
        OpenAPI_list_for_each(prose_charging_information->application_specific_data_list, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(prose_charging_information->application_specific_data_list);
        prose_charging_information->application_specific_data_list = NULL;
    }
    if (prose_charging_information->prose_functionality) {
        OpenAPI_prose_functionality_free(prose_charging_information->prose_functionality);
        prose_charging_information->prose_functionality = NULL;
    }
    if (prose_charging_information->prose_event_type) {
        OpenAPI_prose_event_type_free(prose_charging_information->prose_event_type);
        prose_charging_information->prose_event_type = NULL;
    }
    if (prose_charging_information->direct_discovery_model) {
        OpenAPI_direct_discovery_model_free(prose_charging_information->direct_discovery_model);
        prose_charging_information->direct_discovery_model = NULL;
    }
    if (prose_charging_information->role_of_ue) {
        OpenAPI_role_of_ue_free(prose_charging_information->role_of_ue);
        prose_charging_information->role_of_ue = NULL;
    }
    if (prose_charging_information->prose_request_timestamp) {
        ogs_free(prose_charging_information->prose_request_timestamp);
        prose_charging_information->prose_request_timestamp = NULL;
    }
    if (prose_charging_information->monitoring_ue_identifier) {
        ogs_free(prose_charging_information->monitoring_ue_identifier);
        prose_charging_information->monitoring_ue_identifier = NULL;
    }
    if (prose_charging_information->requested_plmn_identifier) {
        OpenAPI_plmn_id_free(prose_charging_information->requested_plmn_identifier);
        prose_charging_information->requested_plmn_identifier = NULL;
    }
    if (prose_charging_information->range_class) {
        OpenAPI_range_class_free(prose_charging_information->range_class);
        prose_charging_information->range_class = NULL;
    }
    if (prose_charging_information->proximity_alert_timestamp) {
        ogs_free(prose_charging_information->proximity_alert_timestamp);
        prose_charging_information->proximity_alert_timestamp = NULL;
    }
    if (prose_charging_information->proximity_cancellation_timestamp) {
        ogs_free(prose_charging_information->proximity_cancellation_timestamp);
        prose_charging_information->proximity_cancellation_timestamp = NULL;
    }
    if (prose_charging_information->relay_ip_address) {
        OpenAPI_ip_addr_free(prose_charging_information->relay_ip_address);
        prose_charging_information->relay_ip_address = NULL;
    }
    if (prose_charging_information->prose_ueto_network_relay_ueid) {
        ogs_free(prose_charging_information->prose_ueto_network_relay_ueid);
        prose_charging_information->prose_ueto_network_relay_ueid = NULL;
    }
    if (prose_charging_information->prose_destination_layer2_id) {
        ogs_free(prose_charging_information->prose_destination_layer2_id);
        prose_charging_information->prose_destination_layer2_id = NULL;
    }
    if (prose_charging_information->p_fi_container_information) {
        OpenAPI_list_for_each(prose_charging_information->p_fi_container_information, node) {
            OpenAPI_pfi_container_information_free(node->data);
        }
        OpenAPI_list_free(prose_charging_information->p_fi_container_information);
        prose_charging_information->p_fi_container_information = NULL;
    }
    if (prose_charging_information->transmission_data_container) {
        OpenAPI_list_for_each(prose_charging_information->transmission_data_container, node) {
            OpenAPI_pc5_data_container_free(node->data);
        }
        OpenAPI_list_free(prose_charging_information->transmission_data_container);
        prose_charging_information->transmission_data_container = NULL;
    }
    if (prose_charging_information->reception_data_container) {
        OpenAPI_list_for_each(prose_charging_information->reception_data_container, node) {
            OpenAPI_pc5_data_container_free(node->data);
        }
        OpenAPI_list_free(prose_charging_information->reception_data_container);
        prose_charging_information->reception_data_container = NULL;
    }
    ogs_free(prose_charging_information);
}

cJSON *OpenAPI_prose_charging_information_convertToJSON(OpenAPI_prose_charging_information_t *prose_charging_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (prose_charging_information == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [ProseChargingInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (prose_charging_information->announcing_plmn_id) {
    cJSON *announcing_plmn_id_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->announcing_plmn_id);
    if (announcing_plmn_id_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [announcing_plmn_id]");
        goto end;
    }
    cJSON_AddItemToObject(item, "announcingPlmnID", announcing_plmn_id_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [announcing_plmn_id]");
        goto end;
    }
    }

    if (prose_charging_information->announcing_ue_hplmn_identifier) {
    cJSON *announcing_ue_hplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->announcing_ue_hplmn_identifier);
    if (announcing_ue_hplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [announcing_ue_hplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "announcingUeHplmnIdentifier", announcing_ue_hplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [announcing_ue_hplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->announcing_ue_vplmn_identifier) {
    cJSON *announcing_ue_vplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->announcing_ue_vplmn_identifier);
    if (announcing_ue_vplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [announcing_ue_vplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "announcingUeVplmnIdentifier", announcing_ue_vplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [announcing_ue_vplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->monitoring_ue_hplmn_identifier) {
    cJSON *monitoring_ue_hplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->monitoring_ue_hplmn_identifier);
    if (monitoring_ue_hplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitoring_ue_hplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "monitoringUeHplmnIdentifier", monitoring_ue_hplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitoring_ue_hplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->monitoring_ue_vplmn_identifier) {
    cJSON *monitoring_ue_vplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->monitoring_ue_vplmn_identifier);
    if (monitoring_ue_vplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitoring_ue_vplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "monitoringUeVplmnIdentifier", monitoring_ue_vplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitoring_ue_vplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->discoverer_ue_hplmn_identifier) {
    cJSON *discoverer_ue_hplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->discoverer_ue_hplmn_identifier);
    if (discoverer_ue_hplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoverer_ue_hplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "discovererUeHplmnIdentifier", discoverer_ue_hplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoverer_ue_hplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->discoverer_ue_vplmn_identifier) {
    cJSON *discoverer_ue_vplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->discoverer_ue_vplmn_identifier);
    if (discoverer_ue_vplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoverer_ue_vplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "discovererUeVplmnIdentifier", discoverer_ue_vplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoverer_ue_vplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->discoveree_ue_hplmn_identifier) {
    cJSON *discoveree_ue_hplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->discoveree_ue_hplmn_identifier);
    if (discoveree_ue_hplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoveree_ue_hplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "discovereeUeHplmnIdentifier", discoveree_ue_hplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoveree_ue_hplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->discoveree_ue_vplmn_identifier) {
    cJSON *discoveree_ue_vplmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->discoveree_ue_vplmn_identifier);
    if (discoveree_ue_vplmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoveree_ue_vplmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "discovereeUeVplmnIdentifier", discoveree_ue_vplmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [discoveree_ue_vplmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->monitored_plmn_identifier) {
    cJSON *monitored_plmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->monitored_plmn_identifier);
    if (monitored_plmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitored_plmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "monitoredPlmnIdentifier", monitored_plmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitored_plmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->prose_application_id) {
    if (cJSON_AddStringToObject(item, "proseApplicationID", prose_charging_information->prose_application_id) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_application_id]");
        goto end;
    }
    }

    if (prose_charging_information->application_id) {
    if (cJSON_AddStringToObject(item, "ApplicationId", prose_charging_information->application_id) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [application_id]");
        goto end;
    }
    }

    if (prose_charging_information->application_specific_data_list) {
    cJSON *application_specific_data_listList = cJSON_AddArrayToObject(item, "applicationSpecificDataList");
    if (application_specific_data_listList == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [application_specific_data_list]");
        goto end;
    }
    OpenAPI_list_for_each(prose_charging_information->application_specific_data_list, node) {
        if (cJSON_AddStringToObject(application_specific_data_listList, "", (char*)node->data) == NULL) {
            ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [application_specific_data_list]");
            goto end;
        }
    }
    }

    if (prose_charging_information->prose_functionality) {
    cJSON *prose_functionality_local_JSON = OpenAPI_prose_functionality_convertToJSON(prose_charging_information->prose_functionality);
    if (prose_functionality_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_functionality]");
        goto end;
    }
    cJSON_AddItemToObject(item, "proseFunctionality", prose_functionality_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_functionality]");
        goto end;
    }
    }

    if (prose_charging_information->prose_event_type) {
    cJSON *prose_event_type_local_JSON = OpenAPI_prose_event_type_convertToJSON(prose_charging_information->prose_event_type);
    if (prose_event_type_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_event_type]");
        goto end;
    }
    cJSON_AddItemToObject(item, "proseEventType", prose_event_type_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_event_type]");
        goto end;
    }
    }

    if (prose_charging_information->direct_discovery_model) {
    cJSON *direct_discovery_model_local_JSON = OpenAPI_direct_discovery_model_convertToJSON(prose_charging_information->direct_discovery_model);
    if (direct_discovery_model_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [direct_discovery_model]");
        goto end;
    }
    cJSON_AddItemToObject(item, "directDiscoveryModel", direct_discovery_model_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [direct_discovery_model]");
        goto end;
    }
    }

    if (prose_charging_information->is_validity_period) {
    if (cJSON_AddNumberToObject(item, "validityPeriod", prose_charging_information->validity_period) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [validity_period]");
        goto end;
    }
    }

    if (prose_charging_information->role_of_ue) {
    cJSON *role_of_ue_local_JSON = OpenAPI_role_of_ue_convertToJSON(prose_charging_information->role_of_ue);
    if (role_of_ue_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [role_of_ue]");
        goto end;
    }
    cJSON_AddItemToObject(item, "roleOfUE", role_of_ue_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [role_of_ue]");
        goto end;
    }
    }

    if (prose_charging_information->prose_request_timestamp) {
    if (cJSON_AddStringToObject(item, "proseRequestTimestamp", prose_charging_information->prose_request_timestamp) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_request_timestamp]");
        goto end;
    }
    }

    if (prose_charging_information->is_p_c3_protocol_cause) {
    if (cJSON_AddNumberToObject(item, "pC3ProtocolCause", prose_charging_information->p_c3_protocol_cause) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [p_c3_protocol_cause]");
        goto end;
    }
    }

    if (prose_charging_information->monitoring_ue_identifier) {
    if (cJSON_AddStringToObject(item, "monitoringUEIdentifier", prose_charging_information->monitoring_ue_identifier) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [monitoring_ue_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->requested_plmn_identifier) {
    cJSON *requested_plmn_identifier_local_JSON = OpenAPI_plmn_id_convertToJSON(prose_charging_information->requested_plmn_identifier);
    if (requested_plmn_identifier_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [requested_plmn_identifier]");
        goto end;
    }
    cJSON_AddItemToObject(item, "requestedPLMNIdentifier", requested_plmn_identifier_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [requested_plmn_identifier]");
        goto end;
    }
    }

    if (prose_charging_information->is_time_window) {
    if (cJSON_AddNumberToObject(item, "timeWindow", prose_charging_information->time_window) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [time_window]");
        goto end;
    }
    }

    if (prose_charging_information->range_class) {
    cJSON *range_class_local_JSON = OpenAPI_range_class_convertToJSON(prose_charging_information->range_class);
    if (range_class_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [range_class]");
        goto end;
    }
    cJSON_AddItemToObject(item, "rangeClass", range_class_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [range_class]");
        goto end;
    }
    }

    if (prose_charging_information->is_proximity_alert_indication) {
    if (cJSON_AddBoolToObject(item, "proximityAlertIndication", prose_charging_information->proximity_alert_indication) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [proximity_alert_indication]");
        goto end;
    }
    }

    if (prose_charging_information->proximity_alert_timestamp) {
    if (cJSON_AddStringToObject(item, "proximityAlertTimestamp", prose_charging_information->proximity_alert_timestamp) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [proximity_alert_timestamp]");
        goto end;
    }
    }

    if (prose_charging_information->proximity_cancellation_timestamp) {
    if (cJSON_AddStringToObject(item, "proximityCancellationTimestamp", prose_charging_information->proximity_cancellation_timestamp) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [proximity_cancellation_timestamp]");
        goto end;
    }
    }

    if (prose_charging_information->relay_ip_address) {
    cJSON *relay_ip_address_local_JSON = OpenAPI_ip_addr_convertToJSON(prose_charging_information->relay_ip_address);
    if (relay_ip_address_local_JSON == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [relay_ip_address]");
        goto end;
    }
    cJSON_AddItemToObject(item, "relayIPAddress", relay_ip_address_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [relay_ip_address]");
        goto end;
    }
    }

    if (prose_charging_information->prose_ueto_network_relay_ueid) {
    if (cJSON_AddStringToObject(item, "proseUEToNetworkRelayUEID", prose_charging_information->prose_ueto_network_relay_ueid) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_ueto_network_relay_ueid]");
        goto end;
    }
    }

    if (prose_charging_information->prose_destination_layer2_id) {
    if (cJSON_AddStringToObject(item, "proseDestinationLayer2ID", prose_charging_information->prose_destination_layer2_id) == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [prose_destination_layer2_id]");
        goto end;
    }
    }

    if (prose_charging_information->p_fi_container_information) {
    cJSON *p_fi_container_informationList = cJSON_AddArrayToObject(item, "pFIContainerInformation");
    if (p_fi_container_informationList == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [p_fi_container_information]");
        goto end;
    }
    OpenAPI_list_for_each(prose_charging_information->p_fi_container_information, node) {
        cJSON *itemLocal = OpenAPI_pfi_container_information_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [p_fi_container_information]");
            goto end;
        }
        cJSON_AddItemToArray(p_fi_container_informationList, itemLocal);
    }
    }

    if (prose_charging_information->transmission_data_container) {
    cJSON *transmission_data_containerList = cJSON_AddArrayToObject(item, "transmissionDataContainer");
    if (transmission_data_containerList == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [transmission_data_container]");
        goto end;
    }
    OpenAPI_list_for_each(prose_charging_information->transmission_data_container, node) {
        cJSON *itemLocal = OpenAPI_pc5_data_container_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [transmission_data_container]");
            goto end;
        }
        cJSON_AddItemToArray(transmission_data_containerList, itemLocal);
    }
    }

    if (prose_charging_information->reception_data_container) {
    cJSON *reception_data_containerList = cJSON_AddArrayToObject(item, "receptionDataContainer");
    if (reception_data_containerList == NULL) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [reception_data_container]");
        goto end;
    }
    OpenAPI_list_for_each(prose_charging_information->reception_data_container, node) {
        cJSON *itemLocal = OpenAPI_pc5_data_container_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed [reception_data_container]");
            goto end;
        }
        cJSON_AddItemToArray(reception_data_containerList, itemLocal);
    }
    }

end:
    return item;
}

OpenAPI_prose_charging_information_t *OpenAPI_prose_charging_information_parseFromJSON(cJSON *prose_charging_informationJSON)
{
    OpenAPI_prose_charging_information_t *prose_charging_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *announcing_plmn_id = NULL;
    OpenAPI_plmn_id_t *announcing_plmn_id_local_nonprim = NULL;
    cJSON *announcing_ue_hplmn_identifier = NULL;
    OpenAPI_plmn_id_t *announcing_ue_hplmn_identifier_local_nonprim = NULL;
    cJSON *announcing_ue_vplmn_identifier = NULL;
    OpenAPI_plmn_id_t *announcing_ue_vplmn_identifier_local_nonprim = NULL;
    cJSON *monitoring_ue_hplmn_identifier = NULL;
    OpenAPI_plmn_id_t *monitoring_ue_hplmn_identifier_local_nonprim = NULL;
    cJSON *monitoring_ue_vplmn_identifier = NULL;
    OpenAPI_plmn_id_t *monitoring_ue_vplmn_identifier_local_nonprim = NULL;
    cJSON *discoverer_ue_hplmn_identifier = NULL;
    OpenAPI_plmn_id_t *discoverer_ue_hplmn_identifier_local_nonprim = NULL;
    cJSON *discoverer_ue_vplmn_identifier = NULL;
    OpenAPI_plmn_id_t *discoverer_ue_vplmn_identifier_local_nonprim = NULL;
    cJSON *discoveree_ue_hplmn_identifier = NULL;
    OpenAPI_plmn_id_t *discoveree_ue_hplmn_identifier_local_nonprim = NULL;
    cJSON *discoveree_ue_vplmn_identifier = NULL;
    OpenAPI_plmn_id_t *discoveree_ue_vplmn_identifier_local_nonprim = NULL;
    cJSON *monitored_plmn_identifier = NULL;
    OpenAPI_plmn_id_t *monitored_plmn_identifier_local_nonprim = NULL;
    cJSON *prose_application_id = NULL;
    cJSON *application_id = NULL;
    cJSON *application_specific_data_list = NULL;
    OpenAPI_list_t *application_specific_data_listList = NULL;
    cJSON *prose_functionality = NULL;
    OpenAPI_prose_functionality_t *prose_functionality_local_nonprim = NULL;
    cJSON *prose_event_type = NULL;
    OpenAPI_prose_event_type_t *prose_event_type_local_nonprim = NULL;
    cJSON *direct_discovery_model = NULL;
    OpenAPI_direct_discovery_model_t *direct_discovery_model_local_nonprim = NULL;
    cJSON *validity_period = NULL;
    cJSON *role_of_ue = NULL;
    OpenAPI_role_of_ue_t *role_of_ue_local_nonprim = NULL;
    cJSON *prose_request_timestamp = NULL;
    cJSON *p_c3_protocol_cause = NULL;
    cJSON *monitoring_ue_identifier = NULL;
    cJSON *requested_plmn_identifier = NULL;
    OpenAPI_plmn_id_t *requested_plmn_identifier_local_nonprim = NULL;
    cJSON *time_window = NULL;
    cJSON *range_class = NULL;
    OpenAPI_range_class_t *range_class_local_nonprim = NULL;
    cJSON *proximity_alert_indication = NULL;
    cJSON *proximity_alert_timestamp = NULL;
    cJSON *proximity_cancellation_timestamp = NULL;
    cJSON *relay_ip_address = NULL;
    OpenAPI_ip_addr_t *relay_ip_address_local_nonprim = NULL;
    cJSON *prose_ueto_network_relay_ueid = NULL;
    cJSON *prose_destination_layer2_id = NULL;
    cJSON *p_fi_container_information = NULL;
    OpenAPI_list_t *p_fi_container_informationList = NULL;
    cJSON *transmission_data_container = NULL;
    OpenAPI_list_t *transmission_data_containerList = NULL;
    cJSON *reception_data_container = NULL;
    OpenAPI_list_t *reception_data_containerList = NULL;
    announcing_plmn_id = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "announcingPlmnID");
    if (announcing_plmn_id) {
    announcing_plmn_id_local_nonprim = OpenAPI_plmn_id_parseFromJSON(announcing_plmn_id);
    if (!announcing_plmn_id_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [announcing_plmn_id]");
        goto end;
    }
    }

    announcing_ue_hplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "announcingUeHplmnIdentifier");
    if (announcing_ue_hplmn_identifier) {
    announcing_ue_hplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(announcing_ue_hplmn_identifier);
    if (!announcing_ue_hplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [announcing_ue_hplmn_identifier]");
        goto end;
    }
    }

    announcing_ue_vplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "announcingUeVplmnIdentifier");
    if (announcing_ue_vplmn_identifier) {
    announcing_ue_vplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(announcing_ue_vplmn_identifier);
    if (!announcing_ue_vplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [announcing_ue_vplmn_identifier]");
        goto end;
    }
    }

    monitoring_ue_hplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "monitoringUeHplmnIdentifier");
    if (monitoring_ue_hplmn_identifier) {
    monitoring_ue_hplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(monitoring_ue_hplmn_identifier);
    if (!monitoring_ue_hplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [monitoring_ue_hplmn_identifier]");
        goto end;
    }
    }

    monitoring_ue_vplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "monitoringUeVplmnIdentifier");
    if (monitoring_ue_vplmn_identifier) {
    monitoring_ue_vplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(monitoring_ue_vplmn_identifier);
    if (!monitoring_ue_vplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [monitoring_ue_vplmn_identifier]");
        goto end;
    }
    }

    discoverer_ue_hplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "discovererUeHplmnIdentifier");
    if (discoverer_ue_hplmn_identifier) {
    discoverer_ue_hplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(discoverer_ue_hplmn_identifier);
    if (!discoverer_ue_hplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [discoverer_ue_hplmn_identifier]");
        goto end;
    }
    }

    discoverer_ue_vplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "discovererUeVplmnIdentifier");
    if (discoverer_ue_vplmn_identifier) {
    discoverer_ue_vplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(discoverer_ue_vplmn_identifier);
    if (!discoverer_ue_vplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [discoverer_ue_vplmn_identifier]");
        goto end;
    }
    }

    discoveree_ue_hplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "discovereeUeHplmnIdentifier");
    if (discoveree_ue_hplmn_identifier) {
    discoveree_ue_hplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(discoveree_ue_hplmn_identifier);
    if (!discoveree_ue_hplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [discoveree_ue_hplmn_identifier]");
        goto end;
    }
    }

    discoveree_ue_vplmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "discovereeUeVplmnIdentifier");
    if (discoveree_ue_vplmn_identifier) {
    discoveree_ue_vplmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(discoveree_ue_vplmn_identifier);
    if (!discoveree_ue_vplmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [discoveree_ue_vplmn_identifier]");
        goto end;
    }
    }

    monitored_plmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "monitoredPlmnIdentifier");
    if (monitored_plmn_identifier) {
    monitored_plmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(monitored_plmn_identifier);
    if (!monitored_plmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [monitored_plmn_identifier]");
        goto end;
    }
    }

    prose_application_id = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proseApplicationID");
    if (prose_application_id) {
    if (!cJSON_IsString(prose_application_id) && !cJSON_IsNull(prose_application_id)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [prose_application_id]");
        goto end;
    }
    }

    application_id = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "ApplicationId");
    if (application_id) {
    if (!cJSON_IsString(application_id) && !cJSON_IsNull(application_id)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [application_id]");
        goto end;
    }
    }

    application_specific_data_list = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "applicationSpecificDataList");
    if (application_specific_data_list) {
        cJSON *application_specific_data_list_local = NULL;
        if (!cJSON_IsArray(application_specific_data_list)) {
            ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [application_specific_data_list]");
            goto end;
        }

        application_specific_data_listList = OpenAPI_list_create();

        cJSON_ArrayForEach(application_specific_data_list_local, application_specific_data_list) {
            double *localDouble = NULL;
            int *localInt = NULL;
            if (!cJSON_IsString(application_specific_data_list_local)) {
                ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [application_specific_data_list]");
                goto end;
            }
            OpenAPI_list_add(application_specific_data_listList, ogs_strdup(application_specific_data_list_local->valuestring));
        }
    }

    prose_functionality = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proseFunctionality");
    if (prose_functionality) {
    prose_functionality_local_nonprim = OpenAPI_prose_functionality_parseFromJSON(prose_functionality);
    if (!prose_functionality_local_nonprim) {
        ogs_error("OpenAPI_prose_functionality_parseFromJSON failed [prose_functionality]");
        goto end;
    }
    }

    prose_event_type = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proseEventType");
    if (prose_event_type) {
    prose_event_type_local_nonprim = OpenAPI_prose_event_type_parseFromJSON(prose_event_type);
    if (!prose_event_type_local_nonprim) {
        ogs_error("OpenAPI_prose_event_type_parseFromJSON failed [prose_event_type]");
        goto end;
    }
    }

    direct_discovery_model = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "directDiscoveryModel");
    if (direct_discovery_model) {
    direct_discovery_model_local_nonprim = OpenAPI_direct_discovery_model_parseFromJSON(direct_discovery_model);
    if (!direct_discovery_model_local_nonprim) {
        ogs_error("OpenAPI_direct_discovery_model_parseFromJSON failed [direct_discovery_model]");
        goto end;
    }
    }

    validity_period = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "validityPeriod");
    if (validity_period) {
    if (!cJSON_IsNumber(validity_period)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [validity_period]");
        goto end;
    }
    }

    role_of_ue = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "roleOfUE");
    if (role_of_ue) {
    role_of_ue_local_nonprim = OpenAPI_role_of_ue_parseFromJSON(role_of_ue);
    if (!role_of_ue_local_nonprim) {
        ogs_error("OpenAPI_role_of_ue_parseFromJSON failed [role_of_ue]");
        goto end;
    }
    }

    prose_request_timestamp = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proseRequestTimestamp");
    if (prose_request_timestamp) {
    if (!cJSON_IsString(prose_request_timestamp) && !cJSON_IsNull(prose_request_timestamp)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [prose_request_timestamp]");
        goto end;
    }
    }

    p_c3_protocol_cause = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "pC3ProtocolCause");
    if (p_c3_protocol_cause) {
    if (!cJSON_IsNumber(p_c3_protocol_cause)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [p_c3_protocol_cause]");
        goto end;
    }
    }

    monitoring_ue_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "monitoringUEIdentifier");
    if (monitoring_ue_identifier) {
    if (!cJSON_IsString(monitoring_ue_identifier) && !cJSON_IsNull(monitoring_ue_identifier)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [monitoring_ue_identifier]");
        goto end;
    }
    }

    requested_plmn_identifier = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "requestedPLMNIdentifier");
    if (requested_plmn_identifier) {
    requested_plmn_identifier_local_nonprim = OpenAPI_plmn_id_parseFromJSON(requested_plmn_identifier);
    if (!requested_plmn_identifier_local_nonprim) {
        ogs_error("OpenAPI_plmn_id_parseFromJSON failed [requested_plmn_identifier]");
        goto end;
    }
    }

    time_window = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "timeWindow");
    if (time_window) {
    if (!cJSON_IsNumber(time_window)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [time_window]");
        goto end;
    }
    }

    range_class = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "rangeClass");
    if (range_class) {
    range_class_local_nonprim = OpenAPI_range_class_parseFromJSON(range_class);
    if (!range_class_local_nonprim) {
        ogs_error("OpenAPI_range_class_parseFromJSON failed [range_class]");
        goto end;
    }
    }

    proximity_alert_indication = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proximityAlertIndication");
    if (proximity_alert_indication) {
    if (!cJSON_IsBool(proximity_alert_indication)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [proximity_alert_indication]");
        goto end;
    }
    }

    proximity_alert_timestamp = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proximityAlertTimestamp");
    if (proximity_alert_timestamp) {
    if (!cJSON_IsString(proximity_alert_timestamp) && !cJSON_IsNull(proximity_alert_timestamp)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [proximity_alert_timestamp]");
        goto end;
    }
    }

    proximity_cancellation_timestamp = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proximityCancellationTimestamp");
    if (proximity_cancellation_timestamp) {
    if (!cJSON_IsString(proximity_cancellation_timestamp) && !cJSON_IsNull(proximity_cancellation_timestamp)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [proximity_cancellation_timestamp]");
        goto end;
    }
    }

    relay_ip_address = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "relayIPAddress");
    if (relay_ip_address) {
    relay_ip_address_local_nonprim = OpenAPI_ip_addr_parseFromJSON(relay_ip_address);
    if (!relay_ip_address_local_nonprim) {
        ogs_error("OpenAPI_ip_addr_parseFromJSON failed [relay_ip_address]");
        goto end;
    }
    }

    prose_ueto_network_relay_ueid = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proseUEToNetworkRelayUEID");
    if (prose_ueto_network_relay_ueid) {
    if (!cJSON_IsString(prose_ueto_network_relay_ueid) && !cJSON_IsNull(prose_ueto_network_relay_ueid)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [prose_ueto_network_relay_ueid]");
        goto end;
    }
    }

    prose_destination_layer2_id = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "proseDestinationLayer2ID");
    if (prose_destination_layer2_id) {
    if (!cJSON_IsString(prose_destination_layer2_id) && !cJSON_IsNull(prose_destination_layer2_id)) {
        ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [prose_destination_layer2_id]");
        goto end;
    }
    }

    p_fi_container_information = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "pFIContainerInformation");
    if (p_fi_container_information) {
        cJSON *p_fi_container_information_local = NULL;
        if (!cJSON_IsArray(p_fi_container_information)) {
            ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [p_fi_container_information]");
            goto end;
        }

        p_fi_container_informationList = OpenAPI_list_create();

        cJSON_ArrayForEach(p_fi_container_information_local, p_fi_container_information) {
            if (!cJSON_IsObject(p_fi_container_information_local)) {
                ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [p_fi_container_information]");
                goto end;
            }
            OpenAPI_pfi_container_information_t *p_fi_container_informationItem = OpenAPI_pfi_container_information_parseFromJSON(p_fi_container_information_local);
            if (!p_fi_container_informationItem) {
                ogs_error("No p_fi_container_informationItem");
                goto end;
            }
            OpenAPI_list_add(p_fi_container_informationList, p_fi_container_informationItem);
        }
    }

    transmission_data_container = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "transmissionDataContainer");
    if (transmission_data_container) {
        cJSON *transmission_data_container_local = NULL;
        if (!cJSON_IsArray(transmission_data_container)) {
            ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [transmission_data_container]");
            goto end;
        }

        transmission_data_containerList = OpenAPI_list_create();

        cJSON_ArrayForEach(transmission_data_container_local, transmission_data_container) {
            if (!cJSON_IsObject(transmission_data_container_local)) {
                ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [transmission_data_container]");
                goto end;
            }
            OpenAPI_pc5_data_container_t *transmission_data_containerItem = OpenAPI_pc5_data_container_parseFromJSON(transmission_data_container_local);
            if (!transmission_data_containerItem) {
                ogs_error("No transmission_data_containerItem");
                goto end;
            }
            OpenAPI_list_add(transmission_data_containerList, transmission_data_containerItem);
        }
    }

    reception_data_container = cJSON_GetObjectItemCaseSensitive(prose_charging_informationJSON, "receptionDataContainer");
    if (reception_data_container) {
        cJSON *reception_data_container_local = NULL;
        if (!cJSON_IsArray(reception_data_container)) {
            ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [reception_data_container]");
            goto end;
        }

        reception_data_containerList = OpenAPI_list_create();

        cJSON_ArrayForEach(reception_data_container_local, reception_data_container) {
            if (!cJSON_IsObject(reception_data_container_local)) {
                ogs_error("OpenAPI_prose_charging_information_parseFromJSON() failed [reception_data_container]");
                goto end;
            }
            OpenAPI_pc5_data_container_t *reception_data_containerItem = OpenAPI_pc5_data_container_parseFromJSON(reception_data_container_local);
            if (!reception_data_containerItem) {
                ogs_error("No reception_data_containerItem");
                goto end;
            }
            OpenAPI_list_add(reception_data_containerList, reception_data_containerItem);
        }
    }

    prose_charging_information_local_var = OpenAPI_prose_charging_information_create (
        announcing_plmn_id ? announcing_plmn_id_local_nonprim : NULL,
        announcing_ue_hplmn_identifier ? announcing_ue_hplmn_identifier_local_nonprim : NULL,
        announcing_ue_vplmn_identifier ? announcing_ue_vplmn_identifier_local_nonprim : NULL,
        monitoring_ue_hplmn_identifier ? monitoring_ue_hplmn_identifier_local_nonprim : NULL,
        monitoring_ue_vplmn_identifier ? monitoring_ue_vplmn_identifier_local_nonprim : NULL,
        discoverer_ue_hplmn_identifier ? discoverer_ue_hplmn_identifier_local_nonprim : NULL,
        discoverer_ue_vplmn_identifier ? discoverer_ue_vplmn_identifier_local_nonprim : NULL,
        discoveree_ue_hplmn_identifier ? discoveree_ue_hplmn_identifier_local_nonprim : NULL,
        discoveree_ue_vplmn_identifier ? discoveree_ue_vplmn_identifier_local_nonprim : NULL,
        monitored_plmn_identifier ? monitored_plmn_identifier_local_nonprim : NULL,
        prose_application_id && !cJSON_IsNull(prose_application_id) ? ogs_strdup(prose_application_id->valuestring) : NULL,
        application_id && !cJSON_IsNull(application_id) ? ogs_strdup(application_id->valuestring) : NULL,
        application_specific_data_list ? application_specific_data_listList : NULL,
        prose_functionality ? prose_functionality_local_nonprim : NULL,
        prose_event_type ? prose_event_type_local_nonprim : NULL,
        direct_discovery_model ? direct_discovery_model_local_nonprim : NULL,
        validity_period ? true : false,
        validity_period ? validity_period->valuedouble : 0,
        role_of_ue ? role_of_ue_local_nonprim : NULL,
        prose_request_timestamp && !cJSON_IsNull(prose_request_timestamp) ? ogs_strdup(prose_request_timestamp->valuestring) : NULL,
        p_c3_protocol_cause ? true : false,
        p_c3_protocol_cause ? p_c3_protocol_cause->valuedouble : 0,
        monitoring_ue_identifier && !cJSON_IsNull(monitoring_ue_identifier) ? ogs_strdup(monitoring_ue_identifier->valuestring) : NULL,
        requested_plmn_identifier ? requested_plmn_identifier_local_nonprim : NULL,
        time_window ? true : false,
        time_window ? time_window->valuedouble : 0,
        range_class ? range_class_local_nonprim : NULL,
        proximity_alert_indication ? true : false,
        proximity_alert_indication ? proximity_alert_indication->valueint : 0,
        proximity_alert_timestamp && !cJSON_IsNull(proximity_alert_timestamp) ? ogs_strdup(proximity_alert_timestamp->valuestring) : NULL,
        proximity_cancellation_timestamp && !cJSON_IsNull(proximity_cancellation_timestamp) ? ogs_strdup(proximity_cancellation_timestamp->valuestring) : NULL,
        relay_ip_address ? relay_ip_address_local_nonprim : NULL,
        prose_ueto_network_relay_ueid && !cJSON_IsNull(prose_ueto_network_relay_ueid) ? ogs_strdup(prose_ueto_network_relay_ueid->valuestring) : NULL,
        prose_destination_layer2_id && !cJSON_IsNull(prose_destination_layer2_id) ? ogs_strdup(prose_destination_layer2_id->valuestring) : NULL,
        p_fi_container_information ? p_fi_container_informationList : NULL,
        transmission_data_container ? transmission_data_containerList : NULL,
        reception_data_container ? reception_data_containerList : NULL
    );

    return prose_charging_information_local_var;
end:
    if (announcing_plmn_id_local_nonprim) {
        OpenAPI_plmn_id_free(announcing_plmn_id_local_nonprim);
        announcing_plmn_id_local_nonprim = NULL;
    }
    if (announcing_ue_hplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(announcing_ue_hplmn_identifier_local_nonprim);
        announcing_ue_hplmn_identifier_local_nonprim = NULL;
    }
    if (announcing_ue_vplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(announcing_ue_vplmn_identifier_local_nonprim);
        announcing_ue_vplmn_identifier_local_nonprim = NULL;
    }
    if (monitoring_ue_hplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(monitoring_ue_hplmn_identifier_local_nonprim);
        monitoring_ue_hplmn_identifier_local_nonprim = NULL;
    }
    if (monitoring_ue_vplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(monitoring_ue_vplmn_identifier_local_nonprim);
        monitoring_ue_vplmn_identifier_local_nonprim = NULL;
    }
    if (discoverer_ue_hplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(discoverer_ue_hplmn_identifier_local_nonprim);
        discoverer_ue_hplmn_identifier_local_nonprim = NULL;
    }
    if (discoverer_ue_vplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(discoverer_ue_vplmn_identifier_local_nonprim);
        discoverer_ue_vplmn_identifier_local_nonprim = NULL;
    }
    if (discoveree_ue_hplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(discoveree_ue_hplmn_identifier_local_nonprim);
        discoveree_ue_hplmn_identifier_local_nonprim = NULL;
    }
    if (discoveree_ue_vplmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(discoveree_ue_vplmn_identifier_local_nonprim);
        discoveree_ue_vplmn_identifier_local_nonprim = NULL;
    }
    if (monitored_plmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(monitored_plmn_identifier_local_nonprim);
        monitored_plmn_identifier_local_nonprim = NULL;
    }
    if (application_specific_data_listList) {
        OpenAPI_list_for_each(application_specific_data_listList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(application_specific_data_listList);
        application_specific_data_listList = NULL;
    }
    if (prose_functionality_local_nonprim) {
        OpenAPI_prose_functionality_free(prose_functionality_local_nonprim);
        prose_functionality_local_nonprim = NULL;
    }
    if (prose_event_type_local_nonprim) {
        OpenAPI_prose_event_type_free(prose_event_type_local_nonprim);
        prose_event_type_local_nonprim = NULL;
    }
    if (direct_discovery_model_local_nonprim) {
        OpenAPI_direct_discovery_model_free(direct_discovery_model_local_nonprim);
        direct_discovery_model_local_nonprim = NULL;
    }
    if (role_of_ue_local_nonprim) {
        OpenAPI_role_of_ue_free(role_of_ue_local_nonprim);
        role_of_ue_local_nonprim = NULL;
    }
    if (requested_plmn_identifier_local_nonprim) {
        OpenAPI_plmn_id_free(requested_plmn_identifier_local_nonprim);
        requested_plmn_identifier_local_nonprim = NULL;
    }
    if (range_class_local_nonprim) {
        OpenAPI_range_class_free(range_class_local_nonprim);
        range_class_local_nonprim = NULL;
    }
    if (relay_ip_address_local_nonprim) {
        OpenAPI_ip_addr_free(relay_ip_address_local_nonprim);
        relay_ip_address_local_nonprim = NULL;
    }
    if (p_fi_container_informationList) {
        OpenAPI_list_for_each(p_fi_container_informationList, node) {
            OpenAPI_pfi_container_information_free(node->data);
        }
        OpenAPI_list_free(p_fi_container_informationList);
        p_fi_container_informationList = NULL;
    }
    if (transmission_data_containerList) {
        OpenAPI_list_for_each(transmission_data_containerList, node) {
            OpenAPI_pc5_data_container_free(node->data);
        }
        OpenAPI_list_free(transmission_data_containerList);
        transmission_data_containerList = NULL;
    }
    if (reception_data_containerList) {
        OpenAPI_list_for_each(reception_data_containerList, node) {
            OpenAPI_pc5_data_container_free(node->data);
        }
        OpenAPI_list_free(reception_data_containerList);
        reception_data_containerList = NULL;
    }
    return NULL;
}

OpenAPI_prose_charging_information_t *OpenAPI_prose_charging_information_copy(OpenAPI_prose_charging_information_t *dst, OpenAPI_prose_charging_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_prose_charging_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_prose_charging_information_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_prose_charging_information_free(dst);
    dst = OpenAPI_prose_charging_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

