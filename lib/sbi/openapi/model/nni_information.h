/*
 * nni_information.h
 *
 * 
 */

#ifndef _OpenAPI_nni_information_H_
#define _OpenAPI_nni_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "ims_address.h"
#include "nni_relationship_mode.h"
#include "nni_session_direction.h"
#include "nni_type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_nni_information_s OpenAPI_nni_information_t;
typedef struct OpenAPI_nni_information_s {
    struct OpenAPI_nni_session_direction_s *session_direction;
    struct OpenAPI_nni_type_s *n_ni_type;
    struct OpenAPI_nni_relationship_mode_s *relationship_mode;
    struct OpenAPI_ims_address_s *neighbour_node_address;
} OpenAPI_nni_information_t;

OpenAPI_nni_information_t *OpenAPI_nni_information_create(
    OpenAPI_nni_session_direction_t *session_direction,
    OpenAPI_nni_type_t *n_ni_type,
    OpenAPI_nni_relationship_mode_t *relationship_mode,
    OpenAPI_ims_address_t *neighbour_node_address
);
void OpenAPI_nni_information_free(OpenAPI_nni_information_t *nni_information);
OpenAPI_nni_information_t *OpenAPI_nni_information_parseFromJSON(cJSON *nni_informationJSON);
cJSON *OpenAPI_nni_information_convertToJSON(OpenAPI_nni_information_t *nni_information);
OpenAPI_nni_information_t *OpenAPI_nni_information_copy(OpenAPI_nni_information_t *dst, OpenAPI_nni_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_nni_information_H_ */

