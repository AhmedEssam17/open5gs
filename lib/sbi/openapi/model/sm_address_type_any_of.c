
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sm_address_type_any_of.h"

char* OpenAPI_sm_address_type_any_of_ToString(OpenAPI_sm_address_type_any_of_e sm_address_type_any_of)
{
    const char *sm_address_type_any_ofArray[] =  { "NULL", "EMAIL_ADDRESS", "MSISDN", "IPV4_ADDRESS", "IPV6_ADDRESS", "NUMERIC_SHORTCODE", "ALPHANUMERIC_SHORTCODE", "OTHER", "IMSI" };
    size_t sizeofArray = sizeof(sm_address_type_any_ofArray) / sizeof(sm_address_type_any_ofArray[0]);
    if (sm_address_type_any_of < sizeofArray)
        return (char *)sm_address_type_any_ofArray[sm_address_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_sm_address_type_any_of_e OpenAPI_sm_address_type_any_of_FromString(char* sm_address_type_any_of)
{
    int stringToReturn = 0;
    const char *sm_address_type_any_ofArray[] =  { "NULL", "EMAIL_ADDRESS", "MSISDN", "IPV4_ADDRESS", "IPV6_ADDRESS", "NUMERIC_SHORTCODE", "ALPHANUMERIC_SHORTCODE", "OTHER", "IMSI" };
    size_t sizeofArray = sizeof(sm_address_type_any_ofArray) / sizeof(sm_address_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(sm_address_type_any_of, sm_address_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

