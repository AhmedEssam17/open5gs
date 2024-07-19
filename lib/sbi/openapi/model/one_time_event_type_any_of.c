
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "one_time_event_type_any_of.h"

char* OpenAPI_one_time_event_type_any_of_ToString(OpenAPI_one_time_event_type_any_of_e one_time_event_type_any_of)
{
    const char *one_time_event_type_any_ofArray[] =  { "NULL", "IEC", "PEC" };
    size_t sizeofArray = sizeof(one_time_event_type_any_ofArray) / sizeof(one_time_event_type_any_ofArray[0]);
    if (one_time_event_type_any_of < sizeofArray)
        return (char *)one_time_event_type_any_ofArray[one_time_event_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_one_time_event_type_any_of_e OpenAPI_one_time_event_type_any_of_FromString(char* one_time_event_type_any_of)
{
    int stringToReturn = 0;
    const char *one_time_event_type_any_ofArray[] =  { "NULL", "IEC", "PEC" };
    size_t sizeofArray = sizeof(one_time_event_type_any_ofArray) / sizeof(one_time_event_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(one_time_event_type_any_of, one_time_event_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

