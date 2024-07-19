#ifndef charging_notify_response_TEST
#define charging_notify_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_notify_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_notify_response.h"
charging_notify_response_t* instantiate_charging_notify_response(int include_optional);

#include "test_invocation_result.c"


charging_notify_response_t* instantiate_charging_notify_response(int include_optional) {
  charging_notify_response_t* charging_notify_response = NULL;
  if (include_optional) {
    charging_notify_response = charging_notify_response_create(
       // false, not to have infinite recursion
      instantiate_invocation_result(0)
    );
  } else {
    charging_notify_response = charging_notify_response_create(
      NULL
    );
  }

  return charging_notify_response;
}


#ifdef charging_notify_response_MAIN

void test_charging_notify_response(int include_optional) {
    charging_notify_response_t* charging_notify_response_1 = instantiate_charging_notify_response(include_optional);

	cJSON* jsoncharging_notify_response_1 = charging_notify_response_convertToJSON(charging_notify_response_1);
	printf("charging_notify_response :\n%s\n", cJSON_Print(jsoncharging_notify_response_1));
	charging_notify_response_t* charging_notify_response_2 = charging_notify_response_parseFromJSON(jsoncharging_notify_response_1);
	cJSON* jsoncharging_notify_response_2 = charging_notify_response_convertToJSON(charging_notify_response_2);
	printf("repeating charging_notify_response:\n%s\n", cJSON_Print(jsoncharging_notify_response_2));
}

int main() {
  test_charging_notify_response(1);
  test_charging_notify_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_notify_response_MAIN
#endif // charging_notify_response_TEST
