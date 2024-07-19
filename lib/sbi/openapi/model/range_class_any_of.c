
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "range_class_any_of.h"

char* OpenAPI_range_class_any_of_ToString(OpenAPI_range_class_any_of_e range_class_any_of)
{
    const char *range_class_any_ofArray[] =  { "NULL", "RESERVED", "50_METER", "100_METER", "200_METER", "500_METER", "1000_METER", "UNUSED" };
    size_t sizeofArray = sizeof(range_class_any_ofArray) / sizeof(range_class_any_ofArray[0]);
    if (range_class_any_of < sizeofArray)
        return (char *)range_class_any_ofArray[range_class_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_range_class_any_of_e OpenAPI_range_class_any_of_FromString(char* range_class_any_of)
{
    int stringToReturn = 0;
    const char *range_class_any_ofArray[] =  { "NULL", "RESERVED", "50_METER", "100_METER", "200_METER", "500_METER", "1000_METER", "UNUSED" };
    size_t sizeofArray = sizeof(range_class_any_ofArray) / sizeof(range_class_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(range_class_any_of, range_class_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

