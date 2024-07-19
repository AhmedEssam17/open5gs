
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delivery_report_requested_any_of.h"

char* OpenAPI_delivery_report_requested_any_of_ToString(OpenAPI_delivery_report_requested_any_of_e delivery_report_requested_any_of)
{
    const char *delivery_report_requested_any_ofArray[] =  { "NULL", "true", "false" };
    size_t sizeofArray = sizeof(delivery_report_requested_any_ofArray) / sizeof(delivery_report_requested_any_ofArray[0]);
    if (delivery_report_requested_any_of < sizeofArray)
        return (char *)delivery_report_requested_any_ofArray[delivery_report_requested_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_delivery_report_requested_any_of_e OpenAPI_delivery_report_requested_any_of_FromString(char* delivery_report_requested_any_of)
{
    int stringToReturn = 0;
    const char *delivery_report_requested_any_ofArray[] =  { "NULL", "true", "false" };
    size_t sizeofArray = sizeof(delivery_report_requested_any_ofArray) / sizeof(delivery_report_requested_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(delivery_report_requested_any_of, delivery_report_requested_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

