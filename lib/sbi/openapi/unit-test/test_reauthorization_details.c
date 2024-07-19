#ifndef reauthorization_details_TEST
#define reauthorization_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reauthorization_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reauthorization_details.h"
reauthorization_details_t* instantiate_reauthorization_details(int include_optional);

#include "test_quota_management_indicator.c"


reauthorization_details_t* instantiate_reauthorization_details(int include_optional) {
  reauthorization_details_t* reauthorization_details = NULL;
  if (include_optional) {
    reauthorization_details = reauthorization_details_create(
      0,
      0,
      null
    );
  } else {
    reauthorization_details = reauthorization_details_create(
      0,
      0,
      null
    );
  }

  return reauthorization_details;
}


#ifdef reauthorization_details_MAIN

void test_reauthorization_details(int include_optional) {
    reauthorization_details_t* reauthorization_details_1 = instantiate_reauthorization_details(include_optional);

	cJSON* jsonreauthorization_details_1 = reauthorization_details_convertToJSON(reauthorization_details_1);
	printf("reauthorization_details :\n%s\n", cJSON_Print(jsonreauthorization_details_1));
	reauthorization_details_t* reauthorization_details_2 = reauthorization_details_parseFromJSON(jsonreauthorization_details_1);
	cJSON* jsonreauthorization_details_2 = reauthorization_details_convertToJSON(reauthorization_details_2);
	printf("repeating reauthorization_details:\n%s\n", cJSON_Print(jsonreauthorization_details_2));
}

int main() {
  test_reauthorization_details(1);
  test_reauthorization_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // reauthorization_details_MAIN
#endif // reauthorization_details_TEST
