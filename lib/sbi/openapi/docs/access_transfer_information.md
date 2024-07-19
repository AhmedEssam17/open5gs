# access_transfer_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**access_transfer_type** | [**access_transfer_type_t**](access_transfer_type.md) \* |  | [optional] 
**access_network_information** | **list_t \*** |  | [optional] 
**cellular_network_information** | **char \*** |  | [optional] 
**inter_ue_transfer** | [**ue_transfer_type_t**](ue_transfer_type.md) \* |  | [optional] 
**user_equipment_info** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**instance_id** | **char \*** |  | [optional] 
**related_ims_charging_identifier** | **char \*** |  | [optional] 
**related_ims_charging_identifier_node** | [**ims_address_t**](ims_address.md) \* |  | [optional] 
**change_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


