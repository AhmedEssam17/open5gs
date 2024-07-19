#ifndef role_of_ims_node_TEST
#define role_of_ims_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define role_of_ims_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/role_of_ims_node.h"
role_of_ims_node_t* instantiate_role_of_ims_node(int include_optional);



role_of_ims_node_t* instantiate_role_of_ims_node(int include_optional) {
  role_of_ims_node_t* role_of_ims_node = NULL;
  if (include_optional) {
    role_of_ims_node = role_of_ims_node_create(
    );
  } else {
    role_of_ims_node = role_of_ims_node_create(
    );
  }

  return role_of_ims_node;
}


#ifdef role_of_ims_node_MAIN

void test_role_of_ims_node(int include_optional) {
    role_of_ims_node_t* role_of_ims_node_1 = instantiate_role_of_ims_node(include_optional);

	cJSON* jsonrole_of_ims_node_1 = role_of_ims_node_convertToJSON(role_of_ims_node_1);
	printf("role_of_ims_node :\n%s\n", cJSON_Print(jsonrole_of_ims_node_1));
	role_of_ims_node_t* role_of_ims_node_2 = role_of_ims_node_parseFromJSON(jsonrole_of_ims_node_1);
	cJSON* jsonrole_of_ims_node_2 = role_of_ims_node_convertToJSON(role_of_ims_node_2);
	printf("repeating role_of_ims_node:\n%s\n", cJSON_Print(jsonrole_of_ims_node_2));
}

int main() {
  test_role_of_ims_node(1);
  test_role_of_ims_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // role_of_ims_node_MAIN
#endif // role_of_ims_node_TEST
