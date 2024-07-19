
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mico_mode_indication_any_of.h"

char* OpenAPI_mico_mode_indication_any_of_ToString(OpenAPI_mico_mode_indication_any_of_e mico_mode_indication_any_of)
{
    const char *mico_mode_indication_any_ofArray[] =  { "NULL", "MICO_MODE", "NO_MICO_MODE" };
    size_t sizeofArray = sizeof(mico_mode_indication_any_ofArray) / sizeof(mico_mode_indication_any_ofArray[0]);
    if (mico_mode_indication_any_of < sizeofArray)
        return (char *)mico_mode_indication_any_ofArray[mico_mode_indication_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_mico_mode_indication_any_of_e OpenAPI_mico_mode_indication_any_of_FromString(char* mico_mode_indication_any_of)
{
    int stringToReturn = 0;
    const char *mico_mode_indication_any_ofArray[] =  { "NULL", "MICO_MODE", "NO_MICO_MODE" };
    size_t sizeofArray = sizeof(mico_mode_indication_any_ofArray) / sizeof(mico_mode_indication_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(mico_mode_indication_any_of, mico_mode_indication_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

