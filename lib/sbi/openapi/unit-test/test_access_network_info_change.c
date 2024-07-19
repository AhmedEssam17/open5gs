#ifndef access_network_info_change_TEST
#define access_network_info_change_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_network_info_change_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_network_info_change.h"
access_network_info_change_t* instantiate_access_network_info_change(int include_optional);



access_network_info_change_t* instantiate_access_network_info_change(int include_optional) {
  access_network_info_change_t* access_network_info_change = NULL;
  if (include_optional) {
    access_network_info_change = access_network_info_change_create(
      list_createList(),
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    access_network_info_change = access_network_info_change_create(
      list_createList(),
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return access_network_info_change;
}


#ifdef access_network_info_change_MAIN

void test_access_network_info_change(int include_optional) {
    access_network_info_change_t* access_network_info_change_1 = instantiate_access_network_info_change(include_optional);

	cJSON* jsonaccess_network_info_change_1 = access_network_info_change_convertToJSON(access_network_info_change_1);
	printf("access_network_info_change :\n%s\n", cJSON_Print(jsonaccess_network_info_change_1));
	access_network_info_change_t* access_network_info_change_2 = access_network_info_change_parseFromJSON(jsonaccess_network_info_change_1);
	cJSON* jsonaccess_network_info_change_2 = access_network_info_change_convertToJSON(access_network_info_change_2);
	printf("repeating access_network_info_change:\n%s\n", cJSON_Print(jsonaccess_network_info_change_2));
}

int main() {
  test_access_network_info_change(1);
  test_access_network_info_change(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_network_info_change_MAIN
#endif // access_network_info_change_TEST
