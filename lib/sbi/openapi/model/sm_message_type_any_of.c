
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sm_message_type_any_of.h"

char* OpenAPI_sm_message_type_any_of_ToString(OpenAPI_sm_message_type_any_of_e sm_message_type_any_of)
{
    const char *sm_message_type_any_ofArray[] =  { "NULL", "SUBMISSION", "DELIVERY_REPORT", "SM_SERVICE_REQUEST", "DELIVERY" };
    size_t sizeofArray = sizeof(sm_message_type_any_ofArray) / sizeof(sm_message_type_any_ofArray[0]);
    if (sm_message_type_any_of < sizeofArray)
        return (char *)sm_message_type_any_ofArray[sm_message_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_sm_message_type_any_of_e OpenAPI_sm_message_type_any_of_FromString(char* sm_message_type_any_of)
{
    int stringToReturn = 0;
    const char *sm_message_type_any_ofArray[] =  { "NULL", "SUBMISSION", "DELIVERY_REPORT", "SM_SERVICE_REQUEST", "DELIVERY" };
    size_t sizeofArray = sizeof(sm_message_type_any_ofArray) / sizeof(sm_message_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(sm_message_type_any_of, sm_message_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

