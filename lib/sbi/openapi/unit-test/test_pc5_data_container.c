#ifndef pc5_data_container_TEST
#define pc5_data_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pc5_data_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pc5_data_container.h"
pc5_data_container_t* instantiate_pc5_data_container(int include_optional);

#include "test_user_location.c"
#include "test_radio_resources_id.c"


pc5_data_container_t* instantiate_pc5_data_container(int include_optional) {
  pc5_data_container_t* pc5_data_container = NULL;
  if (include_optional) {
    pc5_data_container = pc5_data_container_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      0,
      "0",
      null,
      "0",
      "0"
    );
  } else {
    pc5_data_container = pc5_data_container_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      NULL,
      0,
      "0",
      null,
      "0",
      "0"
    );
  }

  return pc5_data_container;
}


#ifdef pc5_data_container_MAIN

void test_pc5_data_container(int include_optional) {
    pc5_data_container_t* pc5_data_container_1 = instantiate_pc5_data_container(include_optional);

	cJSON* jsonpc5_data_container_1 = pc5_data_container_convertToJSON(pc5_data_container_1);
	printf("pc5_data_container :\n%s\n", cJSON_Print(jsonpc5_data_container_1));
	pc5_data_container_t* pc5_data_container_2 = pc5_data_container_parseFromJSON(jsonpc5_data_container_1);
	cJSON* jsonpc5_data_container_2 = pc5_data_container_convertToJSON(pc5_data_container_2);
	printf("repeating pc5_data_container:\n%s\n", cJSON_Print(jsonpc5_data_container_2));
}

int main() {
  test_pc5_data_container(1);
  test_pc5_data_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // pc5_data_container_MAIN
#endif // pc5_data_container_TEST
