# location_reporting_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location_reporting_message_type** | **int** |  | 
**user_information** | [**user_information_t**](user_information.md) \* |  | [optional] 
**user_locationinfo** | [**user_location_t**](user_location.md) \* |  | [optional] 
**p_s_cell_information** | [**ps_cell_information_t**](ps_cell_information.md) \* |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**r_at_type** | **rat_type_t \*** |  | [optional] 
**presence_reporting_area_information** | **list_t*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


