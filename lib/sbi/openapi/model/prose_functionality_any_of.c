
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prose_functionality_any_of.h"

char* OpenAPI_prose_functionality_any_of_ToString(OpenAPI_prose_functionality_any_of_e prose_functionality_any_of)
{
    const char *prose_functionality_any_ofArray[] =  { "NULL", "DIRECT_DISCOVERY", "DIRECT_COMMUNICATION" };
    size_t sizeofArray = sizeof(prose_functionality_any_ofArray) / sizeof(prose_functionality_any_ofArray[0]);
    if (prose_functionality_any_of < sizeofArray)
        return (char *)prose_functionality_any_ofArray[prose_functionality_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_prose_functionality_any_of_e OpenAPI_prose_functionality_any_of_FromString(char* prose_functionality_any_of)
{
    int stringToReturn = 0;
    const char *prose_functionality_any_ofArray[] =  { "NULL", "DIRECT_DISCOVERY", "DIRECT_COMMUNICATION" };
    size_t sizeofArray = sizeof(prose_functionality_any_ofArray) / sizeof(prose_functionality_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(prose_functionality_any_of, prose_functionality_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

