/*
 * network_slicing_info.h
 *
 * 
 */

#ifndef _OpenAPI_network_slicing_info_H_
#define _OpenAPI_network_slicing_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "snssai.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_network_slicing_info_s OpenAPI_network_slicing_info_t;
typedef struct OpenAPI_network_slicing_info_s {
    struct OpenAPI_snssai_s *s_nssai;
} OpenAPI_network_slicing_info_t;

OpenAPI_network_slicing_info_t *OpenAPI_network_slicing_info_create(
    OpenAPI_snssai_t *s_nssai
);
void OpenAPI_network_slicing_info_free(OpenAPI_network_slicing_info_t *network_slicing_info);
OpenAPI_network_slicing_info_t *OpenAPI_network_slicing_info_parseFromJSON(cJSON *network_slicing_infoJSON);
cJSON *OpenAPI_network_slicing_info_convertToJSON(OpenAPI_network_slicing_info_t *network_slicing_info);
OpenAPI_network_slicing_info_t *OpenAPI_network_slicing_info_copy(OpenAPI_network_slicing_info_t *dst, OpenAPI_network_slicing_info_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_network_slicing_info_H_ */

