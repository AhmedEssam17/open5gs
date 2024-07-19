/*
 * delivery_report_requested_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_delivery_report_requested_any_of_H_
#define _OpenAPI_delivery_report_requested_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_delivery_report_requested_any_of_NULL = 0, OpenAPI_delivery_report_requested_any_of__true, OpenAPI_delivery_report_requested_any_of__false } OpenAPI_delivery_report_requested_any_of_e;

char* OpenAPI_delivery_report_requested_any_of_ToString(OpenAPI_delivery_report_requested_any_of_e delivery_report_requested_any_of);

OpenAPI_delivery_report_requested_any_of_e OpenAPI_delivery_report_requested_any_of_FromString(char* delivery_report_requested_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_delivery_report_requested_any_of_H_ */

