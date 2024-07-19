#ifndef variable_part_type_TEST
#define variable_part_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variable_part_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variable_part_type.h"
variable_part_type_t* instantiate_variable_part_type(int include_optional);



variable_part_type_t* instantiate_variable_part_type(int include_optional) {
  variable_part_type_t* variable_part_type = NULL;
  if (include_optional) {
    variable_part_type = variable_part_type_create(
    );
  } else {
    variable_part_type = variable_part_type_create(
    );
  }

  return variable_part_type;
}


#ifdef variable_part_type_MAIN

void test_variable_part_type(int include_optional) {
    variable_part_type_t* variable_part_type_1 = instantiate_variable_part_type(include_optional);

	cJSON* jsonvariable_part_type_1 = variable_part_type_convertToJSON(variable_part_type_1);
	printf("variable_part_type :\n%s\n", cJSON_Print(jsonvariable_part_type_1));
	variable_part_type_t* variable_part_type_2 = variable_part_type_parseFromJSON(jsonvariable_part_type_1);
	cJSON* jsonvariable_part_type_2 = variable_part_type_convertToJSON(variable_part_type_2);
	printf("repeating variable_part_type:\n%s\n", cJSON_Print(jsonvariable_part_type_2));
}

int main() {
  test_variable_part_type(1);
  test_variable_part_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // variable_part_type_MAIN
#endif // variable_part_type_TEST
