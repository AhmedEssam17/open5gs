
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "interface_type_any_of.h"

char* OpenAPI_interface_type_any_of_ToString(OpenAPI_interface_type_any_of_e interface_type_any_of)
{
    const char *interface_type_any_ofArray[] =  { "NULL", "UNKNOWN", "MOBILE_ORIGINATING", "MOBILE_TERMINATING", "APPLICATION_ORIGINATING", "APPLICATION_TERMINATING" };
    size_t sizeofArray = sizeof(interface_type_any_ofArray) / sizeof(interface_type_any_ofArray[0]);
    if (interface_type_any_of < sizeofArray)
        return (char *)interface_type_any_ofArray[interface_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_interface_type_any_of_e OpenAPI_interface_type_any_of_FromString(char* interface_type_any_of)
{
    int stringToReturn = 0;
    const char *interface_type_any_ofArray[] =  { "NULL", "UNKNOWN", "MOBILE_ORIGINATING", "MOBILE_TERMINATING", "APPLICATION_ORIGINATING", "APPLICATION_TERMINATING" };
    size_t sizeofArray = sizeof(interface_type_any_ofArray) / sizeof(interface_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(interface_type_any_of, interface_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

