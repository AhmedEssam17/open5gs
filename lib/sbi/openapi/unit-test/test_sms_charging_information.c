#ifndef sms_charging_information_TEST
#define sms_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_charging_information.h"
sms_charging_information_t* instantiate_sms_charging_information(int include_optional);

#include "test_originator_info.c"
#include "test_roamer_in_out.c"
#include "test_user_location.c"
#include "test_sm_message_type.c"
#include "test_reply_path_requested.c"
#include "test_sm_service_type.c"
#include "test_sm_priority.c"
#include "test_message_class.c"
#include "test_delivery_report_requested.c"


sms_charging_information_t* instantiate_sms_charging_information(int include_optional) {
  sms_charging_information_t* sms_charging_information = NULL;
  if (include_optional) {
    sms_charging_information = sms_charging_information_create(
       // false, not to have infinite recursion
      instantiate_originator_info(0),
      list_createList(),
      "a",
      null,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
      nchf_convergedcharging_sms_charging_information__NR,
      "0",
      56,
      null,
      null,
      "0",
      "a",
      "2013-10-20T19:20:30+01:00",
      0,
      null,
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      null,
      "0",
      0,
       // false, not to have infinite recursion
      instantiate_message_class(0),
      null
    );
  } else {
    sms_charging_information = sms_charging_information_create(
      NULL,
      list_createList(),
      "a",
      null,
      NULL,
      "-08:00+1",
      nchf_convergedcharging_sms_charging_information__NR,
      "0",
      56,
      null,
      null,
      "0",
      "a",
      "2013-10-20T19:20:30+01:00",
      0,
      null,
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      null,
      "0",
      0,
      NULL,
      null
    );
  }

  return sms_charging_information;
}


#ifdef sms_charging_information_MAIN

void test_sms_charging_information(int include_optional) {
    sms_charging_information_t* sms_charging_information_1 = instantiate_sms_charging_information(include_optional);

	cJSON* jsonsms_charging_information_1 = sms_charging_information_convertToJSON(sms_charging_information_1);
	printf("sms_charging_information :\n%s\n", cJSON_Print(jsonsms_charging_information_1));
	sms_charging_information_t* sms_charging_information_2 = sms_charging_information_parseFromJSON(jsonsms_charging_information_1);
	cJSON* jsonsms_charging_information_2 = sms_charging_information_convertToJSON(sms_charging_information_2);
	printf("repeating sms_charging_information:\n%s\n", cJSON_Print(jsonsms_charging_information_2));
}

int main() {
  test_sms_charging_information(1);
  test_sms_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_charging_information_MAIN
#endif // sms_charging_information_TEST
