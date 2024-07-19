#ifndef charging_data_response_TEST
#define charging_data_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_data_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_data_response.h"
charging_data_response_t* instantiate_charging_data_response(int include_optional);

#include "test_invocation_result.c"
#include "test_session_failover.c"
#include "test_pdu_session_charging_information.c"
#include "test_roaming_qbc_information.c"
#include "test_location_reporting_charging_information.c"


charging_data_response_t* instantiate_charging_data_response(int include_optional) {
  charging_data_response_t* charging_data_response = NULL;
  if (include_optional) {
    charging_data_response = charging_data_response_create(
      "2013-10-20T19:20:30+01:00",
      0,
       // false, not to have infinite recursion
      instantiate_invocation_result(0),
      null,
      "a",
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_pdu_session_charging_information(0),
       // false, not to have infinite recursion
      instantiate_roaming_qbc_information(0),
       // false, not to have infinite recursion
      instantiate_location_reporting_charging_information(0)
    );
  } else {
    charging_data_response = charging_data_response_create(
      "2013-10-20T19:20:30+01:00",
      0,
      NULL,
      null,
      "a",
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL
    );
  }

  return charging_data_response;
}


#ifdef charging_data_response_MAIN

void test_charging_data_response(int include_optional) {
    charging_data_response_t* charging_data_response_1 = instantiate_charging_data_response(include_optional);

	cJSON* jsoncharging_data_response_1 = charging_data_response_convertToJSON(charging_data_response_1);
	printf("charging_data_response :\n%s\n", cJSON_Print(jsoncharging_data_response_1));
	charging_data_response_t* charging_data_response_2 = charging_data_response_parseFromJSON(jsoncharging_data_response_1);
	cJSON* jsoncharging_data_response_2 = charging_data_response_convertToJSON(charging_data_response_2);
	printf("repeating charging_data_response:\n%s\n", cJSON_Print(jsoncharging_data_response_2));
}

int main() {
  test_charging_data_response(1);
  test_charging_data_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_data_response_MAIN
#endif // charging_data_response_TEST
