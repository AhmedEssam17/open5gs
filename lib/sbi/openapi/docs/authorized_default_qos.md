# authorized_default_qos_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_5qi** | **int** | Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255.  | [optional] 
**arp** | [**arp_t**](arp.md) \* |  | [optional] 
**priority_level** | **int** | This data type is defined in the same way as the &#39;5QiPriorityLevel&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**aver_window** | **int** | This data type is defined in the same way as the &#39;AverWindow&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] [default to 2000]
**max_data_burst_vol** | **int** | This data type is defined in the same way as the &#39;MaxDataBurstVol&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**maxbr_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**maxbr_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**gbr_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**gbr_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**ext_max_data_burst_vol** | **int** | This data type is defined in the same way as the &#39;ExtMaxDataBurstVol&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


