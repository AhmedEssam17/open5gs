#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DefaultAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


void
DefaultAPI_chargingdataChargingDataRefReleasePost(apiClient_t *apiClient, char * ChargingDataRef , charging_data_request_t * charging_data_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/chargingdata/{ChargingDataRef}/release")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/chargingdata/{ChargingDataRef}/release");


    // Path Params
    long sizeOfPathParams_ChargingDataRef = strlen(ChargingDataRef)+3 + strlen("{ ChargingDataRef }");
    if(ChargingDataRef == NULL) {
        goto end;
    }
    char* localVarToReplace_ChargingDataRef = malloc(sizeOfPathParams_ChargingDataRef);
    sprintf(localVarToReplace_ChargingDataRef, "{%s}", "ChargingDataRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_ChargingDataRef, ChargingDataRef);



    // Body Param
    cJSON *localVarSingleItemJSON_charging_data_request = NULL;
    if (charging_data_request != NULL)
    {
        //string
        localVarSingleItemJSON_charging_data_request = charging_data_request_convertToJSON(charging_data_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_charging_data_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 410) {
    //    printf("%s\n","Gone");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","Payload Too Large");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ChargingDataRef);
    if (localVarSingleItemJSON_charging_data_request) {
        cJSON_Delete(localVarSingleItemJSON_charging_data_request);
        localVarSingleItemJSON_charging_data_request = NULL;
    }
    free(localVarBodyParameters);

}

charging_data_response_t*
DefaultAPI_chargingdataChargingDataRefUpdatePost(apiClient_t *apiClient, char * ChargingDataRef , charging_data_request_t * charging_data_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/chargingdata/{ChargingDataRef}/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/chargingdata/{ChargingDataRef}/update");


    // Path Params
    long sizeOfPathParams_ChargingDataRef = strlen(ChargingDataRef)+3 + strlen("{ ChargingDataRef }");
    if(ChargingDataRef == NULL) {
        goto end;
    }
    char* localVarToReplace_ChargingDataRef = malloc(sizeOfPathParams_ChargingDataRef);
    sprintf(localVarToReplace_ChargingDataRef, "{%s}", "ChargingDataRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_ChargingDataRef, ChargingDataRef);



    // Body Param
    cJSON *localVarSingleItemJSON_charging_data_request = NULL;
    if (charging_data_request != NULL)
    {
        //string
        localVarSingleItemJSON_charging_data_request = charging_data_request_convertToJSON(charging_data_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_charging_data_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK. Updated Charging Data resource is returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 405) {
    //    printf("%s\n","Method Not Allowed");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 408) {
    //    printf("%s\n","Request Timeout");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 410) {
    //    printf("%s\n","Gone");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","Payload Too Large");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    charging_data_response_t *elementToReturn = charging_data_response_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ChargingDataRef);
    if (localVarSingleItemJSON_charging_data_request) {
        cJSON_Delete(localVarSingleItemJSON_charging_data_request);
        localVarSingleItemJSON_charging_data_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

charging_data_response_t*
DefaultAPI_chargingdataPost(apiClient_t *apiClient, charging_data_request_t * charging_data_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/chargingdata")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/chargingdata");




    // Body Param
    cJSON *localVarSingleItemJSON_charging_data_request = NULL;
    if (charging_data_request != NULL)
    {
        //string
        localVarSingleItemJSON_charging_data_request = charging_data_request_convertToJSON(charging_data_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_charging_data_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 405) {
    //    printf("%s\n","Method Not Allowed");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 408) {
    //    printf("%s\n","Request Timeout");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 410) {
    //    printf("%s\n","Gone");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","Payload Too Large");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    charging_data_response_t *elementToReturn = charging_data_response_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_charging_data_request) {
        cJSON_Delete(localVarSingleItemJSON_charging_data_request);
        localVarSingleItemJSON_charging_data_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

