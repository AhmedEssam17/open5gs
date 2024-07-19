/*
 * sm_address_type_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_sm_address_type_any_of_H_
#define _OpenAPI_sm_address_type_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_sm_address_type_any_of_NULL = 0, OpenAPI_sm_address_type_any_of_EMAIL_ADDRESS, OpenAPI_sm_address_type_any_of_MSISDN, OpenAPI_sm_address_type_any_of_IPV4_ADDRESS, OpenAPI_sm_address_type_any_of_IPV6_ADDRESS, OpenAPI_sm_address_type_any_of_NUMERIC_SHORTCODE, OpenAPI_sm_address_type_any_of_ALPHANUMERIC_SHORTCODE, OpenAPI_sm_address_type_any_of_OTHER, OpenAPI_sm_address_type_any_of_IMSI } OpenAPI_sm_address_type_any_of_e;

char* OpenAPI_sm_address_type_any_of_ToString(OpenAPI_sm_address_type_any_of_e sm_address_type_any_of);

OpenAPI_sm_address_type_any_of_e OpenAPI_sm_address_type_any_of_FromString(char* sm_address_type_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sm_address_type_any_of_H_ */

