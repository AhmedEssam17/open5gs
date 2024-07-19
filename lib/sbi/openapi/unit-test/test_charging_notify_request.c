#ifndef charging_notify_request_TEST
#define charging_notify_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_notify_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_notify_request.h"
charging_notify_request_t* instantiate_charging_notify_request(int include_optional);

#include "test_notification_type.c"


charging_notify_request_t* instantiate_charging_notify_request(int include_optional) {
  charging_notify_request_t* charging_notify_request = NULL;
  if (include_optional) {
    charging_notify_request = charging_notify_request_create(
      null,
      list_createList()
    );
  } else {
    charging_notify_request = charging_notify_request_create(
      null,
      list_createList()
    );
  }

  return charging_notify_request;
}


#ifdef charging_notify_request_MAIN

void test_charging_notify_request(int include_optional) {
    charging_notify_request_t* charging_notify_request_1 = instantiate_charging_notify_request(include_optional);

	cJSON* jsoncharging_notify_request_1 = charging_notify_request_convertToJSON(charging_notify_request_1);
	printf("charging_notify_request :\n%s\n", cJSON_Print(jsoncharging_notify_request_1));
	charging_notify_request_t* charging_notify_request_2 = charging_notify_request_parseFromJSON(jsoncharging_notify_request_1);
	cJSON* jsoncharging_notify_request_2 = charging_notify_request_convertToJSON(charging_notify_request_2);
	printf("repeating charging_notify_request:\n%s\n", cJSON_Print(jsoncharging_notify_request_2));
}

int main() {
  test_charging_notify_request(1);
  test_charging_notify_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_notify_request_MAIN
#endif // charging_notify_request_TEST
