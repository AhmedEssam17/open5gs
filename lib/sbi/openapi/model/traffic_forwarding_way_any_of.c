
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "traffic_forwarding_way_any_of.h"

char* OpenAPI_traffic_forwarding_way_any_of_ToString(OpenAPI_traffic_forwarding_way_any_of_e traffic_forwarding_way_any_of)
{
    const char *traffic_forwarding_way_any_ofArray[] =  { "NULL", "N6", "N19", "LOCAL_SWITCH" };
    size_t sizeofArray = sizeof(traffic_forwarding_way_any_ofArray) / sizeof(traffic_forwarding_way_any_ofArray[0]);
    if (traffic_forwarding_way_any_of < sizeofArray)
        return (char *)traffic_forwarding_way_any_ofArray[traffic_forwarding_way_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_traffic_forwarding_way_any_of_e OpenAPI_traffic_forwarding_way_any_of_FromString(char* traffic_forwarding_way_any_of)
{
    int stringToReturn = 0;
    const char *traffic_forwarding_way_any_ofArray[] =  { "NULL", "N6", "N19", "LOCAL_SWITCH" };
    size_t sizeofArray = sizeof(traffic_forwarding_way_any_ofArray) / sizeof(traffic_forwarding_way_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(traffic_forwarding_way_any_of, traffic_forwarding_way_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

