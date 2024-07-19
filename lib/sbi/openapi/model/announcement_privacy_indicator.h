/*
 * announcement_privacy_indicator.h
 *
 * 
 */

#ifndef _OpenAPI_announcement_privacy_indicator_H_
#define _OpenAPI_announcement_privacy_indicator_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "announcement_privacy_indicator_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_announcement_privacy_indicator_s OpenAPI_announcement_privacy_indicator_t;
typedef struct OpenAPI_announcement_privacy_indicator_s {
} OpenAPI_announcement_privacy_indicator_t;

OpenAPI_announcement_privacy_indicator_t *OpenAPI_announcement_privacy_indicator_create(
);
void OpenAPI_announcement_privacy_indicator_free(OpenAPI_announcement_privacy_indicator_t *announcement_privacy_indicator);
OpenAPI_announcement_privacy_indicator_t *OpenAPI_announcement_privacy_indicator_parseFromJSON(cJSON *announcement_privacy_indicatorJSON);
cJSON *OpenAPI_announcement_privacy_indicator_convertToJSON(OpenAPI_announcement_privacy_indicator_t *announcement_privacy_indicator);
OpenAPI_announcement_privacy_indicator_t *OpenAPI_announcement_privacy_indicator_copy(OpenAPI_announcement_privacy_indicator_t *dst, OpenAPI_announcement_privacy_indicator_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_announcement_privacy_indicator_H_ */

