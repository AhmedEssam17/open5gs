
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "class_identifier_any_of.h"

char* OpenAPI_class_identifier_any_of_ToString(OpenAPI_class_identifier_any_of_e class_identifier_any_of)
{
    const char *class_identifier_any_ofArray[] =  { "NULL", "PERSONAL", "ADVERTISEMENT", "INFORMATIONAL", "AUTO" };
    size_t sizeofArray = sizeof(class_identifier_any_ofArray) / sizeof(class_identifier_any_ofArray[0]);
    if (class_identifier_any_of < sizeofArray)
        return (char *)class_identifier_any_ofArray[class_identifier_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_class_identifier_any_of_e OpenAPI_class_identifier_any_of_FromString(char* class_identifier_any_of)
{
    int stringToReturn = 0;
    const char *class_identifier_any_ofArray[] =  { "NULL", "PERSONAL", "ADVERTISEMENT", "INFORMATIONAL", "AUTO" };
    size_t sizeofArray = sizeof(class_identifier_any_ofArray) / sizeof(class_identifier_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(class_identifier_any_of, class_identifier_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

