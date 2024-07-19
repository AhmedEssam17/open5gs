
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sm_priority_any_of.h"

char* OpenAPI_sm_priority_any_of_ToString(OpenAPI_sm_priority_any_of_e sm_priority_any_of)
{
    const char *sm_priority_any_ofArray[] =  { "NULL", "LOW", "NORMAL", "HIGH" };
    size_t sizeofArray = sizeof(sm_priority_any_ofArray) / sizeof(sm_priority_any_ofArray[0]);
    if (sm_priority_any_of < sizeofArray)
        return (char *)sm_priority_any_ofArray[sm_priority_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_sm_priority_any_of_e OpenAPI_sm_priority_any_of_FromString(char* sm_priority_any_of)
{
    int stringToReturn = 0;
    const char *sm_priority_any_ofArray[] =  { "NULL", "LOW", "NORMAL", "HIGH" };
    size_t sizeofArray = sizeof(sm_priority_any_ofArray) / sizeof(sm_priority_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(sm_priority_any_of, sm_priority_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

