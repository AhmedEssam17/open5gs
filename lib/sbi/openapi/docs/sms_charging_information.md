# sms_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**originator_info** | [**originator_info_t**](originator_info.md) \* |  | [optional] 
**recipient_info** | [**list_t**](recipient_info.md) \* |  | [optional] 
**user_equipment_info** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**roamer_in_out** | [**roamer_in_out_t**](roamer_in_out.md) \* |  | [optional] 
**user_locationinfo** | [**user_location_t**](user_location.md) \* |  | [optional] 
**uetime_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**r_at_type** | **rat_type_t \*** |  | [optional] 
**s_msc_address** | **char \*** |  | [optional] 
**s_m_data_coding_scheme** | **int** |  | [optional] 
**s_m_message_type** | [**sm_message_type_t**](sm_message_type.md) \* |  | [optional] 
**s_m_reply_path_requested** | [**reply_path_requested_t**](reply_path_requested.md) \* |  | [optional] 
**s_m_user_data_header** | **char \*** |  | [optional] 
**s_m_status** | **char \*** |  | [optional] 
**s_m_discharge_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**numberof_messages_sent** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**s_m_service_type** | [**sm_service_type_t**](sm_service_type.md) \* |  | [optional] 
**s_m_sequence_number** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**s_m_sresult** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**submission_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**s_m_priority** | [**sm_priority_t**](sm_priority.md) \* |  | [optional] 
**message_reference** | **char \*** |  | [optional] 
**message_size** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**message_class** | [**message_class_t**](message_class.md) \* |  | [optional] 
**delivery_report_requested** | [**delivery_report_requested_t**](delivery_report_requested.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


