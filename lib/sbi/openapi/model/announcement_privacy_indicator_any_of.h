/*
 * announcement_privacy_indicator_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_announcement_privacy_indicator_any_of_H_
#define _OpenAPI_announcement_privacy_indicator_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_announcement_privacy_indicator_any_of_NULL = 0, OpenAPI_announcement_privacy_indicator_any_of_NOT_PRIVATE, OpenAPI_announcement_privacy_indicator_any_of__PRIVATE } OpenAPI_announcement_privacy_indicator_any_of_e;

char* OpenAPI_announcement_privacy_indicator_any_of_ToString(OpenAPI_announcement_privacy_indicator_any_of_e announcement_privacy_indicator_any_of);

OpenAPI_announcement_privacy_indicator_any_of_e OpenAPI_announcement_privacy_indicator_any_of_FromString(char* announcement_privacy_indicator_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_announcement_privacy_indicator_any_of_H_ */

