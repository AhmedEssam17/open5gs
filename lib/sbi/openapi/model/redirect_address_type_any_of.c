
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "redirect_address_type_any_of.h"

char* OpenAPI_redirect_address_type_any_of_ToString(OpenAPI_redirect_address_type_any_of_e redirect_address_type_any_of)
{
    const char *redirect_address_type_any_ofArray[] =  { "NULL", "IPV4", "IPV6", "URL", "URI" };
    size_t sizeofArray = sizeof(redirect_address_type_any_ofArray) / sizeof(redirect_address_type_any_ofArray[0]);
    if (redirect_address_type_any_of < sizeofArray)
        return (char *)redirect_address_type_any_ofArray[redirect_address_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_redirect_address_type_any_of_e OpenAPI_redirect_address_type_any_of_FromString(char* redirect_address_type_any_of)
{
    int stringToReturn = 0;
    const char *redirect_address_type_any_ofArray[] =  { "NULL", "IPV4", "IPV6", "URL", "URI" };
    size_t sizeofArray = sizeof(redirect_address_type_any_ofArray) / sizeof(redirect_address_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(redirect_address_type_any_of, redirect_address_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

