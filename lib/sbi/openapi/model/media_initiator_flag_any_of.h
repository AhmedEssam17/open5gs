/*
 * media_initiator_flag_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_media_initiator_flag_any_of_H_
#define _OpenAPI_media_initiator_flag_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_media_initiator_flag_any_of_NULL = 0, OpenAPI_media_initiator_flag_any_of_CALLED_PARTY, OpenAPI_media_initiator_flag_any_of_CALLING_PARTY, OpenAPI_media_initiator_flag_any_of_UNKNOWN } OpenAPI_media_initiator_flag_any_of_e;

char* OpenAPI_media_initiator_flag_any_of_ToString(OpenAPI_media_initiator_flag_any_of_e media_initiator_flag_any_of);

OpenAPI_media_initiator_flag_any_of_e OpenAPI_media_initiator_flag_any_of_FromString(char* media_initiator_flag_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_media_initiator_flag_any_of_H_ */

