
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nspa_container_information.h"

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
)
{
    OpenAPI_nspa_container_information_t *nspa_container_information_local_var = ogs_malloc(sizeof(OpenAPI_nspa_container_information_t));
    ogs_assert(nspa_container_information_local_var);

    nspa_container_information_local_var->is_latency = is_latency;
    nspa_container_information_local_var->latency = latency;
    nspa_container_information_local_var->throughput = throughput;
    nspa_container_information_local_var->maximum_packet_loss_rate = maximum_packet_loss_rate;
    nspa_container_information_local_var->service_experience_statistics_data = service_experience_statistics_data;
    nspa_container_information_local_var->is_the_number_of_pdu_sessions = is_the_number_of_pdu_sessions;
    nspa_container_information_local_var->the_number_of_pdu_sessions = the_number_of_pdu_sessions;
    nspa_container_information_local_var->is_the_number_of_registered_subscribers = is_the_number_of_registered_subscribers;
    nspa_container_information_local_var->the_number_of_registered_subscribers = the_number_of_registered_subscribers;
    nspa_container_information_local_var->load_level = load_level;

    return nspa_container_information_local_var;
}

void OpenAPI_nspa_container_information_free(OpenAPI_nspa_container_information_t *nspa_container_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nspa_container_information) {
        return;
    }
    if (nspa_container_information->throughput) {
        OpenAPI_throughput_free(nspa_container_information->throughput);
        nspa_container_information->throughput = NULL;
    }
    if (nspa_container_information->maximum_packet_loss_rate) {
        ogs_free(nspa_container_information->maximum_packet_loss_rate);
        nspa_container_information->maximum_packet_loss_rate = NULL;
    }
    if (nspa_container_information->service_experience_statistics_data) {
        OpenAPI_service_experience_info_free(nspa_container_information->service_experience_statistics_data);
        nspa_container_information->service_experience_statistics_data = NULL;
    }
    if (nspa_container_information->load_level) {
        OpenAPI_nsi_load_level_info_free(nspa_container_information->load_level);
        nspa_container_information->load_level = NULL;
    }
    ogs_free(nspa_container_information);
}

cJSON *OpenAPI_nspa_container_information_convertToJSON(OpenAPI_nspa_container_information_t *nspa_container_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nspa_container_information == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [NSPAContainerInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (nspa_container_information->is_latency) {
    if (cJSON_AddNumberToObject(item, "latency", nspa_container_information->latency) == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [latency]");
        goto end;
    }
    }

    if (nspa_container_information->throughput) {
    cJSON *throughput_local_JSON = OpenAPI_throughput_convertToJSON(nspa_container_information->throughput);
    if (throughput_local_JSON == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [throughput]");
        goto end;
    }
    cJSON_AddItemToObject(item, "throughput", throughput_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [throughput]");
        goto end;
    }
    }

    if (nspa_container_information->maximum_packet_loss_rate) {
    if (cJSON_AddStringToObject(item, "maximumPacketLossRate", nspa_container_information->maximum_packet_loss_rate) == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [maximum_packet_loss_rate]");
        goto end;
    }
    }

    if (nspa_container_information->service_experience_statistics_data) {
    cJSON *service_experience_statistics_data_local_JSON = OpenAPI_service_experience_info_convertToJSON(nspa_container_information->service_experience_statistics_data);
    if (service_experience_statistics_data_local_JSON == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [service_experience_statistics_data]");
        goto end;
    }
    cJSON_AddItemToObject(item, "serviceExperienceStatisticsData", service_experience_statistics_data_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [service_experience_statistics_data]");
        goto end;
    }
    }

    if (nspa_container_information->is_the_number_of_pdu_sessions) {
    if (cJSON_AddNumberToObject(item, "theNumberOfPDUSessions", nspa_container_information->the_number_of_pdu_sessions) == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [the_number_of_pdu_sessions]");
        goto end;
    }
    }

    if (nspa_container_information->is_the_number_of_registered_subscribers) {
    if (cJSON_AddNumberToObject(item, "theNumberOfRegisteredSubscribers", nspa_container_information->the_number_of_registered_subscribers) == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [the_number_of_registered_subscribers]");
        goto end;
    }
    }

    if (nspa_container_information->load_level) {
    cJSON *load_level_local_JSON = OpenAPI_nsi_load_level_info_convertToJSON(nspa_container_information->load_level);
    if (load_level_local_JSON == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [load_level]");
        goto end;
    }
    cJSON_AddItemToObject(item, "loadLevel", load_level_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed [load_level]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_nspa_container_information_t *OpenAPI_nspa_container_information_parseFromJSON(cJSON *nspa_container_informationJSON)
{
    OpenAPI_nspa_container_information_t *nspa_container_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *latency = NULL;
    cJSON *throughput = NULL;
    OpenAPI_throughput_t *throughput_local_nonprim = NULL;
    cJSON *maximum_packet_loss_rate = NULL;
    cJSON *service_experience_statistics_data = NULL;
    OpenAPI_service_experience_info_t *service_experience_statistics_data_local_nonprim = NULL;
    cJSON *the_number_of_pdu_sessions = NULL;
    cJSON *the_number_of_registered_subscribers = NULL;
    cJSON *load_level = NULL;
    OpenAPI_nsi_load_level_info_t *load_level_local_nonprim = NULL;
    latency = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "latency");
    if (latency) {
    if (!cJSON_IsNumber(latency)) {
        ogs_error("OpenAPI_nspa_container_information_parseFromJSON() failed [latency]");
        goto end;
    }
    }

    throughput = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "throughput");
    if (throughput) {
    throughput_local_nonprim = OpenAPI_throughput_parseFromJSON(throughput);
    if (!throughput_local_nonprim) {
        ogs_error("OpenAPI_throughput_parseFromJSON failed [throughput]");
        goto end;
    }
    }

    maximum_packet_loss_rate = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "maximumPacketLossRate");
    if (maximum_packet_loss_rate) {
    if (!cJSON_IsString(maximum_packet_loss_rate) && !cJSON_IsNull(maximum_packet_loss_rate)) {
        ogs_error("OpenAPI_nspa_container_information_parseFromJSON() failed [maximum_packet_loss_rate]");
        goto end;
    }
    }

    service_experience_statistics_data = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "serviceExperienceStatisticsData");
    if (service_experience_statistics_data) {
    service_experience_statistics_data_local_nonprim = OpenAPI_service_experience_info_parseFromJSON(service_experience_statistics_data);
    if (!service_experience_statistics_data_local_nonprim) {
        ogs_error("OpenAPI_service_experience_info_parseFromJSON failed [service_experience_statistics_data]");
        goto end;
    }
    }

    the_number_of_pdu_sessions = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "theNumberOfPDUSessions");
    if (the_number_of_pdu_sessions) {
    if (!cJSON_IsNumber(the_number_of_pdu_sessions)) {
        ogs_error("OpenAPI_nspa_container_information_parseFromJSON() failed [the_number_of_pdu_sessions]");
        goto end;
    }
    }

    the_number_of_registered_subscribers = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "theNumberOfRegisteredSubscribers");
    if (the_number_of_registered_subscribers) {
    if (!cJSON_IsNumber(the_number_of_registered_subscribers)) {
        ogs_error("OpenAPI_nspa_container_information_parseFromJSON() failed [the_number_of_registered_subscribers]");
        goto end;
    }
    }

    load_level = cJSON_GetObjectItemCaseSensitive(nspa_container_informationJSON, "loadLevel");
    if (load_level) {
    load_level_local_nonprim = OpenAPI_nsi_load_level_info_parseFromJSON(load_level);
    if (!load_level_local_nonprim) {
        ogs_error("OpenAPI_nsi_load_level_info_parseFromJSON failed [load_level]");
        goto end;
    }
    }

    nspa_container_information_local_var = OpenAPI_nspa_container_information_create (
        latency ? true : false,
        latency ? latency->valuedouble : 0,
        throughput ? throughput_local_nonprim : NULL,
        maximum_packet_loss_rate && !cJSON_IsNull(maximum_packet_loss_rate) ? ogs_strdup(maximum_packet_loss_rate->valuestring) : NULL,
        service_experience_statistics_data ? service_experience_statistics_data_local_nonprim : NULL,
        the_number_of_pdu_sessions ? true : false,
        the_number_of_pdu_sessions ? the_number_of_pdu_sessions->valuedouble : 0,
        the_number_of_registered_subscribers ? true : false,
        the_number_of_registered_subscribers ? the_number_of_registered_subscribers->valuedouble : 0,
        load_level ? load_level_local_nonprim : NULL
    );

    return nspa_container_information_local_var;
end:
    if (throughput_local_nonprim) {
        OpenAPI_throughput_free(throughput_local_nonprim);
        throughput_local_nonprim = NULL;
    }
    if (service_experience_statistics_data_local_nonprim) {
        OpenAPI_service_experience_info_free(service_experience_statistics_data_local_nonprim);
        service_experience_statistics_data_local_nonprim = NULL;
    }
    if (load_level_local_nonprim) {
        OpenAPI_nsi_load_level_info_free(load_level_local_nonprim);
        load_level_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_nspa_container_information_t *OpenAPI_nspa_container_information_copy(OpenAPI_nspa_container_information_t *dst, OpenAPI_nspa_container_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nspa_container_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nspa_container_information_convertToJSON() failed");
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

    OpenAPI_nspa_container_information_free(dst);
    dst = OpenAPI_nspa_container_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

