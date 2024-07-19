
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variable_part_type_any_of.h"

char* OpenAPI_variable_part_type_any_of_ToString(OpenAPI_variable_part_type_any_of_e variable_part_type_any_of)
{
    const char *variable_part_type_any_ofArray[] =  { "NULL", "INTEGER", "NUMBER", "TIME", "DATE", "CURRENCY" };
    size_t sizeofArray = sizeof(variable_part_type_any_ofArray) / sizeof(variable_part_type_any_ofArray[0]);
    if (variable_part_type_any_of < sizeofArray)
        return (char *)variable_part_type_any_ofArray[variable_part_type_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_variable_part_type_any_of_e OpenAPI_variable_part_type_any_of_FromString(char* variable_part_type_any_of)
{
    int stringToReturn = 0;
    const char *variable_part_type_any_ofArray[] =  { "NULL", "INTEGER", "NUMBER", "TIME", "DATE", "CURRENCY" };
    size_t sizeofArray = sizeof(variable_part_type_any_ofArray) / sizeof(variable_part_type_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(variable_part_type_any_of, variable_part_type_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

