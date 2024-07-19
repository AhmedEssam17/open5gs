
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "failure_handling_any_of.h"

char* OpenAPI_failure_handling_any_of_ToString(OpenAPI_failure_handling_any_of_e failure_handling_any_of)
{
    const char *failure_handling_any_ofArray[] =  { "NULL", "TERMINATE", "CONTINUE", "RETRY_AND_TERMINATE" };
    size_t sizeofArray = sizeof(failure_handling_any_ofArray) / sizeof(failure_handling_any_ofArray[0]);
    if (failure_handling_any_of < sizeofArray)
        return (char *)failure_handling_any_ofArray[failure_handling_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_failure_handling_any_of_e OpenAPI_failure_handling_any_of_FromString(char* failure_handling_any_of)
{
    int stringToReturn = 0;
    const char *failure_handling_any_ofArray[] =  { "NULL", "TERMINATE", "CONTINUE", "RETRY_AND_TERMINATE" };
    size_t sizeofArray = sizeof(failure_handling_any_ofArray) / sizeof(failure_handling_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(failure_handling_any_of, failure_handling_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

