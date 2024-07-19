#ifndef result_code_any_of_TEST
#define result_code_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define result_code_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/result_code_any_of.h"
result_code_any_of_t* instantiate_result_code_any_of(int include_optional);



result_code_any_of_t* instantiate_result_code_any_of(int include_optional) {
  result_code_any_of_t* result_code_any_of = NULL;
  if (include_optional) {
    result_code_any_of = result_code_any_of_create(
    );
  } else {
    result_code_any_of = result_code_any_of_create(
    );
  }

  return result_code_any_of;
}


#ifdef result_code_any_of_MAIN

void test_result_code_any_of(int include_optional) {
    result_code_any_of_t* result_code_any_of_1 = instantiate_result_code_any_of(include_optional);

	cJSON* jsonresult_code_any_of_1 = result_code_any_of_convertToJSON(result_code_any_of_1);
	printf("result_code_any_of :\n%s\n", cJSON_Print(jsonresult_code_any_of_1));
	result_code_any_of_t* result_code_any_of_2 = result_code_any_of_parseFromJSON(jsonresult_code_any_of_1);
	cJSON* jsonresult_code_any_of_2 = result_code_any_of_convertToJSON(result_code_any_of_2);
	printf("repeating result_code_any_of:\n%s\n", cJSON_Print(jsonresult_code_any_of_2));
}

int main() {
  test_result_code_any_of(1);
  test_result_code_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // result_code_any_of_MAIN
#endif // result_code_any_of_TEST
