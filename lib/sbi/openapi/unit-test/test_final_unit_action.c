#ifndef final_unit_action_TEST
#define final_unit_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define final_unit_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/final_unit_action.h"
final_unit_action_t* instantiate_final_unit_action(int include_optional);



final_unit_action_t* instantiate_final_unit_action(int include_optional) {
  final_unit_action_t* final_unit_action = NULL;
  if (include_optional) {
    final_unit_action = final_unit_action_create(
    );
  } else {
    final_unit_action = final_unit_action_create(
    );
  }

  return final_unit_action;
}


#ifdef final_unit_action_MAIN

void test_final_unit_action(int include_optional) {
    final_unit_action_t* final_unit_action_1 = instantiate_final_unit_action(include_optional);

	cJSON* jsonfinal_unit_action_1 = final_unit_action_convertToJSON(final_unit_action_1);
	printf("final_unit_action :\n%s\n", cJSON_Print(jsonfinal_unit_action_1));
	final_unit_action_t* final_unit_action_2 = final_unit_action_parseFromJSON(jsonfinal_unit_action_1);
	cJSON* jsonfinal_unit_action_2 = final_unit_action_convertToJSON(final_unit_action_2);
	printf("repeating final_unit_action:\n%s\n", cJSON_Print(jsonfinal_unit_action_2));
}

int main() {
  test_final_unit_action(1);
  test_final_unit_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // final_unit_action_MAIN
#endif // final_unit_action_TEST
