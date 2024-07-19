# prose_charging_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**announcing_plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**announcing_ue_hplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**announcing_ue_vplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**monitoring_ue_hplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**monitoring_ue_vplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**discoverer_ue_hplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**discoverer_ue_vplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**discoveree_ue_hplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**discoveree_ue_vplmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**monitored_plmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**prose_application_id** | **char \*** |  | [optional] 
**application_id** | **char \*** |  | [optional] 
**application_specific_data_list** | **list_t \*** |  | [optional] 
**prose_functionality** | [**prose_functionality_t**](prose_functionality.md) \* |  | [optional] 
**prose_event_type** | [**prose_event_type_t**](prose_event_type.md) \* |  | [optional] 
**direct_discovery_model** | [**direct_discovery_model_t**](direct_discovery_model.md) \* |  | [optional] 
**validity_period** | **int** |  | [optional] 
**role_of_ue** | [**role_of_ue_t**](role_of_ue.md) \* |  | [optional] 
**prose_request_timestamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**p_c3_protocol_cause** | **int** |  | [optional] 
**monitoring_ue_identifier** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**requested_plmn_identifier** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**time_window** | **int** |  | [optional] 
**range_class** | [**range_class_t**](range_class.md) \* |  | [optional] 
**proximity_alert_indication** | **int** |  | [optional] 
**proximity_alert_timestamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**proximity_cancellation_timestamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**relay_ip_address** | [**ip_addr_t**](ip_addr.md) \* |  | [optional] 
**prose_ueto_network_relay_ueid** | **char \*** |  | [optional] 
**prose_destination_layer2_id** | **char \*** |  | [optional] 
**p_fi_container_information** | [**list_t**](pfi_container_information.md) \* |  | [optional] 
**transmission_data_container** | [**list_t**](pc5_data_container.md) \* |  | [optional] 
**reception_data_container** | [**list_t**](pc5_data_container.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


