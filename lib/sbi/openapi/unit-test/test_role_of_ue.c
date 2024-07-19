#ifndef role_of_ue_TEST
#define role_of_ue_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define role_of_ue_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/role_of_ue.h"
role_of_ue_t* instantiate_role_of_ue(int include_optional);



role_of_ue_t* instantiate_role_of_ue(int include_optional) {
  role_of_ue_t* role_of_ue = NULL;
  if (include_optional) {
    role_of_ue = role_of_ue_create(
    );
  } else {
    role_of_ue = role_of_ue_create(
    );
  }

  return role_of_ue;
}


#ifdef role_of_ue_MAIN

void test_role_of_ue(int include_optional) {
    role_of_ue_t* role_of_ue_1 = instantiate_role_of_ue(include_optional);

	cJSON* jsonrole_of_ue_1 = role_of_ue_convertToJSON(role_of_ue_1);
	printf("role_of_ue :\n%s\n", cJSON_Print(jsonrole_of_ue_1));
	role_of_ue_t* role_of_ue_2 = role_of_ue_parseFromJSON(jsonrole_of_ue_1);
	cJSON* jsonrole_of_ue_2 = role_of_ue_convertToJSON(role_of_ue_2);
	printf("repeating role_of_ue:\n%s\n", cJSON_Print(jsonrole_of_ue_2));
}

int main() {
  test_role_of_ue(1);
  test_role_of_ue(0);

  printf("Hello world \n");
  return 0;
}

#endif // role_of_ue_MAIN
#endif // role_of_ue_TEST
