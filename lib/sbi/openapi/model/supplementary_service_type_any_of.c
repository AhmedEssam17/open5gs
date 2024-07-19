
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplementary_service_type_any_of.h"

char* OpenAPI_supplementary_service_type_any_of_ToString(OpenAPI_supplementary_service_type_any_of_e supplementary_service_type_any_of)
{
    const char *supplementary_service_type_any_ofArray[] =  { "NULL", "OIP", "OIR", "TIP", "TIR", "HOLD", "CB", "CDIV", "CW", "MWI", "CONF", "FA", "CCBS", "CCNR", "MCID", "CAT", "CUG", "PNM", "CRS", "ECT" };
    size_t sizeofArray = sizeof(supplementary_service_type_any_ofArray) / sizeof(supplementary_service_type_any_ofArray[0]);
    if (supplementary_service_type_any_of < sizeofArray)
        return (char *)supplementary_service_type_any_ofArray[supplementary_service_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_supplementary_service_type_any_of_e OpenAPI_supplementary_service_type_any_of_FromString(char* supplementary_service_type_any_of)
{
    int stringToReturn = 0;
    const char *supplementary_service_type_any_ofArray[] =  { "NULL", "OIP", "OIR", "TIP", "TIR", "HOLD", "CB", "CDIV", "CW", "MWI", "CONF", "FA", "CCBS", "CCNR", "MCID", "CAT", "CUG", "PNM", "CRS", "ECT" };
    size_t sizeofArray = sizeof(supplementary_service_type_any_ofArray) / sizeof(supplementary_service_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(supplementary_service_type_any_of, supplementary_service_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

