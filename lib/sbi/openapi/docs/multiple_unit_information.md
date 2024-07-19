# multiple_unit_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**result_code** | [**result_code_t**](result_code.md) \* |  | [optional] 
**rating_group** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | 
**granted_unit** | [**granted_unit_t**](granted_unit.md) \* |  | [optional] 
**triggers** | [**list_t**](trigger.md) \* |  | [optional] 
**validity_time** | **int** | indicating a time in seconds. | [optional] 
**quota_holding_time** | **int** | indicating a time in seconds. | [optional] 
**final_unit_indication** | [**final_unit_indication_t**](final_unit_indication.md) \* |  | [optional] 
**time_quota_threshold** | **int** |  | [optional] 
**volume_quota_threshold** | **int** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**unit_quota_threshold** | **int** |  | [optional] 
**u_pfid** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**announcement_information** | [**announcement_information_t**](announcement_information.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


