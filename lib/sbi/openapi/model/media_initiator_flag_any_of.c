
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "media_initiator_flag_any_of.h"

char* OpenAPI_media_initiator_flag_any_of_ToString(OpenAPI_media_initiator_flag_any_of_e media_initiator_flag_any_of)
{
    const char *media_initiator_flag_any_ofArray[] =  { "NULL", "CALLED_PARTY", "CALLING_PARTY", "UNKNOWN" };
    size_t sizeofArray = sizeof(media_initiator_flag_any_ofArray) / sizeof(media_initiator_flag_any_ofArray[0]);
    if (media_initiator_flag_any_of < sizeofArray)
        return (char *)media_initiator_flag_any_ofArray[media_initiator_flag_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_media_initiator_flag_any_of_e OpenAPI_media_initiator_flag_any_of_FromString(char* media_initiator_flag_any_of)
{
    int stringToReturn = 0;
    const char *media_initiator_flag_any_ofArray[] =  { "NULL", "CALLED_PARTY", "CALLING_PARTY", "UNKNOWN" };
    size_t sizeofArray = sizeof(media_initiator_flag_any_ofArray) / sizeof(media_initiator_flag_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(media_initiator_flag_any_of, media_initiator_flag_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

