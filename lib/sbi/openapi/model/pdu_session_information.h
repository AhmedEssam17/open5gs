/*
 * pdu_session_information.h
 *
 * 
 */

#ifndef _OpenAPI_pdu_session_information_H_
#define _OpenAPI_pdu_session_information_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "ambr.h"
#include "authorized_default_qos.h"
#include "charging_characteristics_selection_mode.h"
#include "dnn_selection_mode.h"
#include "mapdu_session_information.h"
#include "model_3_gppps_data_off_status.h"
#include "model_5_glan_type_service.h"
#include "network_slicing_info.h"
#include "pdu_address.h"
#include "pdu_session_type.h"
#include "plmn_id.h"
#include "ran_nas_rel_cause.h"
#include "rat_type.h"
#include "redundant_transmission_type.h"
#include "serving_network_function_id.h"
#include "ssc_mode.h"
#include "subscribed_default_qos.h"
#include "dnn_selection_mode_any_of.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_pdu_session_information_s OpenAPI_pdu_session_information_t;
typedef struct OpenAPI_pdu_session_information_s {
    struct OpenAPI_network_slicing_info_s *network_slicing_info;
    int pdu_session_id;
    OpenAPI_pdu_session_type_e pdu_type;
    OpenAPI_ssc_mode_e ssc_mode;
    struct OpenAPI_plmn_id_s *h_plmn_id;
    struct OpenAPI_serving_network_function_id_s *serving_network_function_id;
    OpenAPI_rat_type_e rat_type;
    OpenAPI_rat_type_e m_apdu_non3_gpprat_type;
    char *dnn_id;
    struct OpenAPI_dnn_selection_mode_s *dnn_selection_mode;
    char *charging_characteristics;
    struct OpenAPI_charging_characteristics_selection_mode_s *charging_characteristics_selection_mode;
    char *start_time;
    char *stop_time;
    struct OpenAPI_model_3_gppps_data_off_status_s *_3gpp_ps_data_off_status;
    bool is_session_stop_indicator;
    int session_stop_indicator;
    struct OpenAPI_pdu_address_s *pdu_address;
    bool is_diagnostics;
    int diagnostics;
    struct OpenAPI_authorized_default_qos_s *authorized_qo_s_information;
    struct OpenAPI_subscribed_default_qos_s *subscribed_qo_s_information;
    struct OpenAPI_ambr_s *authorized_session_ambr;
    struct OpenAPI_ambr_s *subscribed_session_ambr;
    struct OpenAPI_plmn_id_s *serving_cn_plmn_id;
    struct OpenAPI_mapdu_session_information_s *m_apdu_session_information;
    OpenAPI_list_t *enhanced_diagnostics;
    struct OpenAPI_redundant_transmission_type_s *redundant_transmission_type;
    bool is_p_du_session_pair_id;
    int p_du_session_pair_id;
    bool is_cp_cio_t_optimisation_indicator;
    int cp_cio_t_optimisation_indicator;
    bool is__5_gs_control_plane_only_indicator;
    int _5_gs_control_plane_only_indicator;
    bool is_small_data_rate_control_indicator;
    int small_data_rate_control_indicator;
    struct OpenAPI_model_5_glan_type_service_s *_5_glan_type_service;
} OpenAPI_pdu_session_information_t;

OpenAPI_pdu_session_information_t *OpenAPI_pdu_session_information_create(
    OpenAPI_network_slicing_info_t *network_slicing_info,
    int pdu_session_id,
    OpenAPI_pdu_session_type_e pdu_type,
    OpenAPI_ssc_mode_e ssc_mode,
    OpenAPI_plmn_id_t *h_plmn_id,
    OpenAPI_serving_network_function_id_t *serving_network_function_id,
    OpenAPI_rat_type_e rat_type,
    OpenAPI_rat_type_e m_apdu_non3_gpprat_type,
    char *dnn_id,
    OpenAPI_dnn_selection_mode_t *dnn_selection_mode,
    char *charging_characteristics,
    OpenAPI_charging_characteristics_selection_mode_t *charging_characteristics_selection_mode,
    char *start_time,
    char *stop_time,
    OpenAPI_model_3_gppps_data_off_status_t *_3gpp_ps_data_off_status,
    bool is_session_stop_indicator,
    int session_stop_indicator,
    OpenAPI_pdu_address_t *pdu_address,
    bool is_diagnostics,
    int diagnostics,
    OpenAPI_authorized_default_qos_t *authorized_qo_s_information,
    OpenAPI_subscribed_default_qos_t *subscribed_qo_s_information,
    OpenAPI_ambr_t *authorized_session_ambr,
    OpenAPI_ambr_t *subscribed_session_ambr,
    OpenAPI_plmn_id_t *serving_cn_plmn_id,
    OpenAPI_mapdu_session_information_t *m_apdu_session_information,
    OpenAPI_list_t *enhanced_diagnostics,
    OpenAPI_redundant_transmission_type_t *redundant_transmission_type,
    bool is_p_du_session_pair_id,
    int p_du_session_pair_id,
    bool is_cp_cio_t_optimisation_indicator,
    int cp_cio_t_optimisation_indicator,
    bool is__5_gs_control_plane_only_indicator,
    int _5_gs_control_plane_only_indicator,
    bool is_small_data_rate_control_indicator,
    int small_data_rate_control_indicator,
    OpenAPI_model_5_glan_type_service_t *_5_glan_type_service
);
void OpenAPI_pdu_session_information_free(OpenAPI_pdu_session_information_t *pdu_session_information);
OpenAPI_pdu_session_information_t *OpenAPI_pdu_session_information_parseFromJSON(cJSON *pdu_session_informationJSON);
cJSON *OpenAPI_pdu_session_information_convertToJSON(OpenAPI_pdu_session_information_t *pdu_session_information);
OpenAPI_pdu_session_information_t *OpenAPI_pdu_session_information_copy(OpenAPI_pdu_session_information_t *dst, OpenAPI_pdu_session_information_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_pdu_session_information_H_ */

