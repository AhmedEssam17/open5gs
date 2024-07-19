/*
 * dnn_selection_mode_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_dnn_selection_mode_any_of_H_
#define _OpenAPI_dnn_selection_mode_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_dnn_selection_mode_any_of_NULL = 0, OpenAPI_dnn_selection_mode_any_of_VERIFIED, OpenAPI_dnn_selection_mode_any_of_UE_DNN_NOT_VERIFIED, OpenAPI_dnn_selection_mode_any_of_NW_DNN_NOT_VERIFIED } OpenAPI_dnn_selection_mode_any_of_e;

char* OpenAPI_dnn_selection_mode_any_of_ToString(OpenAPI_dnn_selection_mode_any_of_e dnn_selection_mode_any_of);

OpenAPI_dnn_selection_mode_any_of_e OpenAPI_dnn_selection_mode_any_of_FromString(char* dnn_selection_mode_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_dnn_selection_mode_any_of_H_ */

