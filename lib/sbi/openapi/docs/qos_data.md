# qos_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**qos_id** | **char \*** | Univocally identifies the QoS control policy data within a PDU session. | 
**_5qi** | **int** | Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255.  | [optional] 
**maxbr_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**maxbr_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**gbr_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**gbr_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**arp** | [**arp_t**](arp.md) \* |  | [optional] 
**qnc** | **int** | Indicates whether notifications are requested from 3GPP NG-RAN when the GFBR can no longer (or again) be guaranteed for a QoS Flow during the lifetime of the QoS Flow.  | [optional] 
**priority_level** | **int** | This data type is defined in the same way as the &#39;5QiPriorityLevel&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**aver_window** | **int** | This data type is defined in the same way as the &#39;AverWindow&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] [default to 2000]
**max_data_burst_vol** | **int** | This data type is defined in the same way as the &#39;MaxDataBurstVol&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**reflective_qos** | **int** | Indicates whether the QoS information is reflective for the corresponding service data flow. | [optional] 
**sharing_key_dl** | **char \*** | Indicates, by containing the same value, what PCC rules may share resource in downlink direction. | [optional] 
**sharing_key_ul** | **char \*** | Indicates, by containing the same value, what PCC rules may share resource in uplink direction. | [optional] 
**max_packet_loss_rate_dl** | **int** | This data type is defined in the same way as the &#39;PacketLossRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**max_packet_loss_rate_ul** | **int** | This data type is defined in the same way as the &#39;PacketLossRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**def_qos_flow_indication** | **int** | Indicates that the dynamic PCC rule shall always have its binding with the QoS Flow associated with the default QoS rule | [optional] 
**ext_max_data_burst_vol** | **int** | This data type is defined in the same way as the &#39;ExtMaxDataBurstVol&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**packet_delay_budget** | **int** | Unsigned integer indicating Packet Delay Budget (see clauses 5.7.3.4 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds.  | [optional] 
**packet_error_rate** | **char \*** | String representing Packet Error Rate (see clause 5.7.3.5 and 5.7.4 of 3GPP TS 23.501, expressed as a \&quot;scalar x 10-k\&quot; where the scalar and the exponent k are each encoded as one decimal digit.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


