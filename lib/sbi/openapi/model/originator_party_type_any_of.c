
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "originator_party_type_any_of.h"

char* OpenAPI_originator_party_type_any_of_ToString(OpenAPI_originator_party_type_any_of_e originator_party_type_any_of)
{
    const char *originator_party_type_any_ofArray[] =  { "NULL", "CALLING", "CALLED" };
    size_t sizeofArray = sizeof(originator_party_type_any_ofArray) / sizeof(originator_party_type_any_ofArray[0]);
    if (originator_party_type_any_of < sizeofArray)
        return (char *)originator_party_type_any_ofArray[originator_party_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_originator_party_type_any_of_e OpenAPI_originator_party_type_any_of_FromString(char* originator_party_type_any_of)
{
    int stringToReturn = 0;
    const char *originator_party_type_any_ofArray[] =  { "NULL", "CALLING", "CALLED" };
    size_t sizeofArray = sizeof(originator_party_type_any_ofArray) / sizeof(originator_party_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(originator_party_type_any_of, originator_party_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

