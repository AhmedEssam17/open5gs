#ifndef registration_charging_information_TEST
#define registration_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_charging_information.h"
registration_charging_information_t* instantiate_registration_charging_information(int include_optional);

#include "test_registration_message_type.c"
#include "test_user_information.c"
#include "test_user_location.c"
#include "test_ps_cell_information.c"
#include "test_mico_mode_indication.c"
#include "test_sms_indication.c"
#include "test_global_ran_node_id.c"


registration_charging_information_t* instantiate_registration_charging_information(int include_optional) {
  registration_charging_information_t* registration_charging_information = NULL;
  if (include_optional) {
    registration_charging_information = registration_charging_information_create(
      null,
       // false, not to have infinite recursion
      instantiate_user_information(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
       // false, not to have infinite recursion
      instantiate_ps_cell_information(0),
      "-08:00+1",
      nchf_convergedcharging_registration_charging_information__NR,
      "YQ==",
      null,
      null,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      56,
      56,
       // false, not to have infinite recursion
      instantiate_global_ran_node_id(0)
    );
  } else {
    registration_charging_information = registration_charging_information_create(
      null,
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      nchf_convergedcharging_registration_charging_information__NR,
      "YQ==",
      null,
      null,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      56,
      56,
      NULL
    );
  }

  return registration_charging_information;
}


#ifdef registration_charging_information_MAIN

void test_registration_charging_information(int include_optional) {
    registration_charging_information_t* registration_charging_information_1 = instantiate_registration_charging_information(include_optional);

	cJSON* jsonregistration_charging_information_1 = registration_charging_information_convertToJSON(registration_charging_information_1);
	printf("registration_charging_information :\n%s\n", cJSON_Print(jsonregistration_charging_information_1));
	registration_charging_information_t* registration_charging_information_2 = registration_charging_information_parseFromJSON(jsonregistration_charging_information_1);
	cJSON* jsonregistration_charging_information_2 = registration_charging_information_convertToJSON(registration_charging_information_2);
	printf("repeating registration_charging_information:\n%s\n", cJSON_Print(jsonregistration_charging_information_2));
}

int main() {
  test_registration_charging_information(1);
  test_registration_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_charging_information_MAIN
#endif // registration_charging_information_TEST
