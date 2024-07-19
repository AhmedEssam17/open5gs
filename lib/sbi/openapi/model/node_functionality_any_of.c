
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "node_functionality_any_of.h"

char* OpenAPI_node_functionality_any_of_ToString(OpenAPI_node_functionality_any_of_e node_functionality_any_of)
{
    const char *node_functionality_any_ofArray[] =  { "NULL", "AMF", "SMF", "SMS", "SMSF", "PGW_C_SMF", "NEFF", "SGW", "I_SMF", "ePDG", "CEF", "NEF", "MnS_Producer", "SGSN", "V_SMF", "5G_DDNMF", "IMS_Node", "EES" };
    size_t sizeofArray = sizeof(node_functionality_any_ofArray) / sizeof(node_functionality_any_ofArray[0]);
    if (node_functionality_any_of < sizeofArray)
        return (char *)node_functionality_any_ofArray[node_functionality_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_node_functionality_any_of_e OpenAPI_node_functionality_any_of_FromString(char* node_functionality_any_of)
{
    int stringToReturn = 0;
    const char *node_functionality_any_ofArray[] =  { "NULL", "AMF", "SMF", "SMS", "SMSF", "PGW_C_SMF", "NEFF", "SGW", "I_SMF", "ePDG", "CEF", "NEF", "MnS_Producer", "SGSN", "V_SMF", "5G_DDNMF", "IMS_Node", "EES" };
    size_t sizeofArray = sizeof(node_functionality_any_ofArray) / sizeof(node_functionality_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(node_functionality_any_of, node_functionality_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

