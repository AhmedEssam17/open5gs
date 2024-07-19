
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prose_event_type_any_of.h"

char* OpenAPI_prose_event_type_any_of_ToString(OpenAPI_prose_event_type_any_of_e prose_event_type_any_of)
{
    const char *prose_event_type_any_ofArray[] =  { "NULL", "ANNOUNCING", "MONITORING", "MATCH_REPORT" };
    size_t sizeofArray = sizeof(prose_event_type_any_ofArray) / sizeof(prose_event_type_any_ofArray[0]);
    if (prose_event_type_any_of < sizeofArray)
        return (char *)prose_event_type_any_ofArray[prose_event_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_prose_event_type_any_of_e OpenAPI_prose_event_type_any_of_FromString(char* prose_event_type_any_of)
{
    int stringToReturn = 0;
    const char *prose_event_type_any_ofArray[] =  { "NULL", "ANNOUNCING", "MONITORING", "MATCH_REPORT" };
    size_t sizeofArray = sizeof(prose_event_type_any_ofArray) / sizeof(prose_event_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(prose_event_type_any_of, prose_event_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

