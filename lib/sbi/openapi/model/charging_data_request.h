/*
 * charging_data_request.h
 *
 * 
 */

#ifndef _OpenAPI_charging_data_request_H_
#define _OpenAPI_charging_data_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "eas_deployment_charging_information.h"
#include "edge_infrastructure_usage_charging_information.h"
#include "ims_charging_information.h"
#include "location_reporting_charging_information.h"
#include "mm_tel_charging_information.h"
#include "multiple_unit_usage.h"
#include "n2_connection_charging_information.h"
#include "nef_charging_information.h"
#include "nf_identification.h"
#include "nsm_charging_information.h"
#include "nspa_charging_information.h"
#include "one_time_event_type.h"
#include "pdu_session_charging_information.h"
#include "prose_charging_information.h"
#include "registration_charging_information.h"
#include "roaming_qbc_information.h"
#include "sms_charging_information.h"
#include "trigger.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_charging_data_request_s OpenAPI_charging_data_request_t;
typedef struct OpenAPI_charging_data_request_s {
    char *subscriber_identifier;
    char *tenant_identifier;
    bool is_charging_id;
    int charging_id;
    char *mn_s_consumer_identifier;
    struct OpenAPI_nf_identification_s *nf_consumer_identification;
    char *invocation_time_stamp;
    int invocation_sequence_number;
    bool is_retransmission_indicator;
    int retransmission_indicator;
    bool is_one_time_event;
    int one_time_event;
    struct OpenAPI_one_time_event_type_s *one_time_event_type;
    char *notify_uri;
    char *supported_features;
    char *service_specification_info;
    OpenAPI_list_t *multiple_unit_usage;
    OpenAPI_list_t *triggers;
    char *easid;
    char *ednid;
    char *e_as_provider_identifier;
    struct OpenAPI_pdu_session_charging_information_s *p_du_session_charging_information;
    struct OpenAPI_roaming_qbc_information_s *roaming_qbc_information;
    struct OpenAPI_sms_charging_information_s *s_ms_charging_information;
    struct OpenAPI_nef_charging_information_s *n_ef_charging_information;
    struct OpenAPI_registration_charging_information_s *registration_charging_information;
    struct OpenAPI_n2_connection_charging_information_s *n2_connection_charging_information;
    struct OpenAPI_location_reporting_charging_information_s *location_reporting_charging_information;
    struct OpenAPI_nspa_charging_information_s *n_spa_charging_information;
    struct OpenAPI_nsm_charging_information_s *n_sm_charging_information;
    struct OpenAPI_mm_tel_charging_information_s *m_m_tel_charging_information;
    struct OpenAPI_ims_charging_information_s *i_ms_charging_information;
    struct OpenAPI_edge_infrastructure_usage_charging_information_s *edge_infrastructure_usage_charging_information;
    struct OpenAPI_eas_deployment_charging_information_s *e_as_deployment_charging_information;
    struct OpenAPI_nef_charging_information_s *direct_edge_enabling_service_charging_information;
    struct OpenAPI_nef_charging_information_s *exposed_edge_enabling_service_charging_information;
    struct OpenAPI_prose_charging_information_s *pro_se_charging_information;
} OpenAPI_charging_data_request_t;

OpenAPI_charging_data_request_t *OpenAPI_charging_data_request_create(
    char *subscriber_identifier,
    char *tenant_identifier,
    bool is_charging_id,
    int charging_id,
    char *mn_s_consumer_identifier,
    OpenAPI_nf_identification_t *nf_consumer_identification,
    char *invocation_time_stamp,
    int invocation_sequence_number,
    bool is_retransmission_indicator,
    int retransmission_indicator,
    bool is_one_time_event,
    int one_time_event,
    OpenAPI_one_time_event_type_t *one_time_event_type,
    char *notify_uri,
    char *supported_features,
    char *service_specification_info,
    OpenAPI_list_t *multiple_unit_usage,
    OpenAPI_list_t *triggers,
    char *easid,
    char *ednid,
    char *e_as_provider_identifier,
    OpenAPI_pdu_session_charging_information_t *p_du_session_charging_information,
    OpenAPI_roaming_qbc_information_t *roaming_qbc_information,
    OpenAPI_sms_charging_information_t *s_ms_charging_information,
    OpenAPI_nef_charging_information_t *n_ef_charging_information,
    OpenAPI_registration_charging_information_t *registration_charging_information,
    OpenAPI_n2_connection_charging_information_t *n2_connection_charging_information,
    OpenAPI_location_reporting_charging_information_t *location_reporting_charging_information,
    OpenAPI_nspa_charging_information_t *n_spa_charging_information,
    OpenAPI_nsm_charging_information_t *n_sm_charging_information,
    OpenAPI_mm_tel_charging_information_t *m_m_tel_charging_information,
    OpenAPI_ims_charging_information_t *i_ms_charging_information,
    OpenAPI_edge_infrastructure_usage_charging_information_t *edge_infrastructure_usage_charging_information,
    OpenAPI_eas_deployment_charging_information_t *e_as_deployment_charging_information,
    OpenAPI_nef_charging_information_t *direct_edge_enabling_service_charging_information,
    OpenAPI_nef_charging_information_t *exposed_edge_enabling_service_charging_information,
    OpenAPI_prose_charging_information_t *pro_se_charging_information
);
void OpenAPI_charging_data_request_free(OpenAPI_charging_data_request_t *charging_data_request);
OpenAPI_charging_data_request_t *OpenAPI_charging_data_request_parseFromJSON(cJSON *charging_data_requestJSON);
cJSON *OpenAPI_charging_data_request_convertToJSON(OpenAPI_charging_data_request_t *charging_data_request);
OpenAPI_charging_data_request_t *OpenAPI_charging_data_request_copy(OpenAPI_charging_data_request_t *dst, OpenAPI_charging_data_request_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_charging_data_request_H_ */

