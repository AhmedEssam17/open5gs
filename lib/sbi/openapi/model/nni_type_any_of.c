
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nni_type_any_of.h"

char* OpenAPI_nni_type_any_of_ToString(OpenAPI_nni_type_any_of_e nni_type_any_of)
{
    const char *nni_type_any_ofArray[] =  { "NULL", "NON_ROAMING", "ROAMING_NO_LOOPBACK", "ROAMING_LOOPBACK" };
    size_t sizeofArray = sizeof(nni_type_any_ofArray) / sizeof(nni_type_any_ofArray[0]);
    if (nni_type_any_of < sizeofArray)
        return (char *)nni_type_any_ofArray[nni_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_nni_type_any_of_e OpenAPI_nni_type_any_of_FromString(char* nni_type_any_of)
{
    int stringToReturn = 0;
    const char *nni_type_any_ofArray[] =  { "NULL", "NON_ROAMING", "ROAMING_NO_LOOPBACK", "ROAMING_LOOPBACK" };
    size_t sizeofArray = sizeof(nni_type_any_ofArray) / sizeof(nni_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(nni_type_any_of, nni_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

