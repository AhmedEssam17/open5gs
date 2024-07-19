#ifndef failure_handling_any_of_TEST
#define failure_handling_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define failure_handling_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/failure_handling_any_of.h"
failure_handling_any_of_t* instantiate_failure_handling_any_of(int include_optional);



failure_handling_any_of_t* instantiate_failure_handling_any_of(int include_optional) {
  failure_handling_any_of_t* failure_handling_any_of = NULL;
  if (include_optional) {
    failure_handling_any_of = failure_handling_any_of_create(
    );
  } else {
    failure_handling_any_of = failure_handling_any_of_create(
    );
  }

  return failure_handling_any_of;
}


#ifdef failure_handling_any_of_MAIN

void test_failure_handling_any_of(int include_optional) {
    failure_handling_any_of_t* failure_handling_any_of_1 = instantiate_failure_handling_any_of(include_optional);

	cJSON* jsonfailure_handling_any_of_1 = failure_handling_any_of_convertToJSON(failure_handling_any_of_1);
	printf("failure_handling_any_of :\n%s\n", cJSON_Print(jsonfailure_handling_any_of_1));
	failure_handling_any_of_t* failure_handling_any_of_2 = failure_handling_any_of_parseFromJSON(jsonfailure_handling_any_of_1);
	cJSON* jsonfailure_handling_any_of_2 = failure_handling_any_of_convertToJSON(failure_handling_any_of_2);
	printf("repeating failure_handling_any_of:\n%s\n", cJSON_Print(jsonfailure_handling_any_of_2));
}

int main() {
  test_failure_handling_any_of(1);
  test_failure_handling_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // failure_handling_any_of_MAIN
#endif // failure_handling_any_of_TEST
