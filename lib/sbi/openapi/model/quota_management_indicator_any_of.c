
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quota_management_indicator_any_of.h"

char* OpenAPI_quota_management_indicator_any_of_ToString(OpenAPI_quota_management_indicator_any_of_e quota_management_indicator_any_of)
{
    const char *quota_management_indicator_any_ofArray[] =  { "NULL", "ONLINE_CHARGING", "OFFLINE_CHARGING", "QUOTA_MANAGEMENT_SUSPENDED" };
    size_t sizeofArray = sizeof(quota_management_indicator_any_ofArray) / sizeof(quota_management_indicator_any_ofArray[0]);
    if (quota_management_indicator_any_of < sizeofArray)
        return (char *)quota_management_indicator_any_ofArray[quota_management_indicator_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_quota_management_indicator_any_of_e OpenAPI_quota_management_indicator_any_of_FromString(char* quota_management_indicator_any_of)
{
    int stringToReturn = 0;
    const char *quota_management_indicator_any_ofArray[] =  { "NULL", "ONLINE_CHARGING", "OFFLINE_CHARGING", "QUOTA_MANAGEMENT_SUSPENDED" };
    size_t sizeofArray = sizeof(quota_management_indicator_any_ofArray) / sizeof(quota_management_indicator_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(quota_management_indicator_any_of, quota_management_indicator_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

