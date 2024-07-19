#ifndef redundant_transmission_type_any_of_TEST
#define redundant_transmission_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redundant_transmission_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redundant_transmission_type_any_of.h"
redundant_transmission_type_any_of_t* instantiate_redundant_transmission_type_any_of(int include_optional);



redundant_transmission_type_any_of_t* instantiate_redundant_transmission_type_any_of(int include_optional) {
  redundant_transmission_type_any_of_t* redundant_transmission_type_any_of = NULL;
  if (include_optional) {
    redundant_transmission_type_any_of = redundant_transmission_type_any_of_create(
    );
  } else {
    redundant_transmission_type_any_of = redundant_transmission_type_any_of_create(
    );
  }

  return redundant_transmission_type_any_of;
}


#ifdef redundant_transmission_type_any_of_MAIN

void test_redundant_transmission_type_any_of(int include_optional) {
    redundant_transmission_type_any_of_t* redundant_transmission_type_any_of_1 = instantiate_redundant_transmission_type_any_of(include_optional);

	cJSON* jsonredundant_transmission_type_any_of_1 = redundant_transmission_type_any_of_convertToJSON(redundant_transmission_type_any_of_1);
	printf("redundant_transmission_type_any_of :\n%s\n", cJSON_Print(jsonredundant_transmission_type_any_of_1));
	redundant_transmission_type_any_of_t* redundant_transmission_type_any_of_2 = redundant_transmission_type_any_of_parseFromJSON(jsonredundant_transmission_type_any_of_1);
	cJSON* jsonredundant_transmission_type_any_of_2 = redundant_transmission_type_any_of_convertToJSON(redundant_transmission_type_any_of_2);
	printf("repeating redundant_transmission_type_any_of:\n%s\n", cJSON_Print(jsonredundant_transmission_type_any_of_2));
}

int main() {
  test_redundant_transmission_type_any_of(1);
  test_redundant_transmission_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // redundant_transmission_type_any_of_MAIN
#endif // redundant_transmission_type_any_of_TEST
