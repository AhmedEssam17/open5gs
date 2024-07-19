#ifndef used_unit_container_TEST
#define used_unit_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define used_unit_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/used_unit_container.h"
used_unit_container_t* instantiate_used_unit_container(int include_optional);

#include "test_quota_management_indicator.c"
#include "test_pdu_container_information.c"
#include "test_nspa_container_information.c"
#include "test_pc5_container_information.c"


used_unit_container_t* instantiate_used_unit_container(int include_optional) {
  used_unit_container_t* used_unit_container = NULL;
  if (include_optional) {
    used_unit_container = used_unit_container_create(
      0,
      null,
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      0,
      0,
      list_createList(),
      56,
       // false, not to have infinite recursion
      instantiate_pdu_container_information(0),
       // false, not to have infinite recursion
      instantiate_nspa_container_information(0),
       // false, not to have infinite recursion
      instantiate_pc5_container_information(0)
    );
  } else {
    used_unit_container = used_unit_container_create(
      0,
      null,
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      0,
      0,
      list_createList(),
      56,
      NULL,
      NULL,
      NULL
    );
  }

  return used_unit_container;
}


#ifdef used_unit_container_MAIN

void test_used_unit_container(int include_optional) {
    used_unit_container_t* used_unit_container_1 = instantiate_used_unit_container(include_optional);

	cJSON* jsonused_unit_container_1 = used_unit_container_convertToJSON(used_unit_container_1);
	printf("used_unit_container :\n%s\n", cJSON_Print(jsonused_unit_container_1));
	used_unit_container_t* used_unit_container_2 = used_unit_container_parseFromJSON(jsonused_unit_container_1);
	cJSON* jsonused_unit_container_2 = used_unit_container_convertToJSON(used_unit_container_2);
	printf("repeating used_unit_container:\n%s\n", cJSON_Print(jsonused_unit_container_2));
}

int main() {
  test_used_unit_container(1);
  test_used_unit_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // used_unit_container_MAIN
#endif // used_unit_container_TEST
