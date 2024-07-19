# nef_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**external_individual_identifier** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**external_group_identifier** | **char \*** | String identifying External Group Identifier that identifies a group made up of one or more  subscriptions associated to a group of IMSIs, as specified in clause 19.7.3 of 3GPP TS 23.003.   | [optional] 
**group_identifier** | **char \*** | String identifying a group of devices network internal globally unique ID which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP TS 23.003.   | [optional] 
**a_pi_direction** | [**api_direction_t**](api_direction.md) \* |  | [optional] 
**a_pi_target_network_function** | [**nf_identification_t**](nf_identification.md) \* |  | [optional] 
**a_pi_result_code** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**a_pi_name** | **char \*** |  | 
**a_pi_reference** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**a_pi_content** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


