
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sdp_type_any_of.h"

char* OpenAPI_sdp_type_any_of_ToString(OpenAPI_sdp_type_any_of_e sdp_type_any_of)
{
    const char *sdp_type_any_ofArray[] =  { "NULL", "OFFER", "ANSWER" };
    size_t sizeofArray = sizeof(sdp_type_any_ofArray) / sizeof(sdp_type_any_ofArray[0]);
    if (sdp_type_any_of < sizeofArray)
        return (char *)sdp_type_any_ofArray[sdp_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_sdp_type_any_of_e OpenAPI_sdp_type_any_of_FromString(char* sdp_type_any_of)
{
    int stringToReturn = 0;
    const char *sdp_type_any_ofArray[] =  { "NULL", "OFFER", "ANSWER" };
    size_t sizeofArray = sizeof(sdp_type_any_ofArray) / sizeof(sdp_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(sdp_type_any_of, sdp_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

