/*
 * node_functionality_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_node_functionality_any_of_H_
#define _OpenAPI_node_functionality_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_node_functionality_any_of_NULL = 0, OpenAPI_node_functionality_any_of_AMF, OpenAPI_node_functionality_any_of_SMF, OpenAPI_node_functionality_any_of_SMS, OpenAPI_node_functionality_any_of_SMSF, OpenAPI_node_functionality_any_of_PGW_C_SMF, OpenAPI_node_functionality_any_of_NEFF, OpenAPI_node_functionality_any_of_SGW, OpenAPI_node_functionality_any_of_I_SMF, OpenAPI_node_functionality_any_of_ePDG, OpenAPI_node_functionality_any_of_CEF, OpenAPI_node_functionality_any_of_NEF, OpenAPI_node_functionality_any_of_MnS_Producer, OpenAPI_node_functionality_any_of_SGSN, OpenAPI_node_functionality_any_of_V_SMF, OpenAPI_node_functionality_any_of__5G_DDNMF, OpenAPI_node_functionality_any_of_IMS_Node, OpenAPI_node_functionality_any_of_EES } OpenAPI_node_functionality_any_of_e;

char* OpenAPI_node_functionality_any_of_ToString(OpenAPI_node_functionality_any_of_e node_functionality_any_of);

OpenAPI_node_functionality_any_of_e OpenAPI_node_functionality_any_of_FromString(char* node_functionality_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_node_functionality_any_of_H_ */

