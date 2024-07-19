/*
 * quota_management_indicator.h
 *
 * 
 */

#ifndef _OpenAPI_quota_management_indicator_H_
#define _OpenAPI_quota_management_indicator_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "quota_management_indicator_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_quota_management_indicator_s OpenAPI_quota_management_indicator_t;
typedef struct OpenAPI_quota_management_indicator_s {
} OpenAPI_quota_management_indicator_t;

OpenAPI_quota_management_indicator_t *OpenAPI_quota_management_indicator_create(
);
void OpenAPI_quota_management_indicator_free(OpenAPI_quota_management_indicator_t *quota_management_indicator);
OpenAPI_quota_management_indicator_t *OpenAPI_quota_management_indicator_parseFromJSON(cJSON *quota_management_indicatorJSON);
cJSON *OpenAPI_quota_management_indicator_convertToJSON(OpenAPI_quota_management_indicator_t *quota_management_indicator);
OpenAPI_quota_management_indicator_t *OpenAPI_quota_management_indicator_copy(OpenAPI_quota_management_indicator_t *dst, OpenAPI_quota_management_indicator_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_quota_management_indicator_H_ */

