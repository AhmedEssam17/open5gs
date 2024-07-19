#ifndef coverage_info_TEST
#define coverage_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define coverage_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/coverage_info.h"
coverage_info_t* instantiate_coverage_info(int include_optional);



coverage_info_t* instantiate_coverage_info(int include_optional) {
  coverage_info_t* coverage_info = NULL;
  if (include_optional) {
    coverage_info = coverage_info_create(
      1,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    coverage_info = coverage_info_create(
      1,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return coverage_info;
}


#ifdef coverage_info_MAIN

void test_coverage_info(int include_optional) {
    coverage_info_t* coverage_info_1 = instantiate_coverage_info(include_optional);

	cJSON* jsoncoverage_info_1 = coverage_info_convertToJSON(coverage_info_1);
	printf("coverage_info :\n%s\n", cJSON_Print(jsoncoverage_info_1));
	coverage_info_t* coverage_info_2 = coverage_info_parseFromJSON(jsoncoverage_info_1);
	cJSON* jsoncoverage_info_2 = coverage_info_convertToJSON(coverage_info_2);
	printf("repeating coverage_info:\n%s\n", cJSON_Print(jsoncoverage_info_2));
}

int main() {
  test_coverage_info(1);
  test_coverage_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // coverage_info_MAIN
#endif // coverage_info_TEST
