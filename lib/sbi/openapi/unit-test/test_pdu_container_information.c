#ifndef pdu_container_information_TEST
#define pdu_container_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_container_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_container_information.h"
pdu_container_information_t* instantiate_pdu_container_information(int include_optional);

#include "test_qos_data.c"
#include "test_qos_characteristics.c"
#include "test_user_location.c"
#include "test_model_3_gppps_data_off_status.c"
#include "test_steering_mode.c"
#include "test_traffic_forwarding_way.c"


pdu_container_information_t* instantiate_pdu_container_information(int include_optional) {
  pdu_container_information_t* pdu_container_information = NULL;
  if (include_optional) {
    pdu_container_information = pdu_container_information_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_qos_data(0),
       // false, not to have infinite recursion
      instantiate_qos_characteristics(0),
      0,
      "0",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
      nchf_convergedcharging_pdu_container_information__NR,
      list_createList(),
      list_createList(),
      null,
      "0",
      "0",
      "0",
      nchf_convergedcharging_pdu_container_information__MPTCP,
       // false, not to have infinite recursion
      instantiate_steering_mode(0),
      null,
      list_createList()
    );
  } else {
    pdu_container_information = pdu_container_information_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      0,
      "0",
      NULL,
      "-08:00+1",
      nchf_convergedcharging_pdu_container_information__NR,
      list_createList(),
      list_createList(),
      null,
      "0",
      "0",
      "0",
      nchf_convergedcharging_pdu_container_information__MPTCP,
      NULL,
      null,
      list_createList()
    );
  }

  return pdu_container_information;
}


#ifdef pdu_container_information_MAIN

void test_pdu_container_information(int include_optional) {
    pdu_container_information_t* pdu_container_information_1 = instantiate_pdu_container_information(include_optional);

	cJSON* jsonpdu_container_information_1 = pdu_container_information_convertToJSON(pdu_container_information_1);
	printf("pdu_container_information :\n%s\n", cJSON_Print(jsonpdu_container_information_1));
	pdu_container_information_t* pdu_container_information_2 = pdu_container_information_parseFromJSON(jsonpdu_container_information_1);
	cJSON* jsonpdu_container_information_2 = pdu_container_information_convertToJSON(pdu_container_information_2);
	printf("repeating pdu_container_information:\n%s\n", cJSON_Print(jsonpdu_container_information_2));
}

int main() {
  test_pdu_container_information(1);
  test_pdu_container_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_container_information_MAIN
#endif // pdu_container_information_TEST
