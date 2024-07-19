#ifndef multiple_unit_usage_TEST
#define multiple_unit_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multiple_unit_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multiple_unit_usage.h"
multiple_unit_usage_t* instantiate_multiple_unit_usage(int include_optional);

#include "test_requested_unit.c"
#include "test_pdu_address.c"


multiple_unit_usage_t* instantiate_multiple_unit_usage(int include_optional) {
  multiple_unit_usage_t* multiple_unit_usage = NULL;
  if (include_optional) {
    multiple_unit_usage = multiple_unit_usage_create(
      0,
       // false, not to have infinite recursion
      instantiate_requested_unit(0),
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_pdu_address(0)
    );
  } else {
    multiple_unit_usage = multiple_unit_usage_create(
      0,
      NULL,
      list_createList(),
      "0",
      NULL
    );
  }

  return multiple_unit_usage;
}


#ifdef multiple_unit_usage_MAIN

void test_multiple_unit_usage(int include_optional) {
    multiple_unit_usage_t* multiple_unit_usage_1 = instantiate_multiple_unit_usage(include_optional);

	cJSON* jsonmultiple_unit_usage_1 = multiple_unit_usage_convertToJSON(multiple_unit_usage_1);
	printf("multiple_unit_usage :\n%s\n", cJSON_Print(jsonmultiple_unit_usage_1));
	multiple_unit_usage_t* multiple_unit_usage_2 = multiple_unit_usage_parseFromJSON(jsonmultiple_unit_usage_1);
	cJSON* jsonmultiple_unit_usage_2 = multiple_unit_usage_convertToJSON(multiple_unit_usage_2);
	printf("repeating multiple_unit_usage:\n%s\n", cJSON_Print(jsonmultiple_unit_usage_2));
}

int main() {
  test_multiple_unit_usage(1);
  test_multiple_unit_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // multiple_unit_usage_MAIN
#endif // multiple_unit_usage_TEST
