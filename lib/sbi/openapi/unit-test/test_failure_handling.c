#ifndef failure_handling_TEST
#define failure_handling_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define failure_handling_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/failure_handling.h"
failure_handling_t* instantiate_failure_handling(int include_optional);



failure_handling_t* instantiate_failure_handling(int include_optional) {
  failure_handling_t* failure_handling = NULL;
  if (include_optional) {
    failure_handling = failure_handling_create(
    );
  } else {
    failure_handling = failure_handling_create(
    );
  }

  return failure_handling;
}


#ifdef failure_handling_MAIN

void test_failure_handling(int include_optional) {
    failure_handling_t* failure_handling_1 = instantiate_failure_handling(include_optional);

	cJSON* jsonfailure_handling_1 = failure_handling_convertToJSON(failure_handling_1);
	printf("failure_handling :\n%s\n", cJSON_Print(jsonfailure_handling_1));
	failure_handling_t* failure_handling_2 = failure_handling_parseFromJSON(jsonfailure_handling_1);
	cJSON* jsonfailure_handling_2 = failure_handling_convertToJSON(failure_handling_2);
	printf("repeating failure_handling:\n%s\n", cJSON_Print(jsonfailure_handling_2));
}

int main() {
  test_failure_handling(1);
  test_failure_handling(0);

  printf("Hello world \n");
  return 0;
}

#endif // failure_handling_MAIN
#endif // failure_handling_TEST
