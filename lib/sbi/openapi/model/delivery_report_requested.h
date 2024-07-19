/*
 * delivery_report_requested.h
 *
 * 
 */

#ifndef _OpenAPI_delivery_report_requested_H_
#define _OpenAPI_delivery_report_requested_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "delivery_report_requested_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_delivery_report_requested_s OpenAPI_delivery_report_requested_t;
typedef struct OpenAPI_delivery_report_requested_s {
} OpenAPI_delivery_report_requested_t;

OpenAPI_delivery_report_requested_t *OpenAPI_delivery_report_requested_create(
);
void OpenAPI_delivery_report_requested_free(OpenAPI_delivery_report_requested_t *delivery_report_requested);
OpenAPI_delivery_report_requested_t *OpenAPI_delivery_report_requested_parseFromJSON(cJSON *delivery_report_requestedJSON);
cJSON *OpenAPI_delivery_report_requested_convertToJSON(OpenAPI_delivery_report_requested_t *delivery_report_requested);
OpenAPI_delivery_report_requested_t *OpenAPI_delivery_report_requested_copy(OpenAPI_delivery_report_requested_t *dst, OpenAPI_delivery_report_requested_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_delivery_report_requested_H_ */

