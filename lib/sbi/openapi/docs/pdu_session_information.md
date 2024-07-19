# pdu_session_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**network_slicing_info** | [**network_slicing_info_t**](network_slicing_info.md) \* |  | [optional] 
**pdu_session_id** | **int** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | 
**pdu_type** | **pdu_session_type_t \*** |  | [optional] 
**ssc_mode** | **ssc_mode_t \*** |  | [optional] 
**h_plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**serving_network_function_id** | [**serving_network_function_id_t**](serving_network_function_id.md) \* |  | [optional] 
**rat_type** | **rat_type_t \*** |  | [optional] 
**m_apdu_non3_gpprat_type** | **rat_type_t \*** |  | [optional] 
**dnn_id** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**dnn_selection_mode** | [**dnn_selection_mode_t**](dnn_selection_mode.md) \* |  | [optional] 
**charging_characteristics** | **char \*** |  | [optional] 
**charging_characteristics_selection_mode** | [**charging_characteristics_selection_mode_t**](charging_characteristics_selection_mode.md) \* |  | [optional] 
**start_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**stop_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**_3gpp_ps_data_off_status** | [**model_3_gppps_data_off_status_t**](model_3_gppps_data_off_status.md) \* |  | [optional] 
**session_stop_indicator** | **int** |  | [optional] 
**pdu_address** | [**pdu_address_t**](pdu_address.md) \* |  | [optional] 
**diagnostics** | **int** |  | [optional] 
**authorized_qo_s_information** | [**authorized_default_qos_t**](authorized_default_qos.md) \* |  | [optional] 
**subscribed_qo_s_information** | [**subscribed_default_qos_t**](subscribed_default_qos.md) \* |  | [optional] 
**authorized_session_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**subscribed_session_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**serving_cn_plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**m_apdu_session_information** | [**mapdu_session_information_t**](mapdu_session_information.md) \* |  | [optional] 
**enhanced_diagnostics** | [**list_t**](ran_nas_rel_cause.md) \* |  | [optional] 
**redundant_transmission_type** | [**redundant_transmission_type_t**](redundant_transmission_type.md) \* |  | [optional] 
**p_du_session_pair_id** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**cp_cio_t_optimisation_indicator** | **int** |  | [optional] 
**_5_gs_control_plane_only_indicator** | **int** |  | [optional] 
**small_data_rate_control_indicator** | **int** |  | [optional] 
**_5_glan_type_service** | [**model_5_glan_type_service_t**](model_5_glan_type_service.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


