#ifndef pdu_session_information_TEST
#define pdu_session_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_information.h"
pdu_session_information_t* instantiate_pdu_session_information(int include_optional);

#include "test_network_slicing_info.c"
#include "test_plmn_id.c"
#include "test_serving_network_function_id.c"
#include "test_dnn_selection_mode.c"
#include "test_charging_characteristics_selection_mode.c"
#include "test_model_3_gppps_data_off_status.c"
#include "test_pdu_address.c"
#include "test_authorized_default_qos.c"
#include "test_subscribed_default_qos.c"
#include "test_ambr.c"
#include "test_ambr.c"
#include "test_plmn_id.c"
#include "test_mapdu_session_information.c"
#include "test_redundant_transmission_type.c"
#include "test_model_5_glan_type_service.c"


pdu_session_information_t* instantiate_pdu_session_information(int include_optional) {
  pdu_session_information_t* pdu_session_information = NULL;
  if (include_optional) {
    pdu_session_information = pdu_session_information_create(
       // false, not to have infinite recursion
      instantiate_network_slicing_info(0),
      0,
      nchf_convergedcharging_pdu_session_information__IPV4,
      nchf_convergedcharging_pdu_session_information__SSC_MODE_1,
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_serving_network_function_id(0),
      nchf_convergedcharging_pdu_session_information__NR,
      nchf_convergedcharging_pdu_session_information__NR,
      "0",
      null,
      "a",
      null,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      null,
      1,
       // false, not to have infinite recursion
      instantiate_pdu_address(0),
      56,
       // false, not to have infinite recursion
      instantiate_authorized_default_qos(0),
       // false, not to have infinite recursion
      instantiate_subscribed_default_qos(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_mapdu_session_information(0),
      list_createList(),
      null,
      0,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_model_5_glan_type_service(0)
    );
  } else {
    pdu_session_information = pdu_session_information_create(
      NULL,
      0,
      nchf_convergedcharging_pdu_session_information__IPV4,
      nchf_convergedcharging_pdu_session_information__SSC_MODE_1,
      NULL,
      NULL,
      nchf_convergedcharging_pdu_session_information__NR,
      nchf_convergedcharging_pdu_session_information__NR,
      "0",
      null,
      "a",
      null,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      null,
      1,
      NULL,
      56,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      null,
      0,
      1,
      1,
      1,
      NULL
    );
  }

  return pdu_session_information;
}


#ifdef pdu_session_information_MAIN

void test_pdu_session_information(int include_optional) {
    pdu_session_information_t* pdu_session_information_1 = instantiate_pdu_session_information(include_optional);

	cJSON* jsonpdu_session_information_1 = pdu_session_information_convertToJSON(pdu_session_information_1);
	printf("pdu_session_information :\n%s\n", cJSON_Print(jsonpdu_session_information_1));
	pdu_session_information_t* pdu_session_information_2 = pdu_session_information_parseFromJSON(jsonpdu_session_information_1);
	cJSON* jsonpdu_session_information_2 = pdu_session_information_convertToJSON(pdu_session_information_2);
	printf("repeating pdu_session_information:\n%s\n", cJSON_Print(jsonpdu_session_information_2));
}

int main() {
  test_pdu_session_information(1);
  test_pdu_session_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_information_MAIN
#endif // pdu_session_information_TEST
