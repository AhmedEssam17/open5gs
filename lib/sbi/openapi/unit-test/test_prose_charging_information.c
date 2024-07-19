#ifndef prose_charging_information_TEST
#define prose_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_charging_information.h"
prose_charging_information_t* instantiate_prose_charging_information(int include_optional);

#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_plmn_id.c"
#include "test_prose_functionality.c"
#include "test_prose_event_type.c"
#include "test_direct_discovery_model.c"
#include "test_role_of_ue.c"
#include "test_plmn_id.c"
#include "test_range_class.c"
#include "test_ip_addr.c"


prose_charging_information_t* instantiate_prose_charging_information(int include_optional) {
  prose_charging_information_t* prose_charging_information = NULL;
  if (include_optional) {
    prose_charging_information = prose_charging_information_create(
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "0",
      "0",
      list_createList(),
      null,
      null,
      null,
      56,
      null,
      "2013-10-20T19:20:30+01:00",
      56,
      "a",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      56,
      null,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_ip_addr(0),
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    prose_charging_information = prose_charging_information_create(
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
      "0",
      "0",
      list_createList(),
      null,
      null,
      null,
      56,
      null,
      "2013-10-20T19:20:30+01:00",
      56,
      "a",
      NULL,
      56,
      null,
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return prose_charging_information;
}


#ifdef prose_charging_information_MAIN

void test_prose_charging_information(int include_optional) {
    prose_charging_information_t* prose_charging_information_1 = instantiate_prose_charging_information(include_optional);

	cJSON* jsonprose_charging_information_1 = prose_charging_information_convertToJSON(prose_charging_information_1);
	printf("prose_charging_information :\n%s\n", cJSON_Print(jsonprose_charging_information_1));
	prose_charging_information_t* prose_charging_information_2 = prose_charging_information_parseFromJSON(jsonprose_charging_information_1);
	cJSON* jsonprose_charging_information_2 = prose_charging_information_convertToJSON(prose_charging_information_2);
	printf("repeating prose_charging_information:\n%s\n", cJSON_Print(jsonprose_charging_information_2));
}

int main() {
  test_prose_charging_information(1);
  test_prose_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_charging_information_MAIN
#endif // prose_charging_information_TEST
