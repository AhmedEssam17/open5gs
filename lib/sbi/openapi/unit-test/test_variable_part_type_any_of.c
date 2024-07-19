#ifndef variable_part_type_any_of_TEST
#define variable_part_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variable_part_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variable_part_type_any_of.h"
variable_part_type_any_of_t* instantiate_variable_part_type_any_of(int include_optional);



variable_part_type_any_of_t* instantiate_variable_part_type_any_of(int include_optional) {
  variable_part_type_any_of_t* variable_part_type_any_of = NULL;
  if (include_optional) {
    variable_part_type_any_of = variable_part_type_any_of_create(
    );
  } else {
    variable_part_type_any_of = variable_part_type_any_of_create(
    );
  }

  return variable_part_type_any_of;
}


#ifdef variable_part_type_any_of_MAIN

void test_variable_part_type_any_of(int include_optional) {
    variable_part_type_any_of_t* variable_part_type_any_of_1 = instantiate_variable_part_type_any_of(include_optional);

	cJSON* jsonvariable_part_type_any_of_1 = variable_part_type_any_of_convertToJSON(variable_part_type_any_of_1);
	printf("variable_part_type_any_of :\n%s\n", cJSON_Print(jsonvariable_part_type_any_of_1));
	variable_part_type_any_of_t* variable_part_type_any_of_2 = variable_part_type_any_of_parseFromJSON(jsonvariable_part_type_any_of_1);
	cJSON* jsonvariable_part_type_any_of_2 = variable_part_type_any_of_convertToJSON(variable_part_type_any_of_2);
	printf("repeating variable_part_type_any_of:\n%s\n", cJSON_Print(jsonvariable_part_type_any_of_2));
}

int main() {
  test_variable_part_type_any_of(1);
  test_variable_part_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // variable_part_type_any_of_MAIN
#endif // variable_part_type_any_of_TEST
