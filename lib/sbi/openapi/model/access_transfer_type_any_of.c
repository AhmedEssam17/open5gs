
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "access_transfer_type_any_of.h"

char* OpenAPI_access_transfer_type_any_of_ToString(OpenAPI_access_transfer_type_any_of_e access_transfer_type_any_of)
{
    const char *access_transfer_type_any_ofArray[] =  { "NULL", "PS_TO_CS", "CS_TO_PS", "PS_TO_PS", "CS_TO_CS" };
    size_t sizeofArray = sizeof(access_transfer_type_any_ofArray) / sizeof(access_transfer_type_any_ofArray[0]);
    if (access_transfer_type_any_of < sizeofArray)
        return (char *)access_transfer_type_any_ofArray[access_transfer_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_access_transfer_type_any_of_e OpenAPI_access_transfer_type_any_of_FromString(char* access_transfer_type_any_of)
{
    int stringToReturn = 0;
    const char *access_transfer_type_any_ofArray[] =  { "NULL", "PS_TO_CS", "CS_TO_PS", "PS_TO_PS", "CS_TO_CS" };
    size_t sizeofArray = sizeof(access_transfer_type_any_ofArray) / sizeof(access_transfer_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(access_transfer_type_any_of, access_transfer_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

