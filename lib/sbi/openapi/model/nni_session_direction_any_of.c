
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nni_session_direction_any_of.h"

char* OpenAPI_nni_session_direction_any_of_ToString(OpenAPI_nni_session_direction_any_of_e nni_session_direction_any_of)
{
    const char *nni_session_direction_any_ofArray[] =  { "NULL", "INBOUND", "OUTBOUND" };
    size_t sizeofArray = sizeof(nni_session_direction_any_ofArray) / sizeof(nni_session_direction_any_ofArray[0]);
    if (nni_session_direction_any_of < sizeofArray)
        return (char *)nni_session_direction_any_ofArray[nni_session_direction_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_nni_session_direction_any_of_e OpenAPI_nni_session_direction_any_of_FromString(char* nni_session_direction_any_of)
{
    int stringToReturn = 0;
    const char *nni_session_direction_any_ofArray[] =  { "NULL", "INBOUND", "OUTBOUND" };
    size_t sizeofArray = sizeof(nni_session_direction_any_ofArray) / sizeof(nni_session_direction_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(nni_session_direction_any_of, nni_session_direction_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

