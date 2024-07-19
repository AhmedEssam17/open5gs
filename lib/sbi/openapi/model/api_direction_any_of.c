
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_direction_any_of.h"

char* OpenAPI_api_direction_any_of_ToString(OpenAPI_api_direction_any_of_e api_direction_any_of)
{
    const char *api_direction_any_ofArray[] =  { "NULL", "INVOCATION", "NOTIFICATION" };
    size_t sizeofArray = sizeof(api_direction_any_ofArray) / sizeof(api_direction_any_ofArray[0]);
    if (api_direction_any_of < sizeofArray)
        return (char *)api_direction_any_ofArray[api_direction_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_api_direction_any_of_e OpenAPI_api_direction_any_of_FromString(char* api_direction_any_of)
{
    int stringToReturn = 0;
    const char *api_direction_any_ofArray[] =  { "NULL", "INVOCATION", "NOTIFICATION" };
    size_t sizeofArray = sizeof(api_direction_any_ofArray) / sizeof(api_direction_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(api_direction_any_of, api_direction_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

