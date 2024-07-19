#ifndef granted_unit_TEST
#define granted_unit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define granted_unit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/granted_unit.h"
granted_unit_t* instantiate_granted_unit(int include_optional);



granted_unit_t* instantiate_granted_unit(int include_optional) {
  granted_unit_t* granted_unit = NULL;
  if (include_optional) {
    granted_unit = granted_unit_create(
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      0,
      0
    );
  } else {
    granted_unit = granted_unit_create(
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      0,
      0
    );
  }

  return granted_unit;
}


#ifdef granted_unit_MAIN

void test_granted_unit(int include_optional) {
    granted_unit_t* granted_unit_1 = instantiate_granted_unit(include_optional);

	cJSON* jsongranted_unit_1 = granted_unit_convertToJSON(granted_unit_1);
	printf("granted_unit :\n%s\n", cJSON_Print(jsongranted_unit_1));
	granted_unit_t* granted_unit_2 = granted_unit_parseFromJSON(jsongranted_unit_1);
	cJSON* jsongranted_unit_2 = granted_unit_convertToJSON(granted_unit_2);
	printf("repeating granted_unit:\n%s\n", cJSON_Print(jsongranted_unit_2));
}

int main() {
  test_granted_unit(1);
  test_granted_unit(0);

  printf("Hello world \n");
  return 0;
}

#endif // granted_unit_MAIN
#endif // granted_unit_TEST
