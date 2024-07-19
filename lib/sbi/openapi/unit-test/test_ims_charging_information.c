#ifndef ims_charging_information_TEST
#define ims_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ims_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ims_charging_information.h"
ims_charging_information_t* instantiate_ims_charging_information(int include_optional);

#include "test_sip_event_type.c"
#include "test_role_of_ims_node.c"
#include "test_user_information.c"
#include "test_user_location.c"
#include "test_model_3_gppps_data_off_status.c"
#include "test_isup_cause.c"
#include "test_ims_address.c"
#include "test_ims_session_priority.c"
#include "test_ims_address.c"
#include "test_server_capabilities.c"
#include "test_trunk_group_id.c"
#include "test_tad_identifier.c"


ims_charging_information_t* instantiate_ims_charging_information(int include_optional) {
  ims_charging_information_t* ims_charging_information = NULL;
  if (include_optional) {
    ims_charging_information = ims_charging_information_create(
       // false, not to have infinite recursion
      instantiate_sip_event_type(0),
      nchf_convergedcharging_ims_charging_information__S_CSCF,
      null,
       // false, not to have infinite recursion
      instantiate_user_information(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
      null,
       // false, not to have infinite recursion
      instantiate_isup_cause(0),
       // false, not to have infinite recursion
      instantiate_ims_address(0),
      "a",
      "a",
      "0",
      "0",
      null,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ims_address(0),
       // false, not to have infinite recursion
      instantiate_server_capabilities(0),
       // false, not to have infinite recursion
      instantiate_trunk_group_id(0),
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      0,
      list_createList(),
      "0",
      list_createList(),
      "0",
      1,
      "0",
      "0",
      "0",
      null,
      "0"
    );
  } else {
    ims_charging_information = ims_charging_information_create(
      NULL,
      nchf_convergedcharging_ims_charging_information__S_CSCF,
      null,
      NULL,
      NULL,
      "-08:00+1",
      null,
      NULL,
      NULL,
      "a",
      "a",
      "0",
      "0",
      null,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL,
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      0,
      list_createList(),
      "0",
      list_createList(),
      "0",
      1,
      "0",
      "0",
      "0",
      null,
      "0"
    );
  }

  return ims_charging_information;
}


#ifdef ims_charging_information_MAIN

void test_ims_charging_information(int include_optional) {
    ims_charging_information_t* ims_charging_information_1 = instantiate_ims_charging_information(include_optional);

	cJSON* jsonims_charging_information_1 = ims_charging_information_convertToJSON(ims_charging_information_1);
	printf("ims_charging_information :\n%s\n", cJSON_Print(jsonims_charging_information_1));
	ims_charging_information_t* ims_charging_information_2 = ims_charging_information_parseFromJSON(jsonims_charging_information_1);
	cJSON* jsonims_charging_information_2 = ims_charging_information_convertToJSON(ims_charging_information_2);
	printf("repeating ims_charging_information:\n%s\n", cJSON_Print(jsonims_charging_information_2));
}

int main() {
  test_ims_charging_information(1);
  test_ims_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // ims_charging_information_MAIN
#endif // ims_charging_information_TEST
