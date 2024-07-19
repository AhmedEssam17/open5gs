# used_unit_container_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**service_id** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**quota_management_indicator** | [**quota_management_indicator_t**](quota_management_indicator.md) \* |  | [optional] 
**triggers** | [**list_t**](trigger.md) \* |  | [optional] 
**trigger_timestamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**time** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**total_volume** | **int** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**uplink_volume** | **int** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**downlink_volume** | **int** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**service_specific_units** | **int** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**event_time_stamps** | **list_t \*** |  | [optional] 
**local_sequence_number** | **int** |  | 
**p_du_container_information** | [**pdu_container_information_t**](pdu_container_information.md) \* |  | [optional] 
**n_spa_container_information** | [**nspa_container_information_t**](nspa_container_information.md) \* |  | [optional] 
**p_c5_container_information** | [**pc5_container_information_t**](pc5_container_information.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


