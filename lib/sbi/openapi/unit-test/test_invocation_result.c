#ifndef invocation_result_TEST
#define invocation_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invocation_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invocation_result.h"
invocation_result_t* instantiate_invocation_result(int include_optional);

#include "test_problem_details.c"
#include "test_failure_handling.c"


invocation_result_t* instantiate_invocation_result(int include_optional) {
  invocation_result_t* invocation_result = NULL;
  if (include_optional) {
    invocation_result = invocation_result_create(
       // false, not to have infinite recursion
      instantiate_problem_details(0),
      null
    );
  } else {
    invocation_result = invocation_result_create(
      NULL,
      null
    );
  }

  return invocation_result;
}


#ifdef invocation_result_MAIN

void test_invocation_result(int include_optional) {
    invocation_result_t* invocation_result_1 = instantiate_invocation_result(include_optional);

	cJSON* jsoninvocation_result_1 = invocation_result_convertToJSON(invocation_result_1);
	printf("invocation_result :\n%s\n", cJSON_Print(jsoninvocation_result_1));
	invocation_result_t* invocation_result_2 = invocation_result_parseFromJSON(jsoninvocation_result_1);
	cJSON* jsoninvocation_result_2 = invocation_result_convertToJSON(invocation_result_2);
	printf("repeating invocation_result:\n%s\n", cJSON_Print(jsoninvocation_result_2));
}

int main() {
  test_invocation_result(1);
  test_invocation_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // invocation_result_MAIN
#endif // invocation_result_TEST
