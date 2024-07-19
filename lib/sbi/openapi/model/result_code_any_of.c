
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "result_code_any_of.h"

char* OpenAPI_result_code_any_of_ToString(OpenAPI_result_code_any_of_e result_code_any_of)
{
    const char *result_code_any_ofArray[] =  { "NULL", "SUCCESS", "END_USER_SERVICE_DENIED", "QUOTA_MANAGEMENT_NOT_APPLICABLE", "QUOTA_LIMIT_REACHED", "END_USER_SERVICE_REJECTED", "USER_UNKNOWN", "RATING_FAILED", "QUOTA_MANAGEMENT" };
    size_t sizeofArray = sizeof(result_code_any_ofArray) / sizeof(result_code_any_ofArray[0]);
    if (result_code_any_of < sizeofArray)
        return (char *)result_code_any_ofArray[result_code_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_result_code_any_of_e OpenAPI_result_code_any_of_FromString(char* result_code_any_of)
{
    int stringToReturn = 0;
    const char *result_code_any_ofArray[] =  { "NULL", "SUCCESS", "END_USER_SERVICE_DENIED", "QUOTA_MANAGEMENT_NOT_APPLICABLE", "QUOTA_LIMIT_REACHED", "END_USER_SERVICE_REJECTED", "USER_UNKNOWN", "RATING_FAILED", "QUOTA_MANAGEMENT" };
    size_t sizeofArray = sizeof(result_code_any_ofArray) / sizeof(result_code_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(result_code_any_of, result_code_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

