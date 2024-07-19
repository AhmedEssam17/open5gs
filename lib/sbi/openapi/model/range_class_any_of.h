/*
 * range_class_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_range_class_any_of_H_
#define _OpenAPI_range_class_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_range_class_any_of_NULL = 0, OpenAPI_range_class_any_of_RESERVED, OpenAPI_range_class_any_of__50_METER, OpenAPI_range_class_any_of__100_METER, OpenAPI_range_class_any_of__200_METER, OpenAPI_range_class_any_of__500_METER, OpenAPI_range_class_any_of__1000_METER, OpenAPI_range_class_any_of_UNUSED } OpenAPI_range_class_any_of_e;

char* OpenAPI_range_class_any_of_ToString(OpenAPI_range_class_any_of_e range_class_any_of);

OpenAPI_range_class_any_of_e OpenAPI_range_class_any_of_FromString(char* range_class_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_range_class_any_of_H_ */

