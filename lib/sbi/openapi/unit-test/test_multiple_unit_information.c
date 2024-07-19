#ifndef multiple_unit_information_TEST
#define multiple_unit_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multiple_unit_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multiple_unit_information.h"
multiple_unit_information_t* instantiate_multiple_unit_information(int include_optional);

#include "test_result_code.c"
#include "test_granted_unit.c"
#include "test_final_unit_indication.c"
#include "test_announcement_information.c"


multiple_unit_information_t* instantiate_multiple_unit_information(int include_optional) {
  multiple_unit_information_t* multiple_unit_information = NULL;
  if (include_optional) {
    multiple_unit_information = multiple_unit_information_create(
      null,
      0,
       // false, not to have infinite recursion
      instantiate_granted_unit(0),
      list_createList(),
      56,
      56,
       // false, not to have infinite recursion
      instantiate_final_unit_indication(0),
      56,
      0,
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_announcement_information(0)
    );
  } else {
    multiple_unit_information = multiple_unit_information_create(
      null,
      0,
      NULL,
      list_createList(),
      56,
      56,
      NULL,
      56,
      0,
      56,
      "0",
      NULL
    );
  }

  return multiple_unit_information;
}


#ifdef multiple_unit_information_MAIN

void test_multiple_unit_information(int include_optional) {
    multiple_unit_information_t* multiple_unit_information_1 = instantiate_multiple_unit_information(include_optional);

	cJSON* jsonmultiple_unit_information_1 = multiple_unit_information_convertToJSON(multiple_unit_information_1);
	printf("multiple_unit_information :\n%s\n", cJSON_Print(jsonmultiple_unit_information_1));
	multiple_unit_information_t* multiple_unit_information_2 = multiple_unit_information_parseFromJSON(jsonmultiple_unit_information_1);
	cJSON* jsonmultiple_unit_information_2 = multiple_unit_information_convertToJSON(multiple_unit_information_2);
	printf("repeating multiple_unit_information:\n%s\n", cJSON_Print(jsonmultiple_unit_information_2));
}

int main() {
  test_multiple_unit_information(1);
  test_multiple_unit_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // multiple_unit_information_MAIN
#endif // multiple_unit_information_TEST
