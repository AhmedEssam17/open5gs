cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "nchf_convergedcharging")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/_3_gppps_data_off_status_any_of.c
    model/_chargingdata__charging_data_ref__update_post_400_response.c
    model/_chargingdata_post_400_response.c
    model/access_network_info_change.c
    model/access_token_err.c
    model/access_token_req.c
    model/access_transfer_information.c
    model/access_transfer_type.c
    model/access_transfer_type_any_of.c
    model/access_type.c
    model/access_type_rm.c
    model/addr_fqdn.c
    model/ambr.c
    model/announcement_information.c
    model/announcement_privacy_indicator.c
    model/announcement_privacy_indicator_any_of.c
    model/api_direction.c
    model/api_direction_any_of.c
    model/area.c
    model/arp.c
    model/atsss_capability.c
    model/authorized_default_qos.c
    model/called_identity_change.c
    model/cell_global_id.c
    model/charging_characteristics_selection_mode.c
    model/charging_characteristics_selection_mode_any_of.c
    model/charging_data_request.c
    model/charging_data_response.c
    model/charging_notify_request.c
    model/charging_notify_response.c
    model/class_identifier.c
    model/class_identifier_any_of.c
    model/core_network_type.c
    model/coverage_info.c
    model/delivery_report_requested.c
    model/delivery_report_requested_any_of.c
    model/direct_discovery_model.c
    model/direct_discovery_model_any_of.c
    model/dnn_selection_mode.c
    model/dnn_selection_mode_any_of.c
    model/early_media_description.c
    model/eas_deployment_charging_information.c
    model/ecgi.c
    model/edge_infrastructure_usage_charging_information.c
    model/eutra_location.c
    model/failure_handling.c
    model/failure_handling_any_of.c
    model/final_unit_action.c
    model/final_unit_action_any_of.c
    model/final_unit_indication.c
    model/gera_location.c
    model/global_ran_node_id.c
    model/gnb_id.c
    model/granted_unit.c
    model/hfc_node_id.c
    model/ims_address.c
    model/ims_charging_information.c
    model/ims_node_functionality.c
    model/ims_session_priority.c
    model/ims_session_priority_any_of.c
    model/inter_operator_identifier.c
    model/interface_type.c
    model/interface_type_any_of.c
    model/invalid_param.c
    model/invocation_result.c
    model/ip_addr.c
    model/isup_cause.c
    model/line_type.c
    model/location_area_id.c
    model/location_info.c
    model/location_reporting_charging_information.c
    model/ma_pdu_indication.c
    model/management_operation.c
    model/management_operation_any_of.c
    model/management_operation_status.c
    model/management_operation_status_any_of.c
    model/mapdu_session_information.c
    model/matching_direction.c
    model/matching_direction_any_of.c
    model/media_initiator_flag.c
    model/media_initiator_flag_any_of.c
    model/message_body.c
    model/message_class.c
    model/mico_mode_indication.c
    model/mico_mode_indication_any_of.c
    model/mm_tel_charging_information.c
    model/model_3_gppps_data_off_status.c
    model/model_5_glan_type_service.c
    model/multiple_qf_icontainer.c
    model/multiple_unit_information.c
    model/multiple_unit_usage.c
    model/n2_connection_charging_information.c
    model/n3ga_location.c
    model/ncgi.c
    model/nef_charging_information.c
    model/network_area_info.c
    model/network_slicing_info.c
    model/nf_identification.c
    model/nf_type.c
    model/ng_ap_cause.c
    model/nni_information.c
    model/nni_relationship_mode.c
    model/nni_relationship_mode_any_of.c
    model/nni_session_direction.c
    model/nni_session_direction_any_of.c
    model/nni_type.c
    model/nni_type_any_of.c
    model/node_functionality.c
    model/node_functionality_any_of.c
    model/notification_type.c
    model/notification_type_any_of.c
    model/nr_location.c
    model/nsi_load_level_info.c
    model/nsm_charging_information.c
    model/nspa_charging_information.c
    model/nspa_container_information.c
    model/nssai_map.c
    model/null_value.c
    model/number_average.c
    model/one_time_event_type.c
    model/one_time_event_type_any_of.c
    model/originator_info.c
    model/originator_party_type.c
    model/originator_party_type_any_of.c
    model/partial_record_method.c
    model/partial_record_method_any_of.c
    model/participant_action_type.c
    model/participant_action_type_any_of.c
    model/pc5_container_information.c
    model/pc5_data_container.c
    model/pdu_address.c
    model/pdu_container_information.c
    model/pdu_session_charging_information.c
    model/pdu_session_information.c
    model/pdu_session_type.c
    model/pfi_container_information.c
    model/play_to_party.c
    model/play_to_party_any_of.c
    model/plmn_id.c
    model/plmn_id_nid.c
    model/preemption_capability.c
    model/preemption_vulnerability.c
    model/presence_info.c
    model/presence_state.c
    model/problem_details.c
    model/prose_charging_information.c
    model/prose_event_type.c
    model/prose_event_type_any_of.c
    model/prose_functionality.c
    model/prose_functionality_any_of.c
    model/ps_cell_information.c
    model/qfi_container_information.c
    model/qos_characteristics.c
    model/qos_data.c
    model/qos_flows_usage_report.c
    model/qos_monitoring_report.c
    model/qos_resource_type.c
    model/quota_consumption_indicator.c
    model/quota_consumption_indicator_any_of.c
    model/quota_management_indicator.c
    model/quota_management_indicator_any_of.c
    model/radio_parameter_set_info.c
    model/radio_resources_id.c
    model/radio_resources_id_any_of.c
    model/ran_nas_rel_cause.c
    model/ran_secondary_rat_usage_report.c
    model/range_class.c
    model/range_class_any_of.c
    model/rat_freq_information.c
    model/rat_type.c
    model/reauthorization_details.c
    model/recipient_address.c
    model/recipient_info.c
    model/redirect_address_type.c
    model/redirect_address_type_any_of.c
    model/redirect_response.c
    model/redirect_server.c
    model/redundant_transmission_type.c
    model/redundant_transmission_type_any_of.c
    model/registration_charging_information.c
    model/registration_message_type.c
    model/registration_message_type_any_of.c
    model/reply_path_requested.c
    model/reply_path_requested_any_of.c
    model/requested_unit.c
    model/resource_usage.c
    model/restriction_type.c
    model/result_code.c
    model/result_code_any_of.c
    model/roamer_in_out.c
    model/roamer_in_out_any_of.c
    model/roaming_charging_profile.c
    model/roaming_qbc_information.c
    model/role_of_ims_node.c
    model/role_of_ims_node_any_of.c
    model/role_of_ue.c
    model/role_of_ue_any_of.c
    model/routing_area_id.c
    model/sdp_media_component.c
    model/sdp_time_stamps.c
    model/sdp_type.c
    model/sdp_type_any_of.c
    model/server_capabilities.c
    model/service_area_id.c
    model/service_area_restriction.c
    model/service_experience_info.c
    model/service_experience_type.c
    model/service_experience_type_any_of.c
    model/service_profile_charging_information.c
    model/serving_network_function_id.c
    model/serving_node_address.c
    model/session_failover.c
    model/session_failover_any_of.c
    model/sip_event_type.c
    model/sm_address_domain.c
    model/sm_address_info.c
    model/sm_address_type.c
    model/sm_address_type_any_of.c
    model/sm_addressee_type.c
    model/sm_addressee_type_any_of.c
    model/sm_interface.c
    model/sm_message_type.c
    model/sm_message_type_any_of.c
    model/sm_priority.c
    model/sm_priority_any_of.c
    model/sm_service_type.c
    model/sm_service_type_any_of.c
    model/sms_charging_information.c
    model/sms_indication.c
    model/sms_indication_any_of.c
    model/snssai.c
    model/ssc_mode.c
    model/steer_mode_indicator.c
    model/steer_mode_value.c
    model/steering_functionality.c
    model/steering_mode.c
    model/subscribed_default_qos.c
    model/supplementary_service.c
    model/supplementary_service_mode.c
    model/supplementary_service_mode_any_of.c
    model/supplementary_service_type.c
    model/supplementary_service_type_any_of.c
    model/svc_experience.c
    model/tad_identifier.c
    model/tad_identifier_any_of.c
    model/tai.c
    model/threshold_level.c
    model/threshold_value.c
    model/throughput.c
    model/time_window.c
    model/tnap_id.c
    model/traffic_forwarding_way.c
    model/traffic_forwarding_way_any_of.c
    model/transmitter_info.c
    model/transport_protocol.c
    model/trigger.c
    model/trigger_category.c
    model/trigger_category_any_of.c
    model/trigger_type.c
    model/trigger_type_any_of.c
    model/trunk_group_id.c
    model/twap_id.c
    model/ue_transfer_type.c
    model/ue_transfer_type_any_of.c
    model/upf_information.c
    model/used_unit_container.c
    model/user_information.c
    model/user_location.c
    model/utra_location.c
    model/variable_part.c
    model/variable_part_type.c
    model/variable_part_type_any_of.c
    api/DefaultAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/_3_gppps_data_off_status_any_of.h
    model/_chargingdata__charging_data_ref__update_post_400_response.h
    model/_chargingdata_post_400_response.h
    model/access_network_info_change.h
    model/access_token_err.h
    model/access_token_req.h
    model/access_transfer_information.h
    model/access_transfer_type.h
    model/access_transfer_type_any_of.h
    model/access_type.h
    model/access_type_rm.h
    model/addr_fqdn.h
    model/ambr.h
    model/announcement_information.h
    model/announcement_privacy_indicator.h
    model/announcement_privacy_indicator_any_of.h
    model/api_direction.h
    model/api_direction_any_of.h
    model/area.h
    model/arp.h
    model/atsss_capability.h
    model/authorized_default_qos.h
    model/called_identity_change.h
    model/cell_global_id.h
    model/charging_characteristics_selection_mode.h
    model/charging_characteristics_selection_mode_any_of.h
    model/charging_data_request.h
    model/charging_data_response.h
    model/charging_notify_request.h
    model/charging_notify_response.h
    model/class_identifier.h
    model/class_identifier_any_of.h
    model/core_network_type.h
    model/coverage_info.h
    model/delivery_report_requested.h
    model/delivery_report_requested_any_of.h
    model/direct_discovery_model.h
    model/direct_discovery_model_any_of.h
    model/dnn_selection_mode.h
    model/dnn_selection_mode_any_of.h
    model/early_media_description.h
    model/eas_deployment_charging_information.h
    model/ecgi.h
    model/edge_infrastructure_usage_charging_information.h
    model/eutra_location.h
    model/failure_handling.h
    model/failure_handling_any_of.h
    model/final_unit_action.h
    model/final_unit_action_any_of.h
    model/final_unit_indication.h
    model/gera_location.h
    model/global_ran_node_id.h
    model/gnb_id.h
    model/granted_unit.h
    model/hfc_node_id.h
    model/ims_address.h
    model/ims_charging_information.h
    model/ims_node_functionality.h
    model/ims_session_priority.h
    model/ims_session_priority_any_of.h
    model/inter_operator_identifier.h
    model/interface_type.h
    model/interface_type_any_of.h
    model/invalid_param.h
    model/invocation_result.h
    model/ip_addr.h
    model/isup_cause.h
    model/line_type.h
    model/location_area_id.h
    model/location_info.h
    model/location_reporting_charging_information.h
    model/ma_pdu_indication.h
    model/management_operation.h
    model/management_operation_any_of.h
    model/management_operation_status.h
    model/management_operation_status_any_of.h
    model/mapdu_session_information.h
    model/matching_direction.h
    model/matching_direction_any_of.h
    model/media_initiator_flag.h
    model/media_initiator_flag_any_of.h
    model/message_body.h
    model/message_class.h
    model/mico_mode_indication.h
    model/mico_mode_indication_any_of.h
    model/mm_tel_charging_information.h
    model/model_3_gppps_data_off_status.h
    model/model_5_glan_type_service.h
    model/multiple_qf_icontainer.h
    model/multiple_unit_information.h
    model/multiple_unit_usage.h
    model/n2_connection_charging_information.h
    model/n3ga_location.h
    model/ncgi.h
    model/nef_charging_information.h
    model/network_area_info.h
    model/network_slicing_info.h
    model/nf_identification.h
    model/nf_type.h
    model/ng_ap_cause.h
    model/nni_information.h
    model/nni_relationship_mode.h
    model/nni_relationship_mode_any_of.h
    model/nni_session_direction.h
    model/nni_session_direction_any_of.h
    model/nni_type.h
    model/nni_type_any_of.h
    model/node_functionality.h
    model/node_functionality_any_of.h
    model/notification_type.h
    model/notification_type_any_of.h
    model/nr_location.h
    model/nsi_load_level_info.h
    model/nsm_charging_information.h
    model/nspa_charging_information.h
    model/nspa_container_information.h
    model/nssai_map.h
    model/null_value.h
    model/number_average.h
    model/one_time_event_type.h
    model/one_time_event_type_any_of.h
    model/originator_info.h
    model/originator_party_type.h
    model/originator_party_type_any_of.h
    model/partial_record_method.h
    model/partial_record_method_any_of.h
    model/participant_action_type.h
    model/participant_action_type_any_of.h
    model/pc5_container_information.h
    model/pc5_data_container.h
    model/pdu_address.h
    model/pdu_container_information.h
    model/pdu_session_charging_information.h
    model/pdu_session_information.h
    model/pdu_session_type.h
    model/pfi_container_information.h
    model/play_to_party.h
    model/play_to_party_any_of.h
    model/plmn_id.h
    model/plmn_id_nid.h
    model/preemption_capability.h
    model/preemption_vulnerability.h
    model/presence_info.h
    model/presence_state.h
    model/problem_details.h
    model/prose_charging_information.h
    model/prose_event_type.h
    model/prose_event_type_any_of.h
    model/prose_functionality.h
    model/prose_functionality_any_of.h
    model/ps_cell_information.h
    model/qfi_container_information.h
    model/qos_characteristics.h
    model/qos_data.h
    model/qos_flows_usage_report.h
    model/qos_monitoring_report.h
    model/qos_resource_type.h
    model/quota_consumption_indicator.h
    model/quota_consumption_indicator_any_of.h
    model/quota_management_indicator.h
    model/quota_management_indicator_any_of.h
    model/radio_parameter_set_info.h
    model/radio_resources_id.h
    model/radio_resources_id_any_of.h
    model/ran_nas_rel_cause.h
    model/ran_secondary_rat_usage_report.h
    model/range_class.h
    model/range_class_any_of.h
    model/rat_freq_information.h
    model/rat_type.h
    model/reauthorization_details.h
    model/recipient_address.h
    model/recipient_info.h
    model/redirect_address_type.h
    model/redirect_address_type_any_of.h
    model/redirect_response.h
    model/redirect_server.h
    model/redundant_transmission_type.h
    model/redundant_transmission_type_any_of.h
    model/registration_charging_information.h
    model/registration_message_type.h
    model/registration_message_type_any_of.h
    model/reply_path_requested.h
    model/reply_path_requested_any_of.h
    model/requested_unit.h
    model/resource_usage.h
    model/restriction_type.h
    model/result_code.h
    model/result_code_any_of.h
    model/roamer_in_out.h
    model/roamer_in_out_any_of.h
    model/roaming_charging_profile.h
    model/roaming_qbc_information.h
    model/role_of_ims_node.h
    model/role_of_ims_node_any_of.h
    model/role_of_ue.h
    model/role_of_ue_any_of.h
    model/routing_area_id.h
    model/sdp_media_component.h
    model/sdp_time_stamps.h
    model/sdp_type.h
    model/sdp_type_any_of.h
    model/server_capabilities.h
    model/service_area_id.h
    model/service_area_restriction.h
    model/service_experience_info.h
    model/service_experience_type.h
    model/service_experience_type_any_of.h
    model/service_profile_charging_information.h
    model/serving_network_function_id.h
    model/serving_node_address.h
    model/session_failover.h
    model/session_failover_any_of.h
    model/sip_event_type.h
    model/sm_address_domain.h
    model/sm_address_info.h
    model/sm_address_type.h
    model/sm_address_type_any_of.h
    model/sm_addressee_type.h
    model/sm_addressee_type_any_of.h
    model/sm_interface.h
    model/sm_message_type.h
    model/sm_message_type_any_of.h
    model/sm_priority.h
    model/sm_priority_any_of.h
    model/sm_service_type.h
    model/sm_service_type_any_of.h
    model/sms_charging_information.h
    model/sms_indication.h
    model/sms_indication_any_of.h
    model/snssai.h
    model/ssc_mode.h
    model/steer_mode_indicator.h
    model/steer_mode_value.h
    model/steering_functionality.h
    model/steering_mode.h
    model/subscribed_default_qos.h
    model/supplementary_service.h
    model/supplementary_service_mode.h
    model/supplementary_service_mode_any_of.h
    model/supplementary_service_type.h
    model/supplementary_service_type_any_of.h
    model/svc_experience.h
    model/tad_identifier.h
    model/tad_identifier_any_of.h
    model/tai.h
    model/threshold_level.h
    model/threshold_value.h
    model/throughput.h
    model/time_window.h
    model/tnap_id.h
    model/traffic_forwarding_way.h
    model/traffic_forwarding_way_any_of.h
    model/transmitter_info.h
    model/transport_protocol.h
    model/trigger.h
    model/trigger_category.h
    model/trigger_category_any_of.h
    model/trigger_type.h
    model/trigger_type_any_of.h
    model/trunk_group_id.h
    model/twap_id.h
    model/ue_transfer_type.h
    model/ue_transfer_type_any_of.h
    model/upf_information.h
    model/used_unit_container.h
    model/user_information.h
    model/user_location.h
    model/utra_location.h
    model/variable_part.h
    model/variable_part_type.h
    model/variable_part_type_any_of.h
    api/DefaultAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-DefaultAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
