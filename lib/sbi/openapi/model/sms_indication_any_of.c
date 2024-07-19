
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sms_indication_any_of.h"

char* OpenAPI_sms_indication_any_of_ToString(OpenAPI_sms_indication_any_of_e sms_indication_any_of)
{
    const char *sms_indication_any_ofArray[] =  { "NULL", "SMS_SUPPORTED", "SMS_NOT_SUPPORTED" };
    size_t sizeofArray = sizeof(sms_indication_any_ofArray) / sizeof(sms_indication_any_ofArray[0]);
    if (sms_indication_any_of < sizeofArray)
        return (char *)sms_indication_any_ofArray[sms_indication_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_sms_indication_any_of_e OpenAPI_sms_indication_any_of_FromString(char* sms_indication_any_of)
{
    int stringToReturn = 0;
    const char *sms_indication_any_ofArray[] =  { "NULL", "SMS_SUPPORTED", "SMS_NOT_SUPPORTED" };
    size_t sizeofArray = sizeof(sms_indication_any_ofArray) / sizeof(sms_indication_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(sms_indication_any_of, sms_indication_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

