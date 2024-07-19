
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nni_information.h"

OpenAPI_nni_information_t *OpenAPI_nni_information_create(
    OpenAPI_nni_session_direction_t *session_direction,
    OpenAPI_nni_type_t *n_ni_type,
    OpenAPI_nni_relationship_mode_t *relationship_mode,
    OpenAPI_ims_address_t *neighbour_node_address
)
{
    OpenAPI_nni_information_t *nni_information_local_var = ogs_malloc(sizeof(OpenAPI_nni_information_t));
    ogs_assert(nni_information_local_var);

    nni_information_local_var->session_direction = session_direction;
    nni_information_local_var->n_ni_type = n_ni_type;
    nni_information_local_var->relationship_mode = relationship_mode;
    nni_information_local_var->neighbour_node_address = neighbour_node_address;

    return nni_information_local_var;
}

void OpenAPI_nni_information_free(OpenAPI_nni_information_t *nni_information)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == nni_information) {
        return;
    }
    if (nni_information->session_direction) {
        OpenAPI_nni_session_direction_free(nni_information->session_direction);
        nni_information->session_direction = NULL;
    }
    if (nni_information->n_ni_type) {
        OpenAPI_nni_type_free(nni_information->n_ni_type);
        nni_information->n_ni_type = NULL;
    }
    if (nni_information->relationship_mode) {
        OpenAPI_nni_relationship_mode_free(nni_information->relationship_mode);
        nni_information->relationship_mode = NULL;
    }
    if (nni_information->neighbour_node_address) {
        OpenAPI_ims_address_free(nni_information->neighbour_node_address);
        nni_information->neighbour_node_address = NULL;
    }
    ogs_free(nni_information);
}

cJSON *OpenAPI_nni_information_convertToJSON(OpenAPI_nni_information_t *nni_information)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (nni_information == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [NNIInformation]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (nni_information->session_direction) {
    cJSON *session_direction_local_JSON = OpenAPI_nni_session_direction_convertToJSON(nni_information->session_direction);
    if (session_direction_local_JSON == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [session_direction]");
        goto end;
    }
    cJSON_AddItemToObject(item, "sessionDirection", session_direction_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [session_direction]");
        goto end;
    }
    }

    if (nni_information->n_ni_type) {
    cJSON *n_ni_type_local_JSON = OpenAPI_nni_type_convertToJSON(nni_information->n_ni_type);
    if (n_ni_type_local_JSON == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [n_ni_type]");
        goto end;
    }
    cJSON_AddItemToObject(item, "nNIType", n_ni_type_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [n_ni_type]");
        goto end;
    }
    }

    if (nni_information->relationship_mode) {
    cJSON *relationship_mode_local_JSON = OpenAPI_nni_relationship_mode_convertToJSON(nni_information->relationship_mode);
    if (relationship_mode_local_JSON == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [relationship_mode]");
        goto end;
    }
    cJSON_AddItemToObject(item, "relationshipMode", relationship_mode_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [relationship_mode]");
        goto end;
    }
    }

    if (nni_information->neighbour_node_address) {
    cJSON *neighbour_node_address_local_JSON = OpenAPI_ims_address_convertToJSON(nni_information->neighbour_node_address);
    if (neighbour_node_address_local_JSON == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [neighbour_node_address]");
        goto end;
    }
    cJSON_AddItemToObject(item, "neighbourNodeAddress", neighbour_node_address_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed [neighbour_node_address]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_nni_information_t *OpenAPI_nni_information_parseFromJSON(cJSON *nni_informationJSON)
{
    OpenAPI_nni_information_t *nni_information_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *session_direction = NULL;
    OpenAPI_nni_session_direction_t *session_direction_local_nonprim = NULL;
    cJSON *n_ni_type = NULL;
    OpenAPI_nni_type_t *n_ni_type_local_nonprim = NULL;
    cJSON *relationship_mode = NULL;
    OpenAPI_nni_relationship_mode_t *relationship_mode_local_nonprim = NULL;
    cJSON *neighbour_node_address = NULL;
    OpenAPI_ims_address_t *neighbour_node_address_local_nonprim = NULL;
    session_direction = cJSON_GetObjectItemCaseSensitive(nni_informationJSON, "sessionDirection");
    if (session_direction) {
    session_direction_local_nonprim = OpenAPI_nni_session_direction_parseFromJSON(session_direction);
    if (!session_direction_local_nonprim) {
        ogs_error("OpenAPI_nni_session_direction_parseFromJSON failed [session_direction]");
        goto end;
    }
    }

    n_ni_type = cJSON_GetObjectItemCaseSensitive(nni_informationJSON, "nNIType");
    if (n_ni_type) {
    n_ni_type_local_nonprim = OpenAPI_nni_type_parseFromJSON(n_ni_type);
    if (!n_ni_type_local_nonprim) {
        ogs_error("OpenAPI_nni_type_parseFromJSON failed [n_ni_type]");
        goto end;
    }
    }

    relationship_mode = cJSON_GetObjectItemCaseSensitive(nni_informationJSON, "relationshipMode");
    if (relationship_mode) {
    relationship_mode_local_nonprim = OpenAPI_nni_relationship_mode_parseFromJSON(relationship_mode);
    if (!relationship_mode_local_nonprim) {
        ogs_error("OpenAPI_nni_relationship_mode_parseFromJSON failed [relationship_mode]");
        goto end;
    }
    }

    neighbour_node_address = cJSON_GetObjectItemCaseSensitive(nni_informationJSON, "neighbourNodeAddress");
    if (neighbour_node_address) {
    neighbour_node_address_local_nonprim = OpenAPI_ims_address_parseFromJSON(neighbour_node_address);
    if (!neighbour_node_address_local_nonprim) {
        ogs_error("OpenAPI_ims_address_parseFromJSON failed [neighbour_node_address]");
        goto end;
    }
    }

    nni_information_local_var = OpenAPI_nni_information_create (
        session_direction ? session_direction_local_nonprim : NULL,
        n_ni_type ? n_ni_type_local_nonprim : NULL,
        relationship_mode ? relationship_mode_local_nonprim : NULL,
        neighbour_node_address ? neighbour_node_address_local_nonprim : NULL
    );

    return nni_information_local_var;
end:
    if (session_direction_local_nonprim) {
        OpenAPI_nni_session_direction_free(session_direction_local_nonprim);
        session_direction_local_nonprim = NULL;
    }
    if (n_ni_type_local_nonprim) {
        OpenAPI_nni_type_free(n_ni_type_local_nonprim);
        n_ni_type_local_nonprim = NULL;
    }
    if (relationship_mode_local_nonprim) {
        OpenAPI_nni_relationship_mode_free(relationship_mode_local_nonprim);
        relationship_mode_local_nonprim = NULL;
    }
    if (neighbour_node_address_local_nonprim) {
        OpenAPI_ims_address_free(neighbour_node_address_local_nonprim);
        neighbour_node_address_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_nni_information_t *OpenAPI_nni_information_copy(OpenAPI_nni_information_t *dst, OpenAPI_nni_information_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_nni_information_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_nni_information_convertToJSON() failed");
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

    OpenAPI_nni_information_free(dst);
    dst = OpenAPI_nni_information_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

