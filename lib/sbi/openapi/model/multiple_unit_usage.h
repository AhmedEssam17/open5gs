/*
 * multiple_unit_usage.h
 *
 * 
 */

#ifndef _OpenAPI_multiple_unit_usage_H_
#define _OpenAPI_multiple_unit_usage_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "pdu_address.h"
#include "requested_unit.h"
#include "used_unit_container.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_multiple_unit_usage_s OpenAPI_multiple_unit_usage_t;
typedef struct OpenAPI_multiple_unit_usage_s {
    int rating_group;
    struct OpenAPI_requested_unit_s *requested_unit;
    OpenAPI_list_t *used_unit_container;
    char *u_pfid;
    struct OpenAPI_pdu_address_s *multihomed_pdu_address;
} OpenAPI_multiple_unit_usage_t;

OpenAPI_multiple_unit_usage_t *OpenAPI_multiple_unit_usage_create(
    int rating_group,
    OpenAPI_requested_unit_t *requested_unit,
    OpenAPI_list_t *used_unit_container,
    char *u_pfid,
    OpenAPI_pdu_address_t *multihomed_pdu_address
);
void OpenAPI_multiple_unit_usage_free(OpenAPI_multiple_unit_usage_t *multiple_unit_usage);
OpenAPI_multiple_unit_usage_t *OpenAPI_multiple_unit_usage_parseFromJSON(cJSON *multiple_unit_usageJSON);
cJSON *OpenAPI_multiple_unit_usage_convertToJSON(OpenAPI_multiple_unit_usage_t *multiple_unit_usage);
OpenAPI_multiple_unit_usage_t *OpenAPI_multiple_unit_usage_copy(OpenAPI_multiple_unit_usage_t *dst, OpenAPI_multiple_unit_usage_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_multiple_unit_usage_H_ */

