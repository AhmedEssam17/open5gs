
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nef_charging_information.h"

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
)
{
    OpenAPI_nef_charging_information_t *nef_charging_information_local_var = ogs_malloc(sizeof(OpenAPI_nef_charging_information_t));
    ogs_assert(nef_charging_information_local_var);

    nef_charging_information_local_var->external_individual_identifier = external_individual_identifier;
    nef_charging_information_local_var->external_group_identifier = external_group_identifier;
    nef_charging_information_local_var->group_identifier = group_identifier;
    nef_charging_information_local_var->a_pi_direction = a_pi_direction;
    nef_charging_information_local_var->a_pi_target_network_function = a_pi_target_network_function;
    nef_charging_information_local_var->is_a_pi_result_code = is_a_pi_result_code;
    nef_charging_information_local_var->a_pi_result_code = a_pi_result_code;
    nef_charging_information_local_var->a_pi_name = a_pi_name;
    nef_charging_information_local_var->a_pi_reference = a_pi_reference;
    nef_charging_information_local_var->a_pi_content = a_pi_content;

    return nef_charging_information_local_var;
}

void OpenAPI_nef_charging_information_free(OpenAPI_nef_charging_information_t *nef_charging_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nef_charging_information) {
        return;
    }
    if (nef_charging_information->external_individual_identifier) {
        ogs_free(nef_charging_information->external_individual_identifier);
        nef_charging_information->external_individual_identifier = NULL;
    }
    if (nef_charging_information->external_group_identifier) {
        ogs_free(nef_charging_information->external_group_identifier);
        nef_charging_information->external_group_identifier = NULL;
    }
    if (nef_charging_information->group_identifier) {
        ogs_free(nef_charging_information->group_identifier);
        nef_charging_information->group_identifier = NULL;
    }
    if (nef_charging_information->a_pi_direction) {
        OpenAPI_api_direction_free(nef_charging_information->a_pi_direction);
        nef_charging_information->a_pi_direction = NULL;
    }
    if (nef_charging_information->a_pi_target_network_function) {
        OpenAPI_nf_identification_free(nef_charging_information->a_pi_target_network_function);
        nef_charging_information->a_pi_target_network_function = NULL;
    }
    if (nef_charging_information->a_pi_name) {
        ogs_free(nef_charging_information->a_pi_name);
        nef_charging_information->a_pi_name = NULL;
    }
    if (nef_charging_information->a_pi_reference) {
        ogs_free(nef_charging_information->a_pi_reference);
        nef_charging_information->a_pi_reference = NULL;
    }
    if (nef_charging_information->a_pi_content) {
        ogs_free(nef_charging_information->a_pi_content);
        nef_charging_information->a_pi_content = NULL;
    }
    ogs_free(nef_charging_information);
}

cJSON *OpenAPI_nef_charging_information_convertToJSON(OpenAPI_nef_charging_information_t *nef_charging_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nef_charging_information == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [NEFChargingInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (nef_charging_information->external_individual_identifier) {
    if (cJSON_AddStringToObject(item, "externalIndividualIdentifier", nef_charging_information->external_individual_identifier) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [external_individual_identifier]");
        goto end;
    }
    }

    if (nef_charging_information->external_group_identifier) {
    if (cJSON_AddStringToObject(item, "externalGroupIdentifier", nef_charging_information->external_group_identifier) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [external_group_identifier]");
        goto end;
    }
    }

    if (nef_charging_information->group_identifier) {
    if (cJSON_AddStringToObject(item, "groupIdentifier", nef_charging_information->group_identifier) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [group_identifier]");
        goto end;
    }
    }

    if (nef_charging_information->a_pi_direction) {
    cJSON *a_pi_direction_local_JSON = OpenAPI_api_direction_convertToJSON(nef_charging_information->a_pi_direction);
    if (a_pi_direction_local_JSON == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_direction]");
        goto end;
    }
    cJSON_AddItemToObject(item, "aPIDirection", a_pi_direction_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_direction]");
        goto end;
    }
    }

    if (nef_charging_information->a_pi_target_network_function) {
    cJSON *a_pi_target_network_function_local_JSON = OpenAPI_nf_identification_convertToJSON(nef_charging_information->a_pi_target_network_function);
    if (a_pi_target_network_function_local_JSON == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_target_network_function]");
        goto end;
    }
    cJSON_AddItemToObject(item, "aPITargetNetworkFunction", a_pi_target_network_function_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_target_network_function]");
        goto end;
    }
    }

    if (nef_charging_information->is_a_pi_result_code) {
    if (cJSON_AddNumberToObject(item, "aPIResultCode", nef_charging_information->a_pi_result_code) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_result_code]");
        goto end;
    }
    }

    if (!nef_charging_information->a_pi_name) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_name]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "aPIName", nef_charging_information->a_pi_name) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_name]");
        goto end;
    }

    if (nef_charging_information->a_pi_reference) {
    if (cJSON_AddStringToObject(item, "aPIReference", nef_charging_information->a_pi_reference) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_reference]");
        goto end;
    }
    }

    if (nef_charging_information->a_pi_content) {
    if (cJSON_AddStringToObject(item, "aPIContent", nef_charging_information->a_pi_content) == NULL) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed [a_pi_content]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_nef_charging_information_t *OpenAPI_nef_charging_information_parseFromJSON(cJSON *nef_charging_informationJSON)
{
    OpenAPI_nef_charging_information_t *nef_charging_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *external_individual_identifier = NULL;
    cJSON *external_group_identifier = NULL;
    cJSON *group_identifier = NULL;
    cJSON *a_pi_direction = NULL;
    OpenAPI_api_direction_t *a_pi_direction_local_nonprim = NULL;
    cJSON *a_pi_target_network_function = NULL;
    OpenAPI_nf_identification_t *a_pi_target_network_function_local_nonprim = NULL;
    cJSON *a_pi_result_code = NULL;
    cJSON *a_pi_name = NULL;
    cJSON *a_pi_reference = NULL;
    cJSON *a_pi_content = NULL;
    external_individual_identifier = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "externalIndividualIdentifier");
    if (external_individual_identifier) {
    if (!cJSON_IsString(external_individual_identifier) && !cJSON_IsNull(external_individual_identifier)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [external_individual_identifier]");
        goto end;
    }
    }

    external_group_identifier = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "externalGroupIdentifier");
    if (external_group_identifier) {
    if (!cJSON_IsString(external_group_identifier) && !cJSON_IsNull(external_group_identifier)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [external_group_identifier]");
        goto end;
    }
    }

    group_identifier = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "groupIdentifier");
    if (group_identifier) {
    if (!cJSON_IsString(group_identifier) && !cJSON_IsNull(group_identifier)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [group_identifier]");
        goto end;
    }
    }

    a_pi_direction = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "aPIDirection");
    if (a_pi_direction) {
    a_pi_direction_local_nonprim = OpenAPI_api_direction_parseFromJSON(a_pi_direction);
    if (!a_pi_direction_local_nonprim) {
        ogs_error("OpenAPI_api_direction_parseFromJSON failed [a_pi_direction]");
        goto end;
    }
    }

    a_pi_target_network_function = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "aPITargetNetworkFunction");
    if (a_pi_target_network_function) {
    a_pi_target_network_function_local_nonprim = OpenAPI_nf_identification_parseFromJSON(a_pi_target_network_function);
    if (!a_pi_target_network_function_local_nonprim) {
        ogs_error("OpenAPI_nf_identification_parseFromJSON failed [a_pi_target_network_function]");
        goto end;
    }
    }

    a_pi_result_code = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "aPIResultCode");
    if (a_pi_result_code) {
    if (!cJSON_IsNumber(a_pi_result_code)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [a_pi_result_code]");
        goto end;
    }
    }

    a_pi_name = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "aPIName");
    if (!a_pi_name) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [a_pi_name]");
        goto end;
    }
    if (!cJSON_IsString(a_pi_name)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [a_pi_name]");
        goto end;
    }

    a_pi_reference = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "aPIReference");
    if (a_pi_reference) {
    if (!cJSON_IsString(a_pi_reference) && !cJSON_IsNull(a_pi_reference)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [a_pi_reference]");
        goto end;
    }
    }

    a_pi_content = cJSON_GetObjectItemCaseSensitive(nef_charging_informationJSON, "aPIContent");
    if (a_pi_content) {
    if (!cJSON_IsString(a_pi_content) && !cJSON_IsNull(a_pi_content)) {
        ogs_error("OpenAPI_nef_charging_information_parseFromJSON() failed [a_pi_content]");
        goto end;
    }
    }

    nef_charging_information_local_var = OpenAPI_nef_charging_information_create (
        external_individual_identifier && !cJSON_IsNull(external_individual_identifier) ? ogs_strdup(external_individual_identifier->valuestring) : NULL,
        external_group_identifier && !cJSON_IsNull(external_group_identifier) ? ogs_strdup(external_group_identifier->valuestring) : NULL,
        group_identifier && !cJSON_IsNull(group_identifier) ? ogs_strdup(group_identifier->valuestring) : NULL,
        a_pi_direction ? a_pi_direction_local_nonprim : NULL,
        a_pi_target_network_function ? a_pi_target_network_function_local_nonprim : NULL,
        a_pi_result_code ? true : false,
        a_pi_result_code ? a_pi_result_code->valuedouble : 0,
        ogs_strdup(a_pi_name->valuestring),
        a_pi_reference && !cJSON_IsNull(a_pi_reference) ? ogs_strdup(a_pi_reference->valuestring) : NULL,
        a_pi_content && !cJSON_IsNull(a_pi_content) ? ogs_strdup(a_pi_content->valuestring) : NULL
    );

    return nef_charging_information_local_var;
end:
    if (a_pi_direction_local_nonprim) {
        OpenAPI_api_direction_free(a_pi_direction_local_nonprim);
        a_pi_direction_local_nonprim = NULL;
    }
    if (a_pi_target_network_function_local_nonprim) {
        OpenAPI_nf_identification_free(a_pi_target_network_function_local_nonprim);
        a_pi_target_network_function_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_nef_charging_information_t *OpenAPI_nef_charging_information_copy(OpenAPI_nef_charging_information_t *dst, OpenAPI_nef_charging_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nef_charging_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nef_charging_information_convertToJSON() failed");
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

    OpenAPI_nef_charging_information_free(dst);
    dst = OpenAPI_nef_charging_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

