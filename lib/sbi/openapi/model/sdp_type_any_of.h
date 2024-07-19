/*
 * sdp_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_sdp_type_any_of_H_
#define _OpenAPI_sdp_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_sdp_type_any_of_NULL = 0, OpenAPI_sdp_type_any_of_OFFER, OpenAPI_sdp_type_any_of_ANSWER } OpenAPI_sdp_type_any_of_e;

char* OpenAPI_sdp_type_any_of_ToString(OpenAPI_sdp_type_any_of_e sdp_type_any_of);

OpenAPI_sdp_type_any_of_e OpenAPI_sdp_type_any_of_FromString(char* sdp_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sdp_type_any_of_H_ */

