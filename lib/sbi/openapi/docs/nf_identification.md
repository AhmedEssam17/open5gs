# nf_identification_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**n_f_name** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**n_fipv4_address** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**n_fipv6_address** | **char \*** | String identifying an IPv6 address formatted according to clause 4 of RFC5952. The mixed IPv4 IPv6 notation according to clause 5 of RFC5952 shall not be used.  | [optional] 
**n_fplmnid** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**node_functionality** | [**node_functionality_t**](node_functionality.md) \* |  | 
**n_f_fqdn** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


