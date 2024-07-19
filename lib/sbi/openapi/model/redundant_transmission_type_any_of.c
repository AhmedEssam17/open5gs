
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "redundant_transmission_type_any_of.h"

char* OpenAPI_redundant_transmission_type_any_of_ToString(OpenAPI_redundant_transmission_type_any_of_e redundant_transmission_type_any_of)
{
    const char *redundant_transmission_type_any_ofArray[] =  { "NULL", "NON_TRANSMISSION", "END_TO_END_USER_PLANE_PATHS", "N3/N9", "TRANSPORT_LAYER" };
    size_t sizeofArray = sizeof(redundant_transmission_type_any_ofArray) / sizeof(redundant_transmission_type_any_ofArray[0]);
    if (redundant_transmission_type_any_of < sizeofArray)
        return (char *)redundant_transmission_type_any_ofArray[redundant_transmission_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_redundant_transmission_type_any_of_e OpenAPI_redundant_transmission_type_any_of_FromString(char* redundant_transmission_type_any_of)
{
    int stringToReturn = 0;
    const char *redundant_transmission_type_any_ofArray[] =  { "NULL", "NON_TRANSMISSION", "END_TO_END_USER_PLANE_PATHS", "N3/N9", "TRANSPORT_LAYER" };
    size_t sizeofArray = sizeof(redundant_transmission_type_any_ofArray) / sizeof(redundant_transmission_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(redundant_transmission_type_any_of, redundant_transmission_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

