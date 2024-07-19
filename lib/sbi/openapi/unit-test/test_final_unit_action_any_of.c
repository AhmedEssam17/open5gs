#ifndef final_unit_action_any_of_TEST
#define final_unit_action_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define final_unit_action_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/final_unit_action_any_of.h"
final_unit_action_any_of_t* instantiate_final_unit_action_any_of(int include_optional);



final_unit_action_any_of_t* instantiate_final_unit_action_any_of(int include_optional) {
  final_unit_action_any_of_t* final_unit_action_any_of = NULL;
  if (include_optional) {
    final_unit_action_any_of = final_unit_action_any_of_create(
    );
  } else {
    final_unit_action_any_of = final_unit_action_any_of_create(
    );
  }

  return final_unit_action_any_of;
}


#ifdef final_unit_action_any_of_MAIN

void test_final_unit_action_any_of(int include_optional) {
    final_unit_action_any_of_t* final_unit_action_any_of_1 = instantiate_final_unit_action_any_of(include_optional);

	cJSON* jsonfinal_unit_action_any_of_1 = final_unit_action_any_of_convertToJSON(final_unit_action_any_of_1);
	printf("final_unit_action_any_of :\n%s\n", cJSON_Print(jsonfinal_unit_action_any_of_1));
	final_unit_action_any_of_t* final_unit_action_any_of_2 = final_unit_action_any_of_parseFromJSON(jsonfinal_unit_action_any_of_1);
	cJSON* jsonfinal_unit_action_any_of_2 = final_unit_action_any_of_convertToJSON(final_unit_action_any_of_2);
	printf("repeating final_unit_action_any_of:\n%s\n", cJSON_Print(jsonfinal_unit_action_any_of_2));
}

int main() {
  test_final_unit_action_any_of(1);
  test_final_unit_action_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // final_unit_action_any_of_MAIN
#endif // final_unit_action_any_of_TEST
