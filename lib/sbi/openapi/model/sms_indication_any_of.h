/*
 * sms_indication_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_sms_indication_any_of_H_
#define _OpenAPI_sms_indication_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_sms_indication_any_of_NULL = 0, OpenAPI_sms_indication_any_of_SMS_SUPPORTED, OpenAPI_sms_indication_any_of_SMS_NOT_SUPPORTED } OpenAPI_sms_indication_any_of_e;

char* OpenAPI_sms_indication_any_of_ToString(OpenAPI_sms_indication_any_of_e sms_indication_any_of);

OpenAPI_sms_indication_any_of_e OpenAPI_sms_indication_any_of_FromString(char* sms_indication_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sms_indication_any_of_H_ */

