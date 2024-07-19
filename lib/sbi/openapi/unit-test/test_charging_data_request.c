#ifndef charging_data_request_TEST
#define charging_data_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_data_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_data_request.h"
charging_data_request_t* instantiate_charging_data_request(int include_optional);

#include "test_nf_identification.c"
#include "test_one_time_event_type.c"
#include "test_pdu_session_charging_information.c"
#include "test_roaming_qbc_information.c"
#include "test_sms_charging_information.c"
#include "test_nef_charging_information.c"
#include "test_registration_charging_information.c"
#include "test_n2_connection_charging_information.c"
#include "test_location_reporting_charging_information.c"
#include "test_nspa_charging_information.c"
#include "test_nsm_charging_information.c"
#include "test_mm_tel_charging_information.c"
#include "test_ims_charging_information.c"
#include "test_edge_infrastructure_usage_charging_information.c"
#include "test_eas_deployment_charging_information.c"
#include "test_nef_charging_information.c"
#include "test_nef_charging_information.c"
#include "test_prose_charging_information.c"


charging_data_request_t* instantiate_charging_data_request(int include_optional) {
  charging_data_request_t* charging_data_request = NULL;
  if (include_optional) {
    charging_data_request = charging_data_request_create(
      "a",
      "0",
      0,
      "0",
       // false, not to have infinite recursion
      instantiate_nf_identification(0),
      "2013-10-20T19:20:30+01:00",
      0,
      1,
      1,
      null,
      "0",
      "a",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_pdu_session_charging_information(0),
       // false, not to have infinite recursion
      instantiate_roaming_qbc_information(0),
       // false, not to have infinite recursion
      instantiate_sms_charging_information(0),
       // false, not to have infinite recursion
      instantiate_nef_charging_information(0),
       // false, not to have infinite recursion
      instantiate_registration_charging_information(0),
       // false, not to have infinite recursion
      instantiate_n2_connection_charging_information(0),
       // false, not to have infinite recursion
      instantiate_location_reporting_charging_information(0),
       // false, not to have infinite recursion
      instantiate_nspa_charging_information(0),
       // false, not to have infinite recursion
      instantiate_nsm_charging_information(0),
       // false, not to have infinite recursion
      instantiate_mm_tel_charging_information(0),
       // false, not to have infinite recursion
      instantiate_ims_charging_information(0),
       // false, not to have infinite recursion
      instantiate_edge_infrastructure_usage_charging_information(0),
       // false, not to have infinite recursion
      instantiate_eas_deployment_charging_information(0),
       // false, not to have infinite recursion
      instantiate_nef_charging_information(0),
       // false, not to have infinite recursion
      instantiate_nef_charging_information(0),
       // false, not to have infinite recursion
      instantiate_prose_charging_information(0)
    );
  } else {
    charging_data_request = charging_data_request_create(
      "a",
      "0",
      0,
      "0",
      NULL,
      "2013-10-20T19:20:30+01:00",
      0,
      1,
      1,
      null,
      "0",
      "a",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return charging_data_request;
}


#ifdef charging_data_request_MAIN

void test_charging_data_request(int include_optional) {
    charging_data_request_t* charging_data_request_1 = instantiate_charging_data_request(include_optional);

	cJSON* jsoncharging_data_request_1 = charging_data_request_convertToJSON(charging_data_request_1);
	printf("charging_data_request :\n%s\n", cJSON_Print(jsoncharging_data_request_1));
	charging_data_request_t* charging_data_request_2 = charging_data_request_parseFromJSON(jsoncharging_data_request_1);
	cJSON* jsoncharging_data_request_2 = charging_data_request_convertToJSON(charging_data_request_2);
	printf("repeating charging_data_request:\n%s\n", cJSON_Print(jsoncharging_data_request_2));
}

int main() {
  test_charging_data_request(1);
  test_charging_data_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_data_request_MAIN
#endif // charging_data_request_TEST
