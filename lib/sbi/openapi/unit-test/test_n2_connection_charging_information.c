#ifndef n2_connection_charging_information_TEST
#define n2_connection_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n2_connection_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n2_connection_charging_information.h"
n2_connection_charging_information_t* instantiate_n2_connection_charging_information(int include_optional);

#include "test_user_information.c"
#include "test_user_location.c"
#include "test_ps_cell_information.c"
#include "test_global_ran_node_id.c"


n2_connection_charging_information_t* instantiate_n2_connection_charging_information(int include_optional) {
  n2_connection_charging_information_t* n2_connection_charging_information = NULL;
  if (include_optional) {
    n2_connection_charging_information = n2_connection_charging_information_create(
      56,
       // false, not to have infinite recursion
      instantiate_user_information(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
       // false, not to have infinite recursion
      instantiate_ps_cell_information(0),
      "-08:00+1",
      nchf_convergedcharging_n2_connection_charging_information__NR,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_global_ran_node_id(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    n2_connection_charging_information = n2_connection_charging_information_create(
      56,
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      nchf_convergedcharging_n2_connection_charging_information__NR,
      56,
      56,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return n2_connection_charging_information;
}


#ifdef n2_connection_charging_information_MAIN

void test_n2_connection_charging_information(int include_optional) {
    n2_connection_charging_information_t* n2_connection_charging_information_1 = instantiate_n2_connection_charging_information(include_optional);

	cJSON* jsonn2_connection_charging_information_1 = n2_connection_charging_information_convertToJSON(n2_connection_charging_information_1);
	printf("n2_connection_charging_information :\n%s\n", cJSON_Print(jsonn2_connection_charging_information_1));
	n2_connection_charging_information_t* n2_connection_charging_information_2 = n2_connection_charging_information_parseFromJSON(jsonn2_connection_charging_information_1);
	cJSON* jsonn2_connection_charging_information_2 = n2_connection_charging_information_convertToJSON(n2_connection_charging_information_2);
	printf("repeating n2_connection_charging_information:\n%s\n", cJSON_Print(jsonn2_connection_charging_information_2));
}

int main() {
  test_n2_connection_charging_information(1);
  test_n2_connection_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // n2_connection_charging_information_MAIN
#endif // n2_connection_charging_information_TEST
