# pdu_session_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charging_id** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**s_m_fcharging_id** | **char \*** |  | [optional] 
**home_provided_charging_id** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**s_mf_home_provided_charging_id** | **char \*** |  | [optional] 
**user_information** | [**user_information_t**](user_information.md) \* |  | [optional] 
**user_locationinfo** | [**user_location_t**](user_location.md) \* |  | [optional] 
**m_apdu_non3_gpp_user_location_info** | [**user_location_t**](user_location.md) \* |  | [optional] 
**non3_gpp_user_location_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**m_apdu_non3_gpp_user_location_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**presence_reporting_area_information** | **list_t*** |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**pdu_session_information** | [**pdu_session_information_t**](pdu_session_information.md) \* |  | [optional] 
**unit_count_inactivity_timer** | **int** | indicating a time in seconds. | [optional] 
**r_an_secondary_rat_usage_report** | [**ran_secondary_rat_usage_report_t**](ran_secondary_rat_usage_report.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


