
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multiple_unit_usage.h"

OpenAPI_multiple_unit_usage_t *OpenAPI_multiple_unit_usage_create(
    int rating_group,
    OpenAPI_requested_unit_t *requested_unit,
    OpenAPI_list_t *used_unit_container,
    char *u_pfid,
    OpenAPI_pdu_address_t *multihomed_pdu_address
)
{
    OpenAPI_multiple_unit_usage_t *multiple_unit_usage_local_var = ogs_malloc(sizeof(OpenAPI_multiple_unit_usage_t));
    ogs_assert(multiple_unit_usage_local_var);

    multiple_unit_usage_local_var->rating_group = rating_group;
    multiple_unit_usage_local_var->requested_unit = requested_unit;
    multiple_unit_usage_local_var->used_unit_container = used_unit_container;
    multiple_unit_usage_local_var->u_pfid = u_pfid;
    multiple_unit_usage_local_var->multihomed_pdu_address = multihomed_pdu_address;

    return multiple_unit_usage_local_var;
}

void OpenAPI_multiple_unit_usage_free(OpenAPI_multiple_unit_usage_t *multiple_unit_usage)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == multiple_unit_usage) {
        return;
    }
    if (multiple_unit_usage->requested_unit) {
        OpenAPI_requested_unit_free(multiple_unit_usage->requested_unit);
        multiple_unit_usage->requested_unit = NULL;
    }
    if (multiple_unit_usage->used_unit_container) {
        OpenAPI_list_for_each(multiple_unit_usage->used_unit_container, node) {
            OpenAPI_used_unit_container_free(node->data);
        }
        OpenAPI_list_free(multiple_unit_usage->used_unit_container);
        multiple_unit_usage->used_unit_container = NULL;
    }
    if (multiple_unit_usage->u_pfid) {
        ogs_free(multiple_unit_usage->u_pfid);
        multiple_unit_usage->u_pfid = NULL;
    }
    if (multiple_unit_usage->multihomed_pdu_address) {
        OpenAPI_pdu_address_free(multiple_unit_usage->multihomed_pdu_address);
        multiple_unit_usage->multihomed_pdu_address = NULL;
    }
    ogs_free(multiple_unit_usage);
}

cJSON *OpenAPI_multiple_unit_usage_convertToJSON(OpenAPI_multiple_unit_usage_t *multiple_unit_usage)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (multiple_unit_usage == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [MultipleUnitUsage]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (cJSON_AddNumberToObject(item, "ratingGroup", multiple_unit_usage->rating_group) == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [rating_group]");
        goto end;
    }

    if (multiple_unit_usage->requested_unit) {
    cJSON *requested_unit_local_JSON = OpenAPI_requested_unit_convertToJSON(multiple_unit_usage->requested_unit);
    if (requested_unit_local_JSON == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [requested_unit]");
        goto end;
    }
    cJSON_AddItemToObject(item, "requestedUnit", requested_unit_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [requested_unit]");
        goto end;
    }
    }

    if (multiple_unit_usage->used_unit_container) {
    cJSON *used_unit_containerList = cJSON_AddArrayToObject(item, "usedUnitContainer");
    if (used_unit_containerList == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [used_unit_container]");
        goto end;
    }
    OpenAPI_list_for_each(multiple_unit_usage->used_unit_container, node) {
        cJSON *itemLocal = OpenAPI_used_unit_container_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [used_unit_container]");
            goto end;
        }
        cJSON_AddItemToArray(used_unit_containerList, itemLocal);
    }
    }

    if (multiple_unit_usage->u_pfid) {
    if (cJSON_AddStringToObject(item, "uPFID", multiple_unit_usage->u_pfid) == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [u_pfid]");
        goto end;
    }
    }

    if (multiple_unit_usage->multihomed_pdu_address) {
    cJSON *multihomed_pdu_address_local_JSON = OpenAPI_pdu_address_convertToJSON(multiple_unit_usage->multihomed_pdu_address);
    if (multihomed_pdu_address_local_JSON == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [multihomed_pdu_address]");
        goto end;
    }
    cJSON_AddItemToObject(item, "multihomedPDUAddress", multihomed_pdu_address_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed [multihomed_pdu_address]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_multiple_unit_usage_t *OpenAPI_multiple_unit_usage_parseFromJSON(cJSON *multiple_unit_usageJSON)
{
    OpenAPI_multiple_unit_usage_t *multiple_unit_usage_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *rating_group = NULL;
    cJSON *requested_unit = NULL;
    OpenAPI_requested_unit_t *requested_unit_local_nonprim = NULL;
    cJSON *used_unit_container = NULL;
    OpenAPI_list_t *used_unit_containerList = NULL;
    cJSON *u_pfid = NULL;
    cJSON *multihomed_pdu_address = NULL;
    OpenAPI_pdu_address_t *multihomed_pdu_address_local_nonprim = NULL;
    rating_group = cJSON_GetObjectItemCaseSensitive(multiple_unit_usageJSON, "ratingGroup");
    if (!rating_group) {
        ogs_error("OpenAPI_multiple_unit_usage_parseFromJSON() failed [rating_group]");
        goto end;
    }
    if (!cJSON_IsNumber(rating_group)) {
        ogs_error("OpenAPI_multiple_unit_usage_parseFromJSON() failed [rating_group]");
        goto end;
    }

    requested_unit = cJSON_GetObjectItemCaseSensitive(multiple_unit_usageJSON, "requestedUnit");
    if (requested_unit) {
    requested_unit_local_nonprim = OpenAPI_requested_unit_parseFromJSON(requested_unit);
    if (!requested_unit_local_nonprim) {
        ogs_error("OpenAPI_requested_unit_parseFromJSON failed [requested_unit]");
        goto end;
    }
    }

    used_unit_container = cJSON_GetObjectItemCaseSensitive(multiple_unit_usageJSON, "usedUnitContainer");
    if (used_unit_container) {
        cJSON *used_unit_container_local = NULL;
        if (!cJSON_IsArray(used_unit_container)) {
            ogs_error("OpenAPI_multiple_unit_usage_parseFromJSON() failed [used_unit_container]");
            goto end;
        }

        used_unit_containerList = OpenAPI_list_create();

        cJSON_ArrayForEach(used_unit_container_local, used_unit_container) {
            if (!cJSON_IsObject(used_unit_container_local)) {
                ogs_error("OpenAPI_multiple_unit_usage_parseFromJSON() failed [used_unit_container]");
                goto end;
            }
            OpenAPI_used_unit_container_t *used_unit_containerItem = OpenAPI_used_unit_container_parseFromJSON(used_unit_container_local);
            if (!used_unit_containerItem) {
                ogs_error("No used_unit_containerItem");
                goto end;
            }
            OpenAPI_list_add(used_unit_containerList, used_unit_containerItem);
        }
    }

    u_pfid = cJSON_GetObjectItemCaseSensitive(multiple_unit_usageJSON, "uPFID");
    if (u_pfid) {
    if (!cJSON_IsString(u_pfid) && !cJSON_IsNull(u_pfid)) {
        ogs_error("OpenAPI_multiple_unit_usage_parseFromJSON() failed [u_pfid]");
        goto end;
    }
    }

    multihomed_pdu_address = cJSON_GetObjectItemCaseSensitive(multiple_unit_usageJSON, "multihomedPDUAddress");
    if (multihomed_pdu_address) {
    multihomed_pdu_address_local_nonprim = OpenAPI_pdu_address_parseFromJSON(multihomed_pdu_address);
    if (!multihomed_pdu_address_local_nonprim) {
        ogs_error("OpenAPI_pdu_address_parseFromJSON failed [multihomed_pdu_address]");
        goto end;
    }
    }

    multiple_unit_usage_local_var = OpenAPI_multiple_unit_usage_create (
        
        rating_group->valuedouble,
        requested_unit ? requested_unit_local_nonprim : NULL,
        used_unit_container ? used_unit_containerList : NULL,
        u_pfid && !cJSON_IsNull(u_pfid) ? ogs_strdup(u_pfid->valuestring) : NULL,
        multihomed_pdu_address ? multihomed_pdu_address_local_nonprim : NULL
    );

    return multiple_unit_usage_local_var;
end:
    if (requested_unit_local_nonprim) {
        OpenAPI_requested_unit_free(requested_unit_local_nonprim);
        requested_unit_local_nonprim = NULL;
    }
    if (used_unit_containerList) {
        OpenAPI_list_for_each(used_unit_containerList, node) {
            OpenAPI_used_unit_container_free(node->data);
        }
        OpenAPI_list_free(used_unit_containerList);
        used_unit_containerList = NULL;
    }
    if (multihomed_pdu_address_local_nonprim) {
        OpenAPI_pdu_address_free(multihomed_pdu_address_local_nonprim);
        multihomed_pdu_address_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_multiple_unit_usage_t *OpenAPI_multiple_unit_usage_copy(OpenAPI_multiple_unit_usage_t *dst, OpenAPI_multiple_unit_usage_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_multiple_unit_usage_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_multiple_unit_usage_convertToJSON() failed");
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

    OpenAPI_multiple_unit_usage_free(dst);
    dst = OpenAPI_multiple_unit_usage_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

