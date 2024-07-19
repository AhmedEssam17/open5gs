#ifndef requested_unit_TEST
#define requested_unit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define requested_unit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/requested_unit.h"
requested_unit_t* instantiate_requested_unit(int include_optional);



requested_unit_t* instantiate_requested_unit(int include_optional) {
  requested_unit_t* requested_unit = NULL;
  if (include_optional) {
    requested_unit = requested_unit_create(
      0,
      0,
      0,
      0,
      0
    );
  } else {
    requested_unit = requested_unit_create(
      0,
      0,
      0,
      0,
      0
    );
  }

  return requested_unit;
}


#ifdef requested_unit_MAIN

void test_requested_unit(int include_optional) {
    requested_unit_t* requested_unit_1 = instantiate_requested_unit(include_optional);

	cJSON* jsonrequested_unit_1 = requested_unit_convertToJSON(requested_unit_1);
	printf("requested_unit :\n%s\n", cJSON_Print(jsonrequested_unit_1));
	requested_unit_t* requested_unit_2 = requested_unit_parseFromJSON(jsonrequested_unit_1);
	cJSON* jsonrequested_unit_2 = requested_unit_convertToJSON(requested_unit_2);
	printf("repeating requested_unit:\n%s\n", cJSON_Print(jsonrequested_unit_2));
}

int main() {
  test_requested_unit(1);
  test_requested_unit(0);

  printf("Hello world \n");
  return 0;
}

#endif // requested_unit_MAIN
#endif // requested_unit_TEST
