# pfi_container_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**p_fi** | **char \*** |  | [optional] 
**report_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**timeof_first_usage** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**timeof_last_usage** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**qo_s_information** | [**qos_data_t**](qos_data.md) \* |  | [optional] 
**qo_s_characteristics** | [**qos_characteristics_t**](qos_characteristics.md) \* |  | [optional] 
**user_location_information** | [**user_location_t**](user_location.md) \* |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**presence_reporting_area_information** | **list_t*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


