
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tad_identifier_any_of.h"

char* OpenAPI_tad_identifier_any_of_ToString(OpenAPI_tad_identifier_any_of_e tad_identifier_any_of)
{
    const char *tad_identifier_any_ofArray[] =  { "NULL", "CS", "PS" };
    size_t sizeofArray = sizeof(tad_identifier_any_ofArray) / sizeof(tad_identifier_any_ofArray[0]);
    if (tad_identifier_any_of < sizeofArray)
        return (char *)tad_identifier_any_ofArray[tad_identifier_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_tad_identifier_any_of_e OpenAPI_tad_identifier_any_of_FromString(char* tad_identifier_any_of)
{
    int stringToReturn = 0;
    const char *tad_identifier_any_ofArray[] =  { "NULL", "CS", "PS" };
    size_t sizeofArray = sizeof(tad_identifier_any_ofArray) / sizeof(tad_identifier_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(tad_identifier_any_of, tad_identifier_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

