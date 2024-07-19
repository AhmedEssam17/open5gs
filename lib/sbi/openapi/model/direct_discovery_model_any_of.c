
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "direct_discovery_model_any_of.h"

char* OpenAPI_direct_discovery_model_any_of_ToString(OpenAPI_direct_discovery_model_any_of_e direct_discovery_model_any_of)
{
    const char *direct_discovery_model_any_ofArray[] =  { "NULL", "MODEL_A", "MODEL_B" };
    size_t sizeofArray = sizeof(direct_discovery_model_any_ofArray) / sizeof(direct_discovery_model_any_ofArray[0]);
    if (direct_discovery_model_any_of < sizeofArray)
        return (char *)direct_discovery_model_any_ofArray[direct_discovery_model_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_direct_discovery_model_any_of_e OpenAPI_direct_discovery_model_any_of_FromString(char* direct_discovery_model_any_of)
{
    int stringToReturn = 0;
    const char *direct_discovery_model_any_ofArray[] =  { "NULL", "MODEL_A", "MODEL_B" };
    size_t sizeofArray = sizeof(direct_discovery_model_any_ofArray) / sizeof(direct_discovery_model_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(direct_discovery_model_any_of, direct_discovery_model_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

