/*
 * radio_resources_id_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_radio_resources_id_any_of_H_
#define _OpenAPI_radio_resources_id_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_radio_resources_id_any_of_NULL = 0, OpenAPI_radio_resources_id_any_of_OPERATOR_PROVIDED, OpenAPI_radio_resources_id_any_of_CONFIGURED } OpenAPI_radio_resources_id_any_of_e;

char* OpenAPI_radio_resources_id_any_of_ToString(OpenAPI_radio_resources_id_any_of_e radio_resources_id_any_of);

OpenAPI_radio_resources_id_any_of_e OpenAPI_radio_resources_id_any_of_FromString(char* radio_resources_id_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_radio_resources_id_any_of_H_ */

