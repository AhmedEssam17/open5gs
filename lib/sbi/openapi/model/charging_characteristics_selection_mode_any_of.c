
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "charging_characteristics_selection_mode_any_of.h"

char* OpenAPI_charging_characteristics_selection_mode_any_of_ToString(OpenAPI_charging_characteristics_selection_mode_any_of_e charging_characteristics_selection_mode_any_of)
{
    const char *charging_characteristics_selection_mode_any_ofArray[] =  { "NULL", "HOME_DEFAULT", "ROAMING_DEFAULT", "VISITING_DEFAULT" };
    size_t sizeofArray = sizeof(charging_characteristics_selection_mode_any_ofArray) / sizeof(charging_characteristics_selection_mode_any_ofArray[0]);
    if (charging_characteristics_selection_mode_any_of < sizeofArray)
        return (char *)charging_characteristics_selection_mode_any_ofArray[charging_characteristics_selection_mode_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_charging_characteristics_selection_mode_any_of_e OpenAPI_charging_characteristics_selection_mode_any_of_FromString(char* charging_characteristics_selection_mode_any_of)
{
    int stringToReturn = 0;
    const char *charging_characteristics_selection_mode_any_ofArray[] =  { "NULL", "HOME_DEFAULT", "ROAMING_DEFAULT", "VISITING_DEFAULT" };
    size_t sizeofArray = sizeof(charging_characteristics_selection_mode_any_ofArray) / sizeof(charging_characteristics_selection_mode_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(charging_characteristics_selection_mode_any_of, charging_characteristics_selection_mode_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

