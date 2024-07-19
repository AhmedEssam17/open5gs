
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sm_service_type_any_of.h"

char* OpenAPI_sm_service_type_any_of_ToString(OpenAPI_sm_service_type_any_of_e sm_service_type_any_of)
{
    const char *sm_service_type_any_ofArray[] =  { "NULL", "VAS4SMS_SHORT_MESSAGE_CONTENT_PROCESSING", "VAS4SMS_SHORT_MESSAGE_FORWARDING", "VAS4SMS_SHORT_MESSAGE_FORWARDING_MULTIPLE_SUBSCRIPTIONS", "VAS4SMS_SHORT_MESSAGE_FILTERING", "VAS4SMS_SHORT_MESSAGE_RECEIPT", "VAS4SMS_SHORT_MESSAGE_NETWORK_STORAGE", "VAS4SMS_SHORT_MESSAGE_TO_MULTIPLE_DESTINATIONS", "VAS4SMS_SHORT_MESSAGE_VIRTUAL_PRIVATE_NETWORK(VPN)", "VAS4SMS_SHORT_MESSAGE_AUTO_REPLY", "VAS4SMS_SHORT_MESSAGE_PERSONAL_SIGNATURE", "VAS4SMS_SHORT_MESSAGE_DEFERRED_DELIVERY" };
    size_t sizeofArray = sizeof(sm_service_type_any_ofArray) / sizeof(sm_service_type_any_ofArray[0]);
    if (sm_service_type_any_of < sizeofArray)
        return (char *)sm_service_type_any_ofArray[sm_service_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_sm_service_type_any_of_e OpenAPI_sm_service_type_any_of_FromString(char* sm_service_type_any_of)
{
    int stringToReturn = 0;
    const char *sm_service_type_any_ofArray[] =  { "NULL", "VAS4SMS_SHORT_MESSAGE_CONTENT_PROCESSING", "VAS4SMS_SHORT_MESSAGE_FORWARDING", "VAS4SMS_SHORT_MESSAGE_FORWARDING_MULTIPLE_SUBSCRIPTIONS", "VAS4SMS_SHORT_MESSAGE_FILTERING", "VAS4SMS_SHORT_MESSAGE_RECEIPT", "VAS4SMS_SHORT_MESSAGE_NETWORK_STORAGE", "VAS4SMS_SHORT_MESSAGE_TO_MULTIPLE_DESTINATIONS", "VAS4SMS_SHORT_MESSAGE_VIRTUAL_PRIVATE_NETWORK(VPN)", "VAS4SMS_SHORT_MESSAGE_AUTO_REPLY", "VAS4SMS_SHORT_MESSAGE_PERSONAL_SIGNATURE", "VAS4SMS_SHORT_MESSAGE_DEFERRED_DELIVERY" };
    size_t sizeofArray = sizeof(sm_service_type_any_ofArray) / sizeof(sm_service_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(sm_service_type_any_of, sm_service_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

