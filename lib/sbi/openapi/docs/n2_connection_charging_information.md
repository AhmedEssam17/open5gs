# n2_connection_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**n2_connection_message_type** | **int** |  | 
**user_information** | [**user_information_t**](user_information.md) \* |  | [optional] 
**user_locationinfo** | [**user_location_t**](user_location.md) \* |  | [optional] 
**p_s_cell_information** | [**ps_cell_information_t**](ps_cell_information.md) \* |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**r_at_type** | **rat_type_t \*** |  | [optional] 
**amf_ue_ngap_id** | **int** |  | [optional] 
**ran_ue_ngap_id** | **int** |  | [optional] 
**ran_node_id** | [**global_ran_node_id_t**](global_ran_node_id.md) \* |  | [optional] 
**restricted_rat_list** | [**list_t**](rat_type.md) \* |  | [optional] 
**forbidden_area_list** | [**list_t**](area.md) \* |  | [optional] 
**service_area_restriction** | [**list_t**](service_area_restriction.md) \* |  | [optional] 
**restricted_cn_list** | [**list_t**](core_network_type.md) \* |  | [optional] 
**allowed_nssai** | [**list_t**](snssai.md) \* |  | [optional] 
**rrc_est_cause** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


