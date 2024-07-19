#ifndef redundant_transmission_type_TEST
#define redundant_transmission_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redundant_transmission_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redundant_transmission_type.h"
redundant_transmission_type_t* instantiate_redundant_transmission_type(int include_optional);



redundant_transmission_type_t* instantiate_redundant_transmission_type(int include_optional) {
  redundant_transmission_type_t* redundant_transmission_type = NULL;
  if (include_optional) {
    redundant_transmission_type = redundant_transmission_type_create(
    );
  } else {
    redundant_transmission_type = redundant_transmission_type_create(
    );
  }

  return redundant_transmission_type;
}


#ifdef redundant_transmission_type_MAIN

void test_redundant_transmission_type(int include_optional) {
    redundant_transmission_type_t* redundant_transmission_type_1 = instantiate_redundant_transmission_type(include_optional);

	cJSON* jsonredundant_transmission_type_1 = redundant_transmission_type_convertToJSON(redundant_transmission_type_1);
	printf("redundant_transmission_type :\n%s\n", cJSON_Print(jsonredundant_transmission_type_1));
	redundant_transmission_type_t* redundant_transmission_type_2 = redundant_transmission_type_parseFromJSON(jsonredundant_transmission_type_1);
	cJSON* jsonredundant_transmission_type_2 = redundant_transmission_type_convertToJSON(redundant_transmission_type_2);
	printf("repeating redundant_transmission_type:\n%s\n", cJSON_Print(jsonredundant_transmission_type_2));
}

int main() {
  test_redundant_transmission_type(1);
  test_redundant_transmission_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // redundant_transmission_type_MAIN
#endif // redundant_transmission_type_TEST
