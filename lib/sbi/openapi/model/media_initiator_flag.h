/*
 * media_initiator_flag.h
 *
 * 
 */

#ifndef _OpenAPI_media_initiator_flag_H_
#define _OpenAPI_media_initiator_flag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "media_initiator_flag_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_media_initiator_flag_s OpenAPI_media_initiator_flag_t;
typedef struct OpenAPI_media_initiator_flag_s {
} OpenAPI_media_initiator_flag_t;

OpenAPI_media_initiator_flag_t *OpenAPI_media_initiator_flag_create(
);
void OpenAPI_media_initiator_flag_free(OpenAPI_media_initiator_flag_t *media_initiator_flag);
OpenAPI_media_initiator_flag_t *OpenAPI_media_initiator_flag_parseFromJSON(cJSON *media_initiator_flagJSON);
cJSON *OpenAPI_media_initiator_flag_convertToJSON(OpenAPI_media_initiator_flag_t *media_initiator_flag);
OpenAPI_media_initiator_flag_t *OpenAPI_media_initiator_flag_copy(OpenAPI_media_initiator_flag_t *dst, OpenAPI_media_initiator_flag_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_media_initiator_flag_H_ */

