
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pdu_container_information.h"

OpenAPI_pdu_container_information_t *OpenAPI_pdu_container_information_create(
    char *timeof_first_usage,
    char *timeof_last_usage,
    bool is_qo_s_information_null,
    OpenAPI_qos_data_t *qo_s_information,
    OpenAPI_qos_characteristics_t *qo_s_characteristics,
    bool is_af_charging_identifier,
    int af_charging_identifier,
    char *af_charging_id_string,
    OpenAPI_user_location_t *user_location_information,
    char *uetime_zone,
    OpenAPI_rat_type_e r_at_type,
    OpenAPI_list_t *serving_node_id,
    OpenAPI_list_t* presence_reporting_area_information,
    OpenAPI_model_3_gppps_data_off_status_t *_3gpp_ps_data_off_status,
    char *sponsor_identity,
    char *applicationservice_provider_identity,
    char *charging_rule_base_name,
    OpenAPI_steering_functionality_e m_apdu_steering_functionality,
    OpenAPI_steering_mode_t *m_apdu_steering_mode,
    OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way,
    OpenAPI_list_t *qos_monitoring_report
)
{
    OpenAPI_pdu_container_information_t *pdu_container_information_local_var = ogs_malloc(sizeof(OpenAPI_pdu_container_information_t));
    ogs_assert(pdu_container_information_local_var);

    pdu_container_information_local_var->timeof_first_usage = timeof_first_usage;
    pdu_container_information_local_var->timeof_last_usage = timeof_last_usage;
    pdu_container_information_local_var->is_qo_s_information_null = is_qo_s_information_null;
    pdu_container_information_local_var->qo_s_information = qo_s_information;
    pdu_container_information_local_var->qo_s_characteristics = qo_s_characteristics;
    pdu_container_information_local_var->is_af_charging_identifier = is_af_charging_identifier;
    pdu_container_information_local_var->af_charging_identifier = af_charging_identifier;
    pdu_container_information_local_var->af_charging_id_string = af_charging_id_string;
    pdu_container_information_local_var->user_location_information = user_location_information;
    pdu_container_information_local_var->uetime_zone = uetime_zone;
    pdu_container_information_local_var->r_at_type = r_at_type;
    pdu_container_information_local_var->serving_node_id = serving_node_id;
    pdu_container_information_local_var->presence_reporting_area_information = presence_reporting_area_information;
    pdu_container_information_local_var->_3gpp_ps_data_off_status = _3gpp_ps_data_off_status;
    pdu_container_information_local_var->sponsor_identity = sponsor_identity;
    pdu_container_information_local_var->applicationservice_provider_identity = applicationservice_provider_identity;
    pdu_container_information_local_var->charging_rule_base_name = charging_rule_base_name;
    pdu_container_information_local_var->m_apdu_steering_functionality = m_apdu_steering_functionality;
    pdu_container_information_local_var->m_apdu_steering_mode = m_apdu_steering_mode;
    pdu_container_information_local_var->traffic_forwarding_way = traffic_forwarding_way;
    pdu_container_information_local_var->qos_monitoring_report = qos_monitoring_report;

    return pdu_container_information_local_var;
}

void OpenAPI_pdu_container_information_free(OpenAPI_pdu_container_information_t *pdu_container_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == pdu_container_information) {
        return;
    }
    if (pdu_container_information->timeof_first_usage) {
        ogs_free(pdu_container_information->timeof_first_usage);
        pdu_container_information->timeof_first_usage = NULL;
    }
    if (pdu_container_information->timeof_last_usage) {
        ogs_free(pdu_container_information->timeof_last_usage);
        pdu_container_information->timeof_last_usage = NULL;
    }
    if (pdu_container_information->qo_s_information) {
        OpenAPI_qos_data_free(pdu_container_information->qo_s_information);
        pdu_container_information->qo_s_information = NULL;
    }
    if (pdu_container_information->qo_s_characteristics) {
        OpenAPI_qos_characteristics_free(pdu_container_information->qo_s_characteristics);
        pdu_container_information->qo_s_characteristics = NULL;
    }
    if (pdu_container_information->af_charging_id_string) {
        ogs_free(pdu_container_information->af_charging_id_string);
        pdu_container_information->af_charging_id_string = NULL;
    }
    if (pdu_container_information->user_location_information) {
        OpenAPI_user_location_free(pdu_container_information->user_location_information);
        pdu_container_information->user_location_information = NULL;
    }
    if (pdu_container_information->uetime_zone) {
        ogs_free(pdu_container_information->uetime_zone);
        pdu_container_information->uetime_zone = NULL;
    }
    if (pdu_container_information->serving_node_id) {
        OpenAPI_list_for_each(pdu_container_information->serving_node_id, node) {
            OpenAPI_serving_network_function_id_free(node->data);
        }
        OpenAPI_list_free(pdu_container_information->serving_node_id);
        pdu_container_information->serving_node_id = NULL;
    }
    if (pdu_container_information->presence_reporting_area_information) {
        OpenAPI_list_for_each(pdu_container_information->presence_reporting_area_information, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_presence_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(pdu_container_information->presence_reporting_area_information);
        pdu_container_information->presence_reporting_area_information = NULL;
    }
    if (pdu_container_information->_3gpp_ps_data_off_status) {
        OpenAPI_model_3_gppps_data_off_status_free(pdu_container_information->_3gpp_ps_data_off_status);
        pdu_container_information->_3gpp_ps_data_off_status = NULL;
    }
    if (pdu_container_information->sponsor_identity) {
        ogs_free(pdu_container_information->sponsor_identity);
        pdu_container_information->sponsor_identity = NULL;
    }
    if (pdu_container_information->applicationservice_provider_identity) {
        ogs_free(pdu_container_information->applicationservice_provider_identity);
        pdu_container_information->applicationservice_provider_identity = NULL;
    }
    if (pdu_container_information->charging_rule_base_name) {
        ogs_free(pdu_container_information->charging_rule_base_name);
        pdu_container_information->charging_rule_base_name = NULL;
    }
    if (pdu_container_information->m_apdu_steering_mode) {
        OpenAPI_steering_mode_free(pdu_container_information->m_apdu_steering_mode);
        pdu_container_information->m_apdu_steering_mode = NULL;
    }
    if (pdu_container_information->traffic_forwarding_way) {
        OpenAPI_traffic_forwarding_way_free(pdu_container_information->traffic_forwarding_way);
        pdu_container_information->traffic_forwarding_way = NULL;
    }
    if (pdu_container_information->qos_monitoring_report) {
        OpenAPI_list_for_each(pdu_container_information->qos_monitoring_report, node) {
            OpenAPI_qos_monitoring_report_free(node->data);
        }
        OpenAPI_list_free(pdu_container_information->qos_monitoring_report);
        pdu_container_information->qos_monitoring_report = NULL;
    }
    ogs_free(pdu_container_information);
}

cJSON *OpenAPI_pdu_container_information_convertToJSON(OpenAPI_pdu_container_information_t *pdu_container_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (pdu_container_information == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [PDUContainerInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (pdu_container_information->timeof_first_usage) {
    if (cJSON_AddStringToObject(item, "timeofFirstUsage", pdu_container_information->timeof_first_usage) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [timeof_first_usage]");
        goto end;
    }
    }

    if (pdu_container_information->timeof_last_usage) {
    if (cJSON_AddStringToObject(item, "timeofLastUsage", pdu_container_information->timeof_last_usage) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [timeof_last_usage]");
        goto end;
    }
    }

    if (pdu_container_information->qo_s_information) {
    cJSON *qo_s_information_local_JSON = OpenAPI_qos_data_convertToJSON(pdu_container_information->qo_s_information);
    if (qo_s_information_local_JSON == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qo_s_information]");
        goto end;
    }
    cJSON_AddItemToObject(item, "qoSInformation", qo_s_information_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qo_s_information]");
        goto end;
    }
    } else if (pdu_container_information->is_qo_s_information_null) {
        if (cJSON_AddNullToObject(item, "qoSInformation") == NULL) {
            ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qo_s_information]");
            goto end;
        }
    }

    if (pdu_container_information->qo_s_characteristics) {
    cJSON *qo_s_characteristics_local_JSON = OpenAPI_qos_characteristics_convertToJSON(pdu_container_information->qo_s_characteristics);
    if (qo_s_characteristics_local_JSON == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qo_s_characteristics]");
        goto end;
    }
    cJSON_AddItemToObject(item, "qoSCharacteristics", qo_s_characteristics_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qo_s_characteristics]");
        goto end;
    }
    }

    if (pdu_container_information->is_af_charging_identifier) {
    if (cJSON_AddNumberToObject(item, "afChargingIdentifier", pdu_container_information->af_charging_identifier) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [af_charging_identifier]");
        goto end;
    }
    }

    if (pdu_container_information->af_charging_id_string) {
    if (cJSON_AddStringToObject(item, "afChargingIdString", pdu_container_information->af_charging_id_string) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [af_charging_id_string]");
        goto end;
    }
    }

    if (pdu_container_information->user_location_information) {
    cJSON *user_location_information_local_JSON = OpenAPI_user_location_convertToJSON(pdu_container_information->user_location_information);
    if (user_location_information_local_JSON == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [user_location_information]");
        goto end;
    }
    cJSON_AddItemToObject(item, "userLocationInformation", user_location_information_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [user_location_information]");
        goto end;
    }
    }

    if (pdu_container_information->uetime_zone) {
    if (cJSON_AddStringToObject(item, "uetimeZone", pdu_container_information->uetime_zone) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [uetime_zone]");
        goto end;
    }
    }

    if (pdu_container_information->r_at_type != OpenAPI_rat_type_NULL) {
    if (cJSON_AddStringToObject(item, "rATType", OpenAPI_rat_type_ToString(pdu_container_information->r_at_type)) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [r_at_type]");
        goto end;
    }
    }

    if (pdu_container_information->serving_node_id) {
    cJSON *serving_node_idList = cJSON_AddArrayToObject(item, "servingNodeID");
    if (serving_node_idList == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [serving_node_id]");
        goto end;
    }
    OpenAPI_list_for_each(pdu_container_information->serving_node_id, node) {
        cJSON *itemLocal = OpenAPI_serving_network_function_id_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [serving_node_id]");
            goto end;
        }
        cJSON_AddItemToArray(serving_node_idList, itemLocal);
    }
    }

    if (pdu_container_information->presence_reporting_area_information) {
    cJSON *presence_reporting_area_information = cJSON_AddObjectToObject(item, "presenceReportingAreaInformation");
    if (presence_reporting_area_information == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [presence_reporting_area_information]");
        goto end;
    }
    cJSON *localMapObject = presence_reporting_area_information;
    if (pdu_container_information->presence_reporting_area_information) {
        OpenAPI_list_for_each(pdu_container_information->presence_reporting_area_information, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            if (localKeyValue == NULL) {
                ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [presence_reporting_area_information]");
                goto end;
            }
            if (localKeyValue->key == NULL) {
                ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [presence_reporting_area_information]");
                goto end;
            }
            cJSON *itemLocal = localKeyValue->value ?
                OpenAPI_presence_info_convertToJSON(localKeyValue->value) :
                cJSON_CreateNull();
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [inner]");
                goto end;
            }
            cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
        }
    }
    }

    if (pdu_container_information->_3gpp_ps_data_off_status) {
    cJSON *_3gpp_ps_data_off_status_local_JSON = OpenAPI_model_3_gppps_data_off_status_convertToJSON(pdu_container_information->_3gpp_ps_data_off_status);
    if (_3gpp_ps_data_off_status_local_JSON == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [_3gpp_ps_data_off_status]");
        goto end;
    }
    cJSON_AddItemToObject(item, "3gppPSDataOffStatus", _3gpp_ps_data_off_status_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [_3gpp_ps_data_off_status]");
        goto end;
    }
    }

    if (pdu_container_information->sponsor_identity) {
    if (cJSON_AddStringToObject(item, "sponsorIdentity", pdu_container_information->sponsor_identity) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [sponsor_identity]");
        goto end;
    }
    }

    if (pdu_container_information->applicationservice_provider_identity) {
    if (cJSON_AddStringToObject(item, "applicationserviceProviderIdentity", pdu_container_information->applicationservice_provider_identity) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [applicationservice_provider_identity]");
        goto end;
    }
    }

    if (pdu_container_information->charging_rule_base_name) {
    if (cJSON_AddStringToObject(item, "chargingRuleBaseName", pdu_container_information->charging_rule_base_name) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [charging_rule_base_name]");
        goto end;
    }
    }

    if (pdu_container_information->m_apdu_steering_functionality != OpenAPI_steering_functionality_NULL) {
    if (cJSON_AddStringToObject(item, "mAPDUSteeringFunctionality", OpenAPI_steering_functionality_ToString(pdu_container_information->m_apdu_steering_functionality)) == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [m_apdu_steering_functionality]");
        goto end;
    }
    }

    if (pdu_container_information->m_apdu_steering_mode) {
    cJSON *m_apdu_steering_mode_local_JSON = OpenAPI_steering_mode_convertToJSON(pdu_container_information->m_apdu_steering_mode);
    if (m_apdu_steering_mode_local_JSON == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [m_apdu_steering_mode]");
        goto end;
    }
    cJSON_AddItemToObject(item, "mAPDUSteeringMode", m_apdu_steering_mode_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [m_apdu_steering_mode]");
        goto end;
    }
    }

    if (pdu_container_information->traffic_forwarding_way) {
    cJSON *traffic_forwarding_way_local_JSON = OpenAPI_traffic_forwarding_way_convertToJSON(pdu_container_information->traffic_forwarding_way);
    if (traffic_forwarding_way_local_JSON == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [traffic_forwarding_way]");
        goto end;
    }
    cJSON_AddItemToObject(item, "trafficForwardingWay", traffic_forwarding_way_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [traffic_forwarding_way]");
        goto end;
    }
    }

    if (pdu_container_information->qos_monitoring_report) {
    cJSON *qos_monitoring_reportList = cJSON_AddArrayToObject(item, "qosMonitoringReport");
    if (qos_monitoring_reportList == NULL) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qos_monitoring_report]");
        goto end;
    }
    OpenAPI_list_for_each(pdu_container_information->qos_monitoring_report, node) {
        cJSON *itemLocal = OpenAPI_qos_monitoring_report_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed [qos_monitoring_report]");
            goto end;
        }
        cJSON_AddItemToArray(qos_monitoring_reportList, itemLocal);
    }
    }

end:
    return item;
}

OpenAPI_pdu_container_information_t *OpenAPI_pdu_container_information_parseFromJSON(cJSON *pdu_container_informationJSON)
{
    OpenAPI_pdu_container_information_t *pdu_container_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *timeof_first_usage = NULL;
    cJSON *timeof_last_usage = NULL;
    cJSON *qo_s_information = NULL;
    OpenAPI_qos_data_t *qo_s_information_local_nonprim = NULL;
    cJSON *qo_s_characteristics = NULL;
    OpenAPI_qos_characteristics_t *qo_s_characteristics_local_nonprim = NULL;
    cJSON *af_charging_identifier = NULL;
    cJSON *af_charging_id_string = NULL;
    cJSON *user_location_information = NULL;
    OpenAPI_user_location_t *user_location_information_local_nonprim = NULL;
    cJSON *uetime_zone = NULL;
    cJSON *r_at_type = NULL;
    OpenAPI_rat_type_e r_at_typeVariable = 0;
    cJSON *serving_node_id = NULL;
    OpenAPI_list_t *serving_node_idList = NULL;
    cJSON *presence_reporting_area_information = NULL;
    OpenAPI_list_t *presence_reporting_area_informationList = NULL;
    cJSON *_3gpp_ps_data_off_status = NULL;
    OpenAPI_model_3_gppps_data_off_status_t *_3gpp_ps_data_off_status_local_nonprim = NULL;
    cJSON *sponsor_identity = NULL;
    cJSON *applicationservice_provider_identity = NULL;
    cJSON *charging_rule_base_name = NULL;
    cJSON *m_apdu_steering_functionality = NULL;
    OpenAPI_steering_functionality_e m_apdu_steering_functionalityVariable = 0;
    cJSON *m_apdu_steering_mode = NULL;
    OpenAPI_steering_mode_t *m_apdu_steering_mode_local_nonprim = NULL;
    cJSON *traffic_forwarding_way = NULL;
    OpenAPI_traffic_forwarding_way_t *traffic_forwarding_way_local_nonprim = NULL;
    cJSON *qos_monitoring_report = NULL;
    OpenAPI_list_t *qos_monitoring_reportList = NULL;
    timeof_first_usage = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "timeofFirstUsage");
    if (timeof_first_usage) {
    if (!cJSON_IsString(timeof_first_usage) && !cJSON_IsNull(timeof_first_usage)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [timeof_first_usage]");
        goto end;
    }
    }

    timeof_last_usage = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "timeofLastUsage");
    if (timeof_last_usage) {
    if (!cJSON_IsString(timeof_last_usage) && !cJSON_IsNull(timeof_last_usage)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [timeof_last_usage]");
        goto end;
    }
    }

    qo_s_information = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "qoSInformation");
    if (qo_s_information) {
    if (!cJSON_IsNull(qo_s_information)) {
    qo_s_information_local_nonprim = OpenAPI_qos_data_parseFromJSON(qo_s_information);
    if (!qo_s_information_local_nonprim) {
        ogs_error("OpenAPI_qos_data_parseFromJSON failed [qo_s_information]");
        goto end;
    }
    }
    }

    qo_s_characteristics = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "qoSCharacteristics");
    if (qo_s_characteristics) {
    qo_s_characteristics_local_nonprim = OpenAPI_qos_characteristics_parseFromJSON(qo_s_characteristics);
    if (!qo_s_characteristics_local_nonprim) {
        ogs_error("OpenAPI_qos_characteristics_parseFromJSON failed [qo_s_characteristics]");
        goto end;
    }
    }

    af_charging_identifier = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "afChargingIdentifier");
    if (af_charging_identifier) {
    if (!cJSON_IsNumber(af_charging_identifier)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [af_charging_identifier]");
        goto end;
    }
    }

    af_charging_id_string = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "afChargingIdString");
    if (af_charging_id_string) {
    if (!cJSON_IsString(af_charging_id_string) && !cJSON_IsNull(af_charging_id_string)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [af_charging_id_string]");
        goto end;
    }
    }

    user_location_information = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "userLocationInformation");
    if (user_location_information) {
    user_location_information_local_nonprim = OpenAPI_user_location_parseFromJSON(user_location_information);
    if (!user_location_information_local_nonprim) {
        ogs_error("OpenAPI_user_location_parseFromJSON failed [user_location_information]");
        goto end;
    }
    }

    uetime_zone = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "uetimeZone");
    if (uetime_zone) {
    if (!cJSON_IsString(uetime_zone) && !cJSON_IsNull(uetime_zone)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [uetime_zone]");
        goto end;
    }
    }

    r_at_type = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "rATType");
    if (r_at_type) {
    if (!cJSON_IsString(r_at_type)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [r_at_type]");
        goto end;
    }
    r_at_typeVariable = OpenAPI_rat_type_FromString(r_at_type->valuestring);
    }

    serving_node_id = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "servingNodeID");
    if (serving_node_id) {
        cJSON *serving_node_id_local = NULL;
        if (!cJSON_IsArray(serving_node_id)) {
            ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [serving_node_id]");
            goto end;
        }

        serving_node_idList = OpenAPI_list_create();

        cJSON_ArrayForEach(serving_node_id_local, serving_node_id) {
            if (!cJSON_IsObject(serving_node_id_local)) {
                ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [serving_node_id]");
                goto end;
            }
            OpenAPI_serving_network_function_id_t *serving_node_idItem = OpenAPI_serving_network_function_id_parseFromJSON(serving_node_id_local);
            if (!serving_node_idItem) {
                ogs_error("No serving_node_idItem");
                goto end;
            }
            OpenAPI_list_add(serving_node_idList, serving_node_idItem);
        }
    }

    presence_reporting_area_information = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "presenceReportingAreaInformation");
    if (presence_reporting_area_information) {
        cJSON *presence_reporting_area_information_local_map = NULL;
        if (!cJSON_IsObject(presence_reporting_area_information) && !cJSON_IsNull(presence_reporting_area_information)) {
            ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [presence_reporting_area_information]");
            goto end;
        }
        if (cJSON_IsObject(presence_reporting_area_information)) {
            presence_reporting_area_informationList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(presence_reporting_area_information_local_map, presence_reporting_area_information) {
                cJSON *localMapObject = presence_reporting_area_information_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_presence_info_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(presence_reporting_area_informationList, localMapKeyPair);
            }
        }
    }

    _3gpp_ps_data_off_status = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "3gppPSDataOffStatus");
    if (_3gpp_ps_data_off_status) {
    _3gpp_ps_data_off_status_local_nonprim = OpenAPI_model_3_gppps_data_off_status_parseFromJSON(_3gpp_ps_data_off_status);
    if (!_3gpp_ps_data_off_status_local_nonprim) {
        ogs_error("OpenAPI_model_3_gppps_data_off_status_parseFromJSON failed [_3gpp_ps_data_off_status]");
        goto end;
    }
    }

    sponsor_identity = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "sponsorIdentity");
    if (sponsor_identity) {
    if (!cJSON_IsString(sponsor_identity) && !cJSON_IsNull(sponsor_identity)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [sponsor_identity]");
        goto end;
    }
    }

    applicationservice_provider_identity = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "applicationserviceProviderIdentity");
    if (applicationservice_provider_identity) {
    if (!cJSON_IsString(applicationservice_provider_identity) && !cJSON_IsNull(applicationservice_provider_identity)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [applicationservice_provider_identity]");
        goto end;
    }
    }

    charging_rule_base_name = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "chargingRuleBaseName");
    if (charging_rule_base_name) {
    if (!cJSON_IsString(charging_rule_base_name) && !cJSON_IsNull(charging_rule_base_name)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [charging_rule_base_name]");
        goto end;
    }
    }

    m_apdu_steering_functionality = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "mAPDUSteeringFunctionality");
    if (m_apdu_steering_functionality) {
    if (!cJSON_IsString(m_apdu_steering_functionality)) {
        ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [m_apdu_steering_functionality]");
        goto end;
    }
    m_apdu_steering_functionalityVariable = OpenAPI_steering_functionality_FromString(m_apdu_steering_functionality->valuestring);
    }

    m_apdu_steering_mode = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "mAPDUSteeringMode");
    if (m_apdu_steering_mode) {
    m_apdu_steering_mode_local_nonprim = OpenAPI_steering_mode_parseFromJSON(m_apdu_steering_mode);
    if (!m_apdu_steering_mode_local_nonprim) {
        ogs_error("OpenAPI_steering_mode_parseFromJSON failed [m_apdu_steering_mode]");
        goto end;
    }
    }

    traffic_forwarding_way = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "trafficForwardingWay");
    if (traffic_forwarding_way) {
    traffic_forwarding_way_local_nonprim = OpenAPI_traffic_forwarding_way_parseFromJSON(traffic_forwarding_way);
    if (!traffic_forwarding_way_local_nonprim) {
        ogs_error("OpenAPI_traffic_forwarding_way_parseFromJSON failed [traffic_forwarding_way]");
        goto end;
    }
    }

    qos_monitoring_report = cJSON_GetObjectItemCaseSensitive(pdu_container_informationJSON, "qosMonitoringReport");
    if (qos_monitoring_report) {
        cJSON *qos_monitoring_report_local = NULL;
        if (!cJSON_IsArray(qos_monitoring_report)) {
            ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [qos_monitoring_report]");
            goto end;
        }

        qos_monitoring_reportList = OpenAPI_list_create();

        cJSON_ArrayForEach(qos_monitoring_report_local, qos_monitoring_report) {
            if (!cJSON_IsObject(qos_monitoring_report_local)) {
                ogs_error("OpenAPI_pdu_container_information_parseFromJSON() failed [qos_monitoring_report]");
                goto end;
            }
            OpenAPI_qos_monitoring_report_t *qos_monitoring_reportItem = OpenAPI_qos_monitoring_report_parseFromJSON(qos_monitoring_report_local);
            if (!qos_monitoring_reportItem) {
                ogs_error("No qos_monitoring_reportItem");
                goto end;
            }
            OpenAPI_list_add(qos_monitoring_reportList, qos_monitoring_reportItem);
        }
    }

    pdu_container_information_local_var = OpenAPI_pdu_container_information_create (
        timeof_first_usage && !cJSON_IsNull(timeof_first_usage) ? ogs_strdup(timeof_first_usage->valuestring) : NULL,
        timeof_last_usage && !cJSON_IsNull(timeof_last_usage) ? ogs_strdup(timeof_last_usage->valuestring) : NULL,
        qo_s_information && cJSON_IsNull(qo_s_information) ? true : false,
        qo_s_information ? qo_s_information_local_nonprim : NULL,
        qo_s_characteristics ? qo_s_characteristics_local_nonprim : NULL,
        af_charging_identifier ? true : false,
        af_charging_identifier ? af_charging_identifier->valuedouble : 0,
        af_charging_id_string && !cJSON_IsNull(af_charging_id_string) ? ogs_strdup(af_charging_id_string->valuestring) : NULL,
        user_location_information ? user_location_information_local_nonprim : NULL,
        uetime_zone && !cJSON_IsNull(uetime_zone) ? ogs_strdup(uetime_zone->valuestring) : NULL,
        r_at_type ? r_at_typeVariable : 0,
        serving_node_id ? serving_node_idList : NULL,
        presence_reporting_area_information ? presence_reporting_area_informationList : NULL,
        _3gpp_ps_data_off_status ? _3gpp_ps_data_off_status_local_nonprim : NULL,
        sponsor_identity && !cJSON_IsNull(sponsor_identity) ? ogs_strdup(sponsor_identity->valuestring) : NULL,
        applicationservice_provider_identity && !cJSON_IsNull(applicationservice_provider_identity) ? ogs_strdup(applicationservice_provider_identity->valuestring) : NULL,
        charging_rule_base_name && !cJSON_IsNull(charging_rule_base_name) ? ogs_strdup(charging_rule_base_name->valuestring) : NULL,
        m_apdu_steering_functionality ? m_apdu_steering_functionalityVariable : 0,
        m_apdu_steering_mode ? m_apdu_steering_mode_local_nonprim : NULL,
        traffic_forwarding_way ? traffic_forwarding_way_local_nonprim : NULL,
        qos_monitoring_report ? qos_monitoring_reportList : NULL
    );

    return pdu_container_information_local_var;
end:
    if (qo_s_information_local_nonprim) {
        OpenAPI_qos_data_free(qo_s_information_local_nonprim);
        qo_s_information_local_nonprim = NULL;
    }
    if (qo_s_characteristics_local_nonprim) {
        OpenAPI_qos_characteristics_free(qo_s_characteristics_local_nonprim);
        qo_s_characteristics_local_nonprim = NULL;
    }
    if (user_location_information_local_nonprim) {
        OpenAPI_user_location_free(user_location_information_local_nonprim);
        user_location_information_local_nonprim = NULL;
    }
    if (serving_node_idList) {
        OpenAPI_list_for_each(serving_node_idList, node) {
            OpenAPI_serving_network_function_id_free(node->data);
        }
        OpenAPI_list_free(serving_node_idList);
        serving_node_idList = NULL;
    }
    if (presence_reporting_area_informationList) {
        OpenAPI_list_for_each(presence_reporting_area_informationList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_presence_info_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(presence_reporting_area_informationList);
        presence_reporting_area_informationList = NULL;
    }
    if (_3gpp_ps_data_off_status_local_nonprim) {
        OpenAPI_model_3_gppps_data_off_status_free(_3gpp_ps_data_off_status_local_nonprim);
        _3gpp_ps_data_off_status_local_nonprim = NULL;
    }
    if (m_apdu_steering_mode_local_nonprim) {
        OpenAPI_steering_mode_free(m_apdu_steering_mode_local_nonprim);
        m_apdu_steering_mode_local_nonprim = NULL;
    }
    if (traffic_forwarding_way_local_nonprim) {
        OpenAPI_traffic_forwarding_way_free(traffic_forwarding_way_local_nonprim);
        traffic_forwarding_way_local_nonprim = NULL;
    }
    if (qos_monitoring_reportList) {
        OpenAPI_list_for_each(qos_monitoring_reportList, node) {
            OpenAPI_qos_monitoring_report_free(node->data);
        }
        OpenAPI_list_free(qos_monitoring_reportList);
        qos_monitoring_reportList = NULL;
    }
    return NULL;
}

OpenAPI_pdu_container_information_t *OpenAPI_pdu_container_information_copy(OpenAPI_pdu_container_information_t *dst, OpenAPI_pdu_container_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_pdu_container_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_pdu_container_information_convertToJSON() failed");
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

    OpenAPI_pdu_container_information_free(dst);
    dst = OpenAPI_pdu_container_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

