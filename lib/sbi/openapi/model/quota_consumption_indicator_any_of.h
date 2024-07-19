/*
 * quota_consumption_indicator_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_quota_consumption_indicator_any_of_H_
#define _OpenAPI_quota_consumption_indicator_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_quota_consumption_indicator_any_of_NULL = 0, OpenAPI_quota_consumption_indicator_any_of_QUOTA_NOT_USED, OpenAPI_quota_consumption_indicator_any_of_QUOTA_IS_USED } OpenAPI_quota_consumption_indicator_any_of_e;

char* OpenAPI_quota_consumption_indicator_any_of_ToString(OpenAPI_quota_consumption_indicator_any_of_e quota_consumption_indicator_any_of);

OpenAPI_quota_consumption_indicator_any_of_e OpenAPI_quota_consumption_indicator_any_of_FromString(char* quota_consumption_indicator_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_quota_consumption_indicator_any_of_H_ */

