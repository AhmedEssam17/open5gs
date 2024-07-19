/*
 * sms_indication.h
 *
 * 
 */

#ifndef _OpenAPI_sms_indication_H_
#define _OpenAPI_sms_indication_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "sms_indication_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sms_indication_s OpenAPI_sms_indication_t;
typedef struct OpenAPI_sms_indication_s {
} OpenAPI_sms_indication_t;

OpenAPI_sms_indication_t *OpenAPI_sms_indication_create(
);
void OpenAPI_sms_indication_free(OpenAPI_sms_indication_t *sms_indication);
OpenAPI_sms_indication_t *OpenAPI_sms_indication_parseFromJSON(cJSON *sms_indicationJSON);
cJSON *OpenAPI_sms_indication_convertToJSON(OpenAPI_sms_indication_t *sms_indication);
OpenAPI_sms_indication_t *OpenAPI_sms_indication_copy(OpenAPI_sms_indication_t *dst, OpenAPI_sms_indication_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sms_indication_H_ */

