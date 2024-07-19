
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "management_operation_status_any_of.h"

char* OpenAPI_management_operation_status_any_of_ToString(OpenAPI_management_operation_status_any_of_e management_operation_status_any_of)
{
    const char *management_operation_status_any_ofArray[] =  { "NULL", "OPERATION_SUCCEEDED", "OPERATION_FAILED" };
    size_t sizeofArray = sizeof(management_operation_status_any_ofArray) / sizeof(management_operation_status_any_ofArray[0]);
    if (management_operation_status_any_of < sizeofArray)
        return (char *)management_operation_status_any_ofArray[management_operation_status_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_management_operation_status_any_of_e OpenAPI_management_operation_status_any_of_FromString(char* management_operation_status_any_of)
{
    int stringToReturn = 0;
    const char *management_operation_status_any_ofArray[] =  { "NULL", "OPERATION_SUCCEEDED", "OPERATION_FAILED" };
    size_t sizeofArray = sizeof(management_operation_status_any_ofArray) / sizeof(management_operation_status_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(management_operation_status_any_of, management_operation_status_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

