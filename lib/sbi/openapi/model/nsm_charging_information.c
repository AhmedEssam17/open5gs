
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nsm_charging_information.h"

OpenAPI_nsm_charging_information_t *OpenAPI_nsm_charging_information_create(
    OpenAPI_management_operation_t *management_operation,
    char *id_network_slice_instance,
    OpenAPI_list_t *list_ofservice_profile_charging_information,
    OpenAPI_management_operation_status_t *management_operation_status
)
{
    OpenAPI_nsm_charging_information_t *nsm_charging_information_local_var = ogs_malloc(sizeof(OpenAPI_nsm_charging_information_t));
    ogs_assert(nsm_charging_information_local_var);

    nsm_charging_information_local_var->management_operation = management_operation;
    nsm_charging_information_local_var->id_network_slice_instance = id_network_slice_instance;
    nsm_charging_information_local_var->list_ofservice_profile_charging_information = list_ofservice_profile_charging_information;
    nsm_charging_information_local_var->management_operation_status = management_operation_status;

    return nsm_charging_information_local_var;
}

void OpenAPI_nsm_charging_information_free(OpenAPI_nsm_charging_information_t *nsm_charging_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nsm_charging_information) {
        return;
    }
    if (nsm_charging_information->management_operation) {
        OpenAPI_management_operation_free(nsm_charging_information->management_operation);
        nsm_charging_information->management_operation = NULL;
    }
    if (nsm_charging_information->id_network_slice_instance) {
        ogs_free(nsm_charging_information->id_network_slice_instance);
        nsm_charging_information->id_network_slice_instance = NULL;
    }
    if (nsm_charging_information->list_ofservice_profile_charging_information) {
        OpenAPI_list_for_each(nsm_charging_information->list_ofservice_profile_charging_information, node) {
            OpenAPI_service_profile_charging_information_free(node->data);
        }
        OpenAPI_list_free(nsm_charging_information->list_ofservice_profile_charging_information);
        nsm_charging_information->list_ofservice_profile_charging_information = NULL;
    }
    if (nsm_charging_information->management_operation_status) {
        OpenAPI_management_operation_status_free(nsm_charging_information->management_operation_status);
        nsm_charging_information->management_operation_status = NULL;
    }
    ogs_free(nsm_charging_information);
}

cJSON *OpenAPI_nsm_charging_information_convertToJSON(OpenAPI_nsm_charging_information_t *nsm_charging_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nsm_charging_information == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [NSMChargingInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!nsm_charging_information->management_operation) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [management_operation]");
        return NULL;
    }
    cJSON *management_operation_local_JSON = OpenAPI_management_operation_convertToJSON(nsm_charging_information->management_operation);
    if (management_operation_local_JSON == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [management_operation]");
        goto end;
    }
    cJSON_AddItemToObject(item, "managementOperation", management_operation_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [management_operation]");
        goto end;
    }

    if (nsm_charging_information->id_network_slice_instance) {
    if (cJSON_AddStringToObject(item, "idNetworkSliceInstance", nsm_charging_information->id_network_slice_instance) == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [id_network_slice_instance]");
        goto end;
    }
    }

    if (nsm_charging_information->list_ofservice_profile_charging_information) {
    cJSON *list_ofservice_profile_charging_informationList = cJSON_AddArrayToObject(item, "listOfserviceProfileChargingInformation");
    if (list_ofservice_profile_charging_informationList == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [list_ofservice_profile_charging_information]");
        goto end;
    }
    OpenAPI_list_for_each(nsm_charging_information->list_ofservice_profile_charging_information, node) {
        cJSON *itemLocal = OpenAPI_service_profile_charging_information_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [list_ofservice_profile_charging_information]");
            goto end;
        }
        cJSON_AddItemToArray(list_ofservice_profile_charging_informationList, itemLocal);
    }
    }

    if (nsm_charging_information->management_operation_status) {
    cJSON *management_operation_status_local_JSON = OpenAPI_management_operation_status_convertToJSON(nsm_charging_information->management_operation_status);
    if (management_operation_status_local_JSON == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [management_operation_status]");
        goto end;
    }
    cJSON_AddItemToObject(item, "managementOperationStatus", management_operation_status_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed [management_operation_status]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_nsm_charging_information_t *OpenAPI_nsm_charging_information_parseFromJSON(cJSON *nsm_charging_informationJSON)
{
    OpenAPI_nsm_charging_information_t *nsm_charging_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *management_operation = NULL;
    OpenAPI_management_operation_t *management_operation_local_nonprim = NULL;
    cJSON *id_network_slice_instance = NULL;
    cJSON *list_ofservice_profile_charging_information = NULL;
    OpenAPI_list_t *list_ofservice_profile_charging_informationList = NULL;
    cJSON *management_operation_status = NULL;
    OpenAPI_management_operation_status_t *management_operation_status_local_nonprim = NULL;
    management_operation = cJSON_GetObjectItemCaseSensitive(nsm_charging_informationJSON, "managementOperation");
    if (!management_operation) {
        ogs_error("OpenAPI_nsm_charging_information_parseFromJSON() failed [management_operation]");
        goto end;
    }
    management_operation_local_nonprim = OpenAPI_management_operation_parseFromJSON(management_operation);
    if (!management_operation_local_nonprim) {
        ogs_error("OpenAPI_management_operation_parseFromJSON failed [management_operation]");
        goto end;
    }

    id_network_slice_instance = cJSON_GetObjectItemCaseSensitive(nsm_charging_informationJSON, "idNetworkSliceInstance");
    if (id_network_slice_instance) {
    if (!cJSON_IsString(id_network_slice_instance) && !cJSON_IsNull(id_network_slice_instance)) {
        ogs_error("OpenAPI_nsm_charging_information_parseFromJSON() failed [id_network_slice_instance]");
        goto end;
    }
    }

    list_ofservice_profile_charging_information = cJSON_GetObjectItemCaseSensitive(nsm_charging_informationJSON, "listOfserviceProfileChargingInformation");
    if (list_ofservice_profile_charging_information) {
        cJSON *list_ofservice_profile_charging_information_local = NULL;
        if (!cJSON_IsArray(list_ofservice_profile_charging_information)) {
            ogs_error("OpenAPI_nsm_charging_information_parseFromJSON() failed [list_ofservice_profile_charging_information]");
            goto end;
        }

        list_ofservice_profile_charging_informationList = OpenAPI_list_create();

        cJSON_ArrayForEach(list_ofservice_profile_charging_information_local, list_ofservice_profile_charging_information) {
            if (!cJSON_IsObject(list_ofservice_profile_charging_information_local)) {
                ogs_error("OpenAPI_nsm_charging_information_parseFromJSON() failed [list_ofservice_profile_charging_information]");
                goto end;
            }
            OpenAPI_service_profile_charging_information_t *list_ofservice_profile_charging_informationItem = OpenAPI_service_profile_charging_information_parseFromJSON(list_ofservice_profile_charging_information_local);
            if (!list_ofservice_profile_charging_informationItem) {
                ogs_error("No list_ofservice_profile_charging_informationItem");
                goto end;
            }
            OpenAPI_list_add(list_ofservice_profile_charging_informationList, list_ofservice_profile_charging_informationItem);
        }
    }

    management_operation_status = cJSON_GetObjectItemCaseSensitive(nsm_charging_informationJSON, "managementOperationStatus");
    if (management_operation_status) {
    management_operation_status_local_nonprim = OpenAPI_management_operation_status_parseFromJSON(management_operation_status);
    if (!management_operation_status_local_nonprim) {
        ogs_error("OpenAPI_management_operation_status_parseFromJSON failed [management_operation_status]");
        goto end;
    }
    }

    nsm_charging_information_local_var = OpenAPI_nsm_charging_information_create (
        management_operation_local_nonprim,
        id_network_slice_instance && !cJSON_IsNull(id_network_slice_instance) ? ogs_strdup(id_network_slice_instance->valuestring) : NULL,
        list_ofservice_profile_charging_information ? list_ofservice_profile_charging_informationList : NULL,
        management_operation_status ? management_operation_status_local_nonprim : NULL
    );

    return nsm_charging_information_local_var;
end:
    if (management_operation_local_nonprim) {
        OpenAPI_management_operation_free(management_operation_local_nonprim);
        management_operation_local_nonprim = NULL;
    }
    if (list_ofservice_profile_charging_informationList) {
        OpenAPI_list_for_each(list_ofservice_profile_charging_informationList, node) {
            OpenAPI_service_profile_charging_information_free(node->data);
        }
        OpenAPI_list_free(list_ofservice_profile_charging_informationList);
        list_ofservice_profile_charging_informationList = NULL;
    }
    if (management_operation_status_local_nonprim) {
        OpenAPI_management_operation_status_free(management_operation_status_local_nonprim);
        management_operation_status_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_nsm_charging_information_t *OpenAPI_nsm_charging_information_copy(OpenAPI_nsm_charging_information_t *dst, OpenAPI_nsm_charging_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nsm_charging_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nsm_charging_information_convertToJSON() failed");
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

    OpenAPI_nsm_charging_information_free(dst);
    dst = OpenAPI_nsm_charging_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

