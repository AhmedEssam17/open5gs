#ifndef pc5_container_information_TEST
#define pc5_container_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pc5_container_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pc5_container_information.h"
pc5_container_information_t* instantiate_pc5_container_information(int include_optional);



pc5_container_information_t* instantiate_pc5_container_information(int include_optional) {
  pc5_container_information_t* pc5_container_information = NULL;
  if (include_optional) {
    pc5_container_information = pc5_container_information_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    pc5_container_information = pc5_container_information_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return pc5_container_information;
}


#ifdef pc5_container_information_MAIN

void test_pc5_container_information(int include_optional) {
    pc5_container_information_t* pc5_container_information_1 = instantiate_pc5_container_information(include_optional);

	cJSON* jsonpc5_container_information_1 = pc5_container_information_convertToJSON(pc5_container_information_1);
	printf("pc5_container_information :\n%s\n", cJSON_Print(jsonpc5_container_information_1));
	pc5_container_information_t* pc5_container_information_2 = pc5_container_information_parseFromJSON(jsonpc5_container_information_1);
	cJSON* jsonpc5_container_information_2 = pc5_container_information_convertToJSON(pc5_container_information_2);
	printf("repeating pc5_container_information:\n%s\n", cJSON_Print(jsonpc5_container_information_2));
}

int main() {
  test_pc5_container_information(1);
  test_pc5_container_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // pc5_container_information_MAIN
#endif // pc5_container_information_TEST
