# charging_data_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**invocation_time_stamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | 
**invocation_sequence_number** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | 
**invocation_result** | [**invocation_result_t**](invocation_result.md) \* |  | [optional] 
**session_failover** | [**session_failover_t**](session_failover.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**multiple_unit_information** | [**list_t**](multiple_unit_information.md) \* |  | [optional] 
**triggers** | [**list_t**](trigger.md) \* |  | [optional] 
**p_du_session_charging_information** | [**pdu_session_charging_information_t**](pdu_session_charging_information.md) \* |  | [optional] 
**roaming_qbc_information** | [**roaming_qbc_information_t**](roaming_qbc_information.md) \* |  | [optional] 
**location_reporting_charging_information** | [**location_reporting_charging_information_t**](location_reporting_charging_information.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


