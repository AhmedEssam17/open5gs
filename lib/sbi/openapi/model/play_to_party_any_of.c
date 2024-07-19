
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "play_to_party_any_of.h"

char* OpenAPI_play_to_party_any_of_ToString(OpenAPI_play_to_party_any_of_e play_to_party_any_of)
{
    const char *play_to_party_any_ofArray[] =  { "NULL", "SERVED", "REMOTE" };
    size_t sizeofArray = sizeof(play_to_party_any_ofArray) / sizeof(play_to_party_any_ofArray[0]);
    if (play_to_party_any_of < sizeofArray)
        return (char *)play_to_party_any_ofArray[play_to_party_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_play_to_party_any_of_e OpenAPI_play_to_party_any_of_FromString(char* play_to_party_any_of)
{
    int stringToReturn = 0;
    const char *play_to_party_any_ofArray[] =  { "NULL", "SERVED", "REMOTE" };
    size_t sizeofArray = sizeof(play_to_party_any_ofArray) / sizeof(play_to_party_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(play_to_party_any_of, play_to_party_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

