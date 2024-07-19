/*
 * supplementary_service_mode_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_supplementary_service_mode_any_of_H_
#define _OpenAPI_supplementary_service_mode_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_supplementary_service_mode_any_of_NULL = 0, OpenAPI_supplementary_service_mode_any_of_CFU, OpenAPI_supplementary_service_mode_any_of_CFB, OpenAPI_supplementary_service_mode_any_of_CFNR, OpenAPI_supplementary_service_mode_any_of_CFNL, OpenAPI_supplementary_service_mode_any_of_CD, OpenAPI_supplementary_service_mode_any_of_CFNRC, OpenAPI_supplementary_service_mode_any_of_ICB, OpenAPI_supplementary_service_mode_any_of_OCB, OpenAPI_supplementary_service_mode_any_of_ACR, OpenAPI_supplementary_service_mode_any_of_BLIND_TRANFER, OpenAPI_supplementary_service_mode_any_of_CONSULTATIVE_TRANFER } OpenAPI_supplementary_service_mode_any_of_e;

char* OpenAPI_supplementary_service_mode_any_of_ToString(OpenAPI_supplementary_service_mode_any_of_e supplementary_service_mode_any_of);

OpenAPI_supplementary_service_mode_any_of_e OpenAPI_supplementary_service_mode_any_of_FromString(char* supplementary_service_mode_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_supplementary_service_mode_any_of_H_ */

