
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_3_gppps_data_off_status_any_of.h"

char* OpenAPI__3_gppps_data_off_status_any_of_ToString(OpenAPI__3_gppps_data_off_status_any_of_e _3_gppps_data_off_status_any_of)
{
    const char *_3_gppps_data_off_status_any_ofArray[] =  { "NULL", "ACTIVE", "INACTIVE" };
    size_t sizeofArray = sizeof(_3_gppps_data_off_status_any_ofArray) / sizeof(_3_gppps_data_off_status_any_ofArray[0]);
    if (_3_gppps_data_off_status_any_of < sizeofArray)
        return (char *)_3_gppps_data_off_status_any_ofArray[_3_gppps_data_off_status_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI__3_gppps_data_off_status_any_of_e OpenAPI__3_gppps_data_off_status_any_of_FromString(char* _3_gppps_data_off_status_any_of)
{
    int stringToReturn = 0;
    const char *_3_gppps_data_off_status_any_ofArray[] =  { "NULL", "ACTIVE", "INACTIVE" };
    size_t sizeofArray = sizeof(_3_gppps_data_off_status_any_ofArray) / sizeof(_3_gppps_data_off_status_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(_3_gppps_data_off_status_any_of, _3_gppps_data_off_status_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

