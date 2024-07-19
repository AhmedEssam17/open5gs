# registration_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**registration_messagetype** | [**registration_message_type_t**](registration_message_type.md) \* |  | 
**user_information** | [**user_information_t**](user_information.md) \* |  | [optional] 
**user_locationinfo** | [**user_location_t**](user_location.md) \* |  | [optional] 
**p_s_cell_information** | [**ps_cell_information_t**](ps_cell_information.md) \* |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**r_at_type** | **rat_type_t \*** |  | [optional] 
**_5_gmm_capability** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | [optional] 
**m_ico_mode_indication** | [**mico_mode_indication_t**](mico_mode_indication.md) \* |  | [optional] 
**sms_indication** | [**sms_indication_t**](sms_indication.md) \* |  | [optional] 
**tai_list** | [**list_t**](tai.md) \* |  | [optional] 
**service_area_restriction** | [**list_t**](service_area_restriction.md) \* |  | [optional] 
**requested_nssai** | [**list_t**](snssai.md) \* |  | [optional] 
**allowed_nssai** | [**list_t**](snssai.md) \* |  | [optional] 
**rejected_nssai** | [**list_t**](snssai.md) \* |  | [optional] 
**n_ssai_map_list** | [**list_t**](nssai_map.md) \* |  | [optional] 
**amf_ue_ngap_id** | **int** |  | [optional] 
**ran_ue_ngap_id** | **int** |  | [optional] 
**ran_node_id** | [**global_ran_node_id_t**](global_ran_node_id.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


