#ifndef _chargingdata__charging_data_ref__update_post_400_response_TEST
#define _chargingdata__charging_data_ref__update_post_400_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _chargingdata__charging_data_ref__update_post_400_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_chargingdata__charging_data_ref__update_post_400_response.h"
_chargingdata__charging_data_ref__update_post_400_response_t* instantiate__chargingdata__charging_data_ref__update_post_400_response(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"
#include "test_invocation_result.c"
#include "test_session_failover.c"
#include "test_pdu_session_charging_information.c"
#include "test_roaming_qbc_information.c"
#include "test_location_reporting_charging_information.c"


_chargingdata__charging_data_ref__update_post_400_response_t* instantiate__chargingdata__charging_data_ref__update_post_400_response(int include_optional) {
  _chargingdata__charging_data_ref__update_post_400_response_t* _chargingdata__charging_data_ref__update_post_400_response = NULL;
  if (include_optional) {
    _chargingdata__charging_data_ref__update_post_400_response = _chargingdata__charging_data_ref__update_post_400_response_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_access_token_err(0),
       // false, not to have infinite recursion
      instantiate_access_token_req(0),
      "a",
      "2013-10-20T19:20:30+01:00",
      0,
       // false, not to have infinite recursion
      instantiate_invocation_result(0),
      null,
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
    _chargingdata__charging_data_ref__update_post_400_response = _chargingdata__charging_data_ref__update_post_400_response_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
      NULL,
      NULL,
      "a",
      "2013-10-20T19:20:30+01:00",
      0,
      NULL,
      null,
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL
    );
  }

  return _chargingdata__charging_data_ref__update_post_400_response;
}


#ifdef _chargingdata__charging_data_ref__update_post_400_response_MAIN

void test__chargingdata__charging_data_ref__update_post_400_response(int include_optional) {
    _chargingdata__charging_data_ref__update_post_400_response_t* _chargingdata__charging_data_ref__update_post_400_response_1 = instantiate__chargingdata__charging_data_ref__update_post_400_response(include_optional);

	cJSON* json_chargingdata__charging_data_ref__update_post_400_response_1 = _chargingdata__charging_data_ref__update_post_400_response_convertToJSON(_chargingdata__charging_data_ref__update_post_400_response_1);
	printf("_chargingdata__charging_data_ref__update_post_400_response :\n%s\n", cJSON_Print(json_chargingdata__charging_data_ref__update_post_400_response_1));
	_chargingdata__charging_data_ref__update_post_400_response_t* _chargingdata__charging_data_ref__update_post_400_response_2 = _chargingdata__charging_data_ref__update_post_400_response_parseFromJSON(json_chargingdata__charging_data_ref__update_post_400_response_1);
	cJSON* json_chargingdata__charging_data_ref__update_post_400_response_2 = _chargingdata__charging_data_ref__update_post_400_response_convertToJSON(_chargingdata__charging_data_ref__update_post_400_response_2);
	printf("repeating _chargingdata__charging_data_ref__update_post_400_response:\n%s\n", cJSON_Print(json_chargingdata__charging_data_ref__update_post_400_response_2));
}

int main() {
  test__chargingdata__charging_data_ref__update_post_400_response(1);
  test__chargingdata__charging_data_ref__update_post_400_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // _chargingdata__charging_data_ref__update_post_400_response_MAIN
#endif // _chargingdata__charging_data_ref__update_post_400_response_TEST
