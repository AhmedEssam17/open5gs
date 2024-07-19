
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "session_failover_any_of.h"

char* OpenAPI_session_failover_any_of_ToString(OpenAPI_session_failover_any_of_e session_failover_any_of)
{
    const char *session_failover_any_ofArray[] =  { "NULL", "FAILOVER_NOT_SUPPORTED", "FAILOVER_SUPPORTED" };
    size_t sizeofArray = sizeof(session_failover_any_ofArray) / sizeof(session_failover_any_ofArray[0]);
    if (session_failover_any_of < sizeofArray)
        return (char *)session_failover_any_ofArray[session_failover_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_session_failover_any_of_e OpenAPI_session_failover_any_of_FromString(char* session_failover_any_of)
{
    int stringToReturn = 0;
    const char *session_failover_any_ofArray[] =  { "NULL", "FAILOVER_NOT_SUPPORTED", "FAILOVER_SUPPORTED" };
    size_t sizeofArray = sizeof(session_failover_any_ofArray) / sizeof(session_failover_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(session_failover_any_of, session_failover_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

