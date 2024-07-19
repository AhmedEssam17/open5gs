
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "participant_action_type_any_of.h"

char* OpenAPI_participant_action_type_any_of_ToString(OpenAPI_participant_action_type_any_of_e participant_action_type_any_of)
{
    const char *participant_action_type_any_ofArray[] =  { "NULL", "CREATE", "JOIN", "INVITE_INTO", "QUIT" };
    size_t sizeofArray = sizeof(participant_action_type_any_ofArray) / sizeof(participant_action_type_any_ofArray[0]);
    if (participant_action_type_any_of < sizeofArray)
        return (char *)participant_action_type_any_ofArray[participant_action_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_participant_action_type_any_of_e OpenAPI_participant_action_type_any_of_FromString(char* participant_action_type_any_of)
{
    int stringToReturn = 0;
    const char *participant_action_type_any_ofArray[] =  { "NULL", "CREATE", "JOIN", "INVITE_INTO", "QUIT" };
    size_t sizeofArray = sizeof(participant_action_type_any_ofArray) / sizeof(participant_action_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(participant_action_type_any_of, participant_action_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

