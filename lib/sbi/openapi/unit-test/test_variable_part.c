#ifndef variable_part_TEST
#define variable_part_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variable_part_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variable_part.h"
variable_part_t* instantiate_variable_part(int include_optional);

#include "test_variable_part_type.c"


variable_part_t* instantiate_variable_part(int include_optional) {
  variable_part_t* variable_part = NULL;
  if (include_optional) {
    variable_part = variable_part_create(
      null,
      list_createList(),
      0
    );
  } else {
    variable_part = variable_part_create(
      null,
      list_createList(),
      0
    );
  }

  return variable_part;
}


#ifdef variable_part_MAIN

void test_variable_part(int include_optional) {
    variable_part_t* variable_part_1 = instantiate_variable_part(include_optional);

	cJSON* jsonvariable_part_1 = variable_part_convertToJSON(variable_part_1);
	printf("variable_part :\n%s\n", cJSON_Print(jsonvariable_part_1));
	variable_part_t* variable_part_2 = variable_part_parseFromJSON(jsonvariable_part_1);
	cJSON* jsonvariable_part_2 = variable_part_convertToJSON(variable_part_2);
	printf("repeating variable_part:\n%s\n", cJSON_Print(jsonvariable_part_2));
}

int main() {
  test_variable_part(1);
  test_variable_part(0);

  printf("Hello world \n");
  return 0;
}

#endif // variable_part_MAIN
#endif // variable_part_TEST
