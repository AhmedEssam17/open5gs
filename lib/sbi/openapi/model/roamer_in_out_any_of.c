
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "roamer_in_out_any_of.h"

char* OpenAPI_roamer_in_out_any_of_ToString(OpenAPI_roamer_in_out_any_of_e roamer_in_out_any_of)
{
    const char *roamer_in_out_any_ofArray[] =  { "NULL", "IN_BOUND", "OUT_BOUND" };
    size_t sizeofArray = sizeof(roamer_in_out_any_ofArray) / sizeof(roamer_in_out_any_ofArray[0]);
    if (roamer_in_out_any_of < sizeofArray)
        return (char *)roamer_in_out_any_ofArray[roamer_in_out_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_roamer_in_out_any_of_e OpenAPI_roamer_in_out_any_of_FromString(char* roamer_in_out_any_of)
{
    int stringToReturn = 0;
    const char *roamer_in_out_any_ofArray[] =  { "NULL", "IN_BOUND", "OUT_BOUND" };
    size_t sizeofArray = sizeof(roamer_in_out_any_ofArray) / sizeof(roamer_in_out_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(roamer_in_out_any_of, roamer_in_out_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

