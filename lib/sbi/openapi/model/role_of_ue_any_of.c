
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "role_of_ue_any_of.h"

char* OpenAPI_role_of_ue_any_of_ToString(OpenAPI_role_of_ue_any_of_e role_of_ue_any_of)
{
    const char *role_of_ue_any_ofArray[] =  { "NULL", "ANNOUNCING_UE", "MONITORING_UE", "REQUESTOR_UE", "REQUESTED_UE" };
    size_t sizeofArray = sizeof(role_of_ue_any_ofArray) / sizeof(role_of_ue_any_ofArray[0]);
    if (role_of_ue_any_of < sizeofArray)
        return (char *)role_of_ue_any_ofArray[role_of_ue_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_role_of_ue_any_of_e OpenAPI_role_of_ue_any_of_FromString(char* role_of_ue_any_of)
{
    int stringToReturn = 0;
    const char *role_of_ue_any_ofArray[] =  { "NULL", "ANNOUNCING_UE", "MONITORING_UE", "REQUESTOR_UE", "REQUESTED_UE" };
    size_t sizeofArray = sizeof(role_of_ue_any_ofArray) / sizeof(role_of_ue_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(role_of_ue_any_of, role_of_ue_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

