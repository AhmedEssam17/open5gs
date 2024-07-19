
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ims_session_priority_any_of.h"

char* OpenAPI_ims_session_priority_any_of_ToString(OpenAPI_ims_session_priority_any_of_e ims_session_priority_any_of)
{
    const char *ims_session_priority_any_ofArray[] =  { "NULL", "PRIORITY_0", "PRIORITY_1", "PRIORITY_2", "PRIORITY_3", "PRIORITY_4" };
    size_t sizeofArray = sizeof(ims_session_priority_any_ofArray) / sizeof(ims_session_priority_any_ofArray[0]);
    if (ims_session_priority_any_of < sizeofArray)
        return (char *)ims_session_priority_any_ofArray[ims_session_priority_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_ims_session_priority_any_of_e OpenAPI_ims_session_priority_any_of_FromString(char* ims_session_priority_any_of)
{
    int stringToReturn = 0;
    const char *ims_session_priority_any_ofArray[] =  { "NULL", "PRIORITY_0", "PRIORITY_1", "PRIORITY_2", "PRIORITY_3", "PRIORITY_4" };
    size_t sizeofArray = sizeof(ims_session_priority_any_ofArray) / sizeof(ims_session_priority_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(ims_session_priority_any_of, ims_session_priority_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

