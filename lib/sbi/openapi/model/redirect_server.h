/*
 * redirect_server.h
 *
 * 
 */

#ifndef _OpenAPI_redirect_server_H_
#define _OpenAPI_redirect_server_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "redirect_address_type.h"
#include "redirect_address_type_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_redirect_server_s OpenAPI_redirect_server_t;
typedef struct OpenAPI_redirect_server_s {
    struct OpenAPI_redirect_address_type_s *redirect_address_type;
    char *redirect_server_address;
} OpenAPI_redirect_server_t;

OpenAPI_redirect_server_t *OpenAPI_redirect_server_create(
    OpenAPI_redirect_address_type_t *redirect_address_type,
    char *redirect_server_address
);
void OpenAPI_redirect_server_free(OpenAPI_redirect_server_t *redirect_server);
OpenAPI_redirect_server_t *OpenAPI_redirect_server_parseFromJSON(cJSON *redirect_serverJSON);
cJSON *OpenAPI_redirect_server_convertToJSON(OpenAPI_redirect_server_t *redirect_server);
OpenAPI_redirect_server_t *OpenAPI_redirect_server_copy(OpenAPI_redirect_server_t *dst, OpenAPI_redirect_server_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_redirect_server_H_ */

