
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dnn_selection_mode_any_of.h"

char* OpenAPI_dnn_selection_mode_any_of_ToString(OpenAPI_dnn_selection_mode_any_of_e dnn_selection_mode_any_of)
{
    const char *dnn_selection_mode_any_ofArray[] =  { "NULL", "VERIFIED", "UE_DNN_NOT_VERIFIED", "NW_DNN_NOT_VERIFIED" };
    size_t sizeofArray = sizeof(dnn_selection_mode_any_ofArray) / sizeof(dnn_selection_mode_any_ofArray[0]);
    if (dnn_selection_mode_any_of < sizeofArray)
        return (char *)dnn_selection_mode_any_ofArray[dnn_selection_mode_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_dnn_selection_mode_any_of_e OpenAPI_dnn_selection_mode_any_of_FromString(char* dnn_selection_mode_any_of)
{
    int stringToReturn = 0;
    const char *dnn_selection_mode_any_ofArray[] =  { "NULL", "VERIFIED", "UE_DNN_NOT_VERIFIED", "NW_DNN_NOT_VERIFIED" };
    size_t sizeofArray = sizeof(dnn_selection_mode_any_ofArray) / sizeof(dnn_selection_mode_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(dnn_selection_mode_any_of, dnn_selection_mode_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

