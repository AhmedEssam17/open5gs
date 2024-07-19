/*
 * user_information.h
 *
 * 
 */

#ifndef _OpenAPI_user_information_H_
#define _OpenAPI_user_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "roamer_in_out.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_user_information_s OpenAPI_user_information_t;
typedef struct OpenAPI_user_information_s {
    char *served_gpsi;
    char *served_pei;
    bool is_unauthenticated_flag;
    int unauthenticated_flag;
    struct OpenAPI_roamer_in_out_s *roamer_in_out;
} OpenAPI_user_information_t;

OpenAPI_user_information_t *OpenAPI_user_information_create(
    char *served_gpsi,
    char *served_pei,
    bool is_unauthenticated_flag,
    int unauthenticated_flag,
    OpenAPI_roamer_in_out_t *roamer_in_out
);
void OpenAPI_user_information_free(OpenAPI_user_information_t *user_information);
OpenAPI_user_information_t *OpenAPI_user_information_parseFromJSON(cJSON *user_informationJSON);
cJSON *OpenAPI_user_information_convertToJSON(OpenAPI_user_information_t *user_information);
OpenAPI_user_information_t *OpenAPI_user_information_copy(OpenAPI_user_information_t *dst, OpenAPI_user_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_user_information_H_ */

