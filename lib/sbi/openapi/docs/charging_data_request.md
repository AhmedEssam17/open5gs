# charging_data_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**subscriber_identifier** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**tenant_identifier** | **char \*** |  | [optional] 
**charging_id** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**mn_s_consumer_identifier** | **char \*** |  | [optional] 
**nf_consumer_identification** | [**nf_identification_t**](nf_identification.md) \* |  | 
**invocation_time_stamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | 
**invocation_sequence_number** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | 
**retransmission_indicator** | **int** |  | [optional] 
**one_time_event** | **int** |  | [optional] 
**one_time_event_type** | [**one_time_event_type_t**](one_time_event_type.md) \* |  | [optional] 
**notify_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**service_specification_info** | **char \*** |  | [optional] 
**multiple_unit_usage** | [**list_t**](multiple_unit_usage.md) \* |  | [optional] 
**triggers** | [**list_t**](trigger.md) \* |  | [optional] 
**easid** | **char \*** |  | [optional] 
**ednid** | **char \*** |  | [optional] 
**e_as_provider_identifier** | **char \*** |  | [optional] 
**p_du_session_charging_information** | [**pdu_session_charging_information_t**](pdu_session_charging_information.md) \* |  | [optional] 
**roaming_qbc_information** | [**roaming_qbc_information_t**](roaming_qbc_information.md) \* |  | [optional] 
**s_ms_charging_information** | [**sms_charging_information_t**](sms_charging_information.md) \* |  | [optional] 
**n_ef_charging_information** | [**nef_charging_information_t**](nef_charging_information.md) \* |  | [optional] 
**registration_charging_information** | [**registration_charging_information_t**](registration_charging_information.md) \* |  | [optional] 
**n2_connection_charging_information** | [**n2_connection_charging_information_t**](n2_connection_charging_information.md) \* |  | [optional] 
**location_reporting_charging_information** | [**location_reporting_charging_information_t**](location_reporting_charging_information.md) \* |  | [optional] 
**n_spa_charging_information** | [**nspa_charging_information_t**](nspa_charging_information.md) \* |  | [optional] 
**n_sm_charging_information** | [**nsm_charging_information_t**](nsm_charging_information.md) \* |  | [optional] 
**m_m_tel_charging_information** | [**mm_tel_charging_information_t**](mm_tel_charging_information.md) \* |  | [optional] 
**i_ms_charging_information** | [**ims_charging_information_t**](ims_charging_information.md) \* |  | [optional] 
**edge_infrastructure_usage_charging_information** | [**edge_infrastructure_usage_charging_information_t**](edge_infrastructure_usage_charging_information.md) \* |  | [optional] 
**e_as_deployment_charging_information** | [**eas_deployment_charging_information_t**](eas_deployment_charging_information.md) \* |  | [optional] 
**direct_edge_enabling_service_charging_information** | [**nef_charging_information_t**](nef_charging_information.md) \* |  | [optional] 
**exposed_edge_enabling_service_charging_information** | [**nef_charging_information_t**](nef_charging_information.md) \* |  | [optional] 
**pro_se_charging_information** | [**prose_charging_information_t**](prose_charging_information.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


