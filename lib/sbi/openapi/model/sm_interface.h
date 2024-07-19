/*
 * sm_interface.h
 *
 * 
 */

#ifndef _OpenAPI_sm_interface_H_
#define _OpenAPI_sm_interface_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "interface_type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sm_interface_s OpenAPI_sm_interface_t;
typedef struct OpenAPI_sm_interface_s {
    char *interface_id;
    char *interface_text;
    char *interface_port;
    struct OpenAPI_interface_type_s *interface_type;
} OpenAPI_sm_interface_t;

OpenAPI_sm_interface_t *OpenAPI_sm_interface_create(
    char *interface_id,
    char *interface_text,
    char *interface_port,
    OpenAPI_interface_type_t *interface_type
);
void OpenAPI_sm_interface_free(OpenAPI_sm_interface_t *sm_interface);
OpenAPI_sm_interface_t *OpenAPI_sm_interface_parseFromJSON(cJSON *sm_interfaceJSON);
cJSON *OpenAPI_sm_interface_convertToJSON(OpenAPI_sm_interface_t *sm_interface);
OpenAPI_sm_interface_t *OpenAPI_sm_interface_copy(OpenAPI_sm_interface_t *dst, OpenAPI_sm_interface_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_interface_H_ */

