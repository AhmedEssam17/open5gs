
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reply_path_requested_any_of.h"

char* OpenAPI_reply_path_requested_any_of_ToString(OpenAPI_reply_path_requested_any_of_e reply_path_requested_any_of)
{
    const char *reply_path_requested_any_ofArray[] =  { "NULL", "NO_REPLY_PATH_SET", "REPLY_PATH_SET" };
    size_t sizeofArray = sizeof(reply_path_requested_any_ofArray) / sizeof(reply_path_requested_any_ofArray[0]);
    if (reply_path_requested_any_of < sizeofArray)
        return (char *)reply_path_requested_any_ofArray[reply_path_requested_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_reply_path_requested_any_of_e OpenAPI_reply_path_requested_any_of_FromString(char* reply_path_requested_any_of)
{
    int stringToReturn = 0;
    const char *reply_path_requested_any_ofArray[] =  { "NULL", "NO_REPLY_PATH_SET", "REPLY_PATH_SET" };
    size_t sizeofArray = sizeof(reply_path_requested_any_ofArray) / sizeof(reply_path_requested_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(reply_path_requested_any_of, reply_path_requested_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

