
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "radio_resources_id_any_of.h"

char* OpenAPI_radio_resources_id_any_of_ToString(OpenAPI_radio_resources_id_any_of_e radio_resources_id_any_of)
{
    const char *radio_resources_id_any_ofArray[] =  { "NULL", "OPERATOR_PROVIDED", "CONFIGURED" };
    size_t sizeofArray = sizeof(radio_resources_id_any_ofArray) / sizeof(radio_resources_id_any_ofArray[0]);
    if (radio_resources_id_any_of < sizeofArray)
        return (char *)radio_resources_id_any_ofArray[radio_resources_id_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_radio_resources_id_any_of_e OpenAPI_radio_resources_id_any_of_FromString(char* radio_resources_id_any_of)
{
    int stringToReturn = 0;
    const char *radio_resources_id_any_ofArray[] =  { "NULL", "OPERATOR_PROVIDED", "CONFIGURED" };
    size_t sizeofArray = sizeof(radio_resources_id_any_ofArray) / sizeof(radio_resources_id_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(radio_resources_id_any_of, radio_resources_id_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

