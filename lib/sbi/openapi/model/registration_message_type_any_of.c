
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "registration_message_type_any_of.h"

char* OpenAPI_registration_message_type_any_of_ToString(OpenAPI_registration_message_type_any_of_e registration_message_type_any_of)
{
    const char *registration_message_type_any_ofArray[] =  { "NULL", "INITIAL", "MOBILITY", "PERIODIC", "EMERGENCY", "DEREGISTRATION" };
    size_t sizeofArray = sizeof(registration_message_type_any_ofArray) / sizeof(registration_message_type_any_ofArray[0]);
    if (registration_message_type_any_of < sizeofArray)
        return (char *)registration_message_type_any_ofArray[registration_message_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_registration_message_type_any_of_e OpenAPI_registration_message_type_any_of_FromString(char* registration_message_type_any_of)
{
    int stringToReturn = 0;
    const char *registration_message_type_any_ofArray[] =  { "NULL", "INITIAL", "MOBILITY", "PERIODIC", "EMERGENCY", "DEREGISTRATION" };
    size_t sizeofArray = sizeof(registration_message_type_any_ofArray) / sizeof(registration_message_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(registration_message_type_any_of, registration_message_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

