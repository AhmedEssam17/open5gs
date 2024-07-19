/*
 * model_3_gppps_data_off_status.h
 *
 * 
 */

#ifndef _OpenAPI_model_3_gppps_data_off_status_H_
#define _OpenAPI_model_3_gppps_data_off_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "_3_gppps_data_off_status_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_model_3_gppps_data_off_status_s OpenAPI_model_3_gppps_data_off_status_t;
typedef struct OpenAPI_model_3_gppps_data_off_status_s {
} OpenAPI_model_3_gppps_data_off_status_t;

OpenAPI_model_3_gppps_data_off_status_t *OpenAPI_model_3_gppps_data_off_status_create(
);
void OpenAPI_model_3_gppps_data_off_status_free(OpenAPI_model_3_gppps_data_off_status_t *model_3_gppps_data_off_status);
OpenAPI_model_3_gppps_data_off_status_t *OpenAPI_model_3_gppps_data_off_status_parseFromJSON(cJSON *model_3_gppps_data_off_statusJSON);
cJSON *OpenAPI_model_3_gppps_data_off_status_convertToJSON(OpenAPI_model_3_gppps_data_off_status_t *model_3_gppps_data_off_status);
OpenAPI_model_3_gppps_data_off_status_t *OpenAPI_model_3_gppps_data_off_status_copy(OpenAPI_model_3_gppps_data_off_status_t *dst, OpenAPI_model_3_gppps_data_off_status_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_model_3_gppps_data_off_status_H_ */

