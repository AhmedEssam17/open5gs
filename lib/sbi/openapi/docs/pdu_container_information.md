# pdu_container_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**timeof_first_usage** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**timeof_last_usage** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**qo_s_information** | [**qos_data_t**](qos_data.md) \* |  | [optional] 
**qo_s_characteristics** | [**qos_characteristics_t**](qos_characteristics.md) \* |  | [optional] 
**af_charging_identifier** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**af_charging_id_string** | **char \*** | Application provided charging identifier allowing correlation of charging information. | [optional] 
**user_location_information** | [**user_location_t**](user_location.md) \* |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**r_at_type** | **rat_type_t \*** |  | [optional] 
**serving_node_id** | [**list_t**](serving_network_function_id.md) \* |  | [optional] 
**presence_reporting_area_information** | **list_t*** |  | [optional] 
**_3gpp_ps_data_off_status** | [**model_3_gppps_data_off_status_t**](model_3_gppps_data_off_status.md) \* |  | [optional] 
**sponsor_identity** | **char \*** |  | [optional] 
**applicationservice_provider_identity** | **char \*** |  | [optional] 
**charging_rule_base_name** | **char \*** |  | [optional] 
**m_apdu_steering_functionality** | **steering_functionality_t \*** |  | [optional] 
**m_apdu_steering_mode** | [**steering_mode_t**](steering_mode.md) \* |  | [optional] 
**traffic_forwarding_way** | [**traffic_forwarding_way_t**](traffic_forwarding_way.md) \* |  | [optional] 
**qos_monitoring_report** | [**list_t**](qos_monitoring_report.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


