
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "announcement_privacy_indicator_any_of.h"

char* OpenAPI_announcement_privacy_indicator_any_of_ToString(OpenAPI_announcement_privacy_indicator_any_of_e announcement_privacy_indicator_any_of)
{
    const char *announcement_privacy_indicator_any_ofArray[] =  { "NULL", "NOT_PRIVATE", "PRIVATE" };
    size_t sizeofArray = sizeof(announcement_privacy_indicator_any_ofArray) / sizeof(announcement_privacy_indicator_any_ofArray[0]);
    if (announcement_privacy_indicator_any_of < sizeofArray)
        return (char *)announcement_privacy_indicator_any_ofArray[announcement_privacy_indicator_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_announcement_privacy_indicator_any_of_e OpenAPI_announcement_privacy_indicator_any_of_FromString(char* announcement_privacy_indicator_any_of)
{
    int stringToReturn = 0;
    const char *announcement_privacy_indicator_any_ofArray[] =  { "NULL", "NOT_PRIVATE", "PRIVATE" };
    size_t sizeofArray = sizeof(announcement_privacy_indicator_any_ofArray) / sizeof(announcement_privacy_indicator_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(announcement_privacy_indicator_any_of, announcement_privacy_indicator_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

