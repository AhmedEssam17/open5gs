#ifndef role_of_ims_node_any_of_TEST
#define role_of_ims_node_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define role_of_ims_node_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/role_of_ims_node_any_of.h"
role_of_ims_node_any_of_t* instantiate_role_of_ims_node_any_of(int include_optional);



role_of_ims_node_any_of_t* instantiate_role_of_ims_node_any_of(int include_optional) {
  role_of_ims_node_any_of_t* role_of_ims_node_any_of = NULL;
  if (include_optional) {
    role_of_ims_node_any_of = role_of_ims_node_any_of_create(
    );
  } else {
    role_of_ims_node_any_of = role_of_ims_node_any_of_create(
    );
  }

  return role_of_ims_node_any_of;
}


#ifdef role_of_ims_node_any_of_MAIN

void test_role_of_ims_node_any_of(int include_optional) {
    role_of_ims_node_any_of_t* role_of_ims_node_any_of_1 = instantiate_role_of_ims_node_any_of(include_optional);

	cJSON* jsonrole_of_ims_node_any_of_1 = role_of_ims_node_any_of_convertToJSON(role_of_ims_node_any_of_1);
	printf("role_of_ims_node_any_of :\n%s\n", cJSON_Print(jsonrole_of_ims_node_any_of_1));
	role_of_ims_node_any_of_t* role_of_ims_node_any_of_2 = role_of_ims_node_any_of_parseFromJSON(jsonrole_of_ims_node_any_of_1);
	cJSON* jsonrole_of_ims_node_any_of_2 = role_of_ims_node_any_of_convertToJSON(role_of_ims_node_any_of_2);
	printf("repeating role_of_ims_node_any_of:\n%s\n", cJSON_Print(jsonrole_of_ims_node_any_of_2));
}

int main() {
  test_role_of_ims_node_any_of(1);
  test_role_of_ims_node_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // role_of_ims_node_any_of_MAIN
#endif // role_of_ims_node_any_of_TEST
