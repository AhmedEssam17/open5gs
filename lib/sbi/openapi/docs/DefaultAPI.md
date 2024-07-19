# DefaultAPI

All URIs are relative to *https://example.com/nchf-convergedcharging/v3*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DefaultAPI_chargingdataChargingDataRefReleasePost**](DefaultAPI.md#DefaultAPI_chargingdataChargingDataRefReleasePost) | **POST** /chargingdata/{ChargingDataRef}/release | 
[**DefaultAPI_chargingdataChargingDataRefUpdatePost**](DefaultAPI.md#DefaultAPI_chargingdataChargingDataRefUpdatePost) | **POST** /chargingdata/{ChargingDataRef}/update | 
[**DefaultAPI_chargingdataPost**](DefaultAPI.md#DefaultAPI_chargingdataPost) | **POST** /chargingdata | 


# **DefaultAPI_chargingdataChargingDataRefReleasePost**
```c
void DefaultAPI_chargingdataChargingDataRefReleasePost(apiClient_t *apiClient, char * ChargingDataRef, charging_data_request_t * charging_data_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ChargingDataRef** | **char \*** | a unique identifier for a charging data resource in a PLMN | 
**charging_data_request** | **[charging_data_request_t](charging_data_request.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_chargingdataChargingDataRefUpdatePost**
```c
charging_data_response_t* DefaultAPI_chargingdataChargingDataRefUpdatePost(apiClient_t *apiClient, char * ChargingDataRef, charging_data_request_t * charging_data_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ChargingDataRef** | **char \*** | a unique identifier for a charging data resource in a PLMN | 
**charging_data_request** | **[charging_data_request_t](charging_data_request.md) \*** |  | 

### Return type

[charging_data_response_t](charging_data_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_chargingdataPost**
```c
charging_data_response_t* DefaultAPI_chargingdataPost(apiClient_t *apiClient, charging_data_request_t * charging_data_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**charging_data_request** | **[charging_data_request_t](charging_data_request.md) \*** |  | 

### Return type

[charging_data_response_t](charging_data_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

