#ifndef result_code_TEST
#define result_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define result_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/result_code.h"
result_code_t* instantiate_result_code(int include_optional);



result_code_t* instantiate_result_code(int include_optional) {
  result_code_t* result_code = NULL;
  if (include_optional) {
    result_code = result_code_create(
    );
  } else {
    result_code = result_code_create(
    );
  }

  return result_code;
}


#ifdef result_code_MAIN

void test_result_code(int include_optional) {
    result_code_t* result_code_1 = instantiate_result_code(include_optional);

	cJSON* jsonresult_code_1 = result_code_convertToJSON(result_code_1);
	printf("result_code :\n%s\n", cJSON_Print(jsonresult_code_1));
	result_code_t* result_code_2 = result_code_parseFromJSON(jsonresult_code_1);
	cJSON* jsonresult_code_2 = result_code_convertToJSON(result_code_2);
	printf("repeating result_code:\n%s\n", cJSON_Print(jsonresult_code_2));
}

int main() {
  test_result_code(1);
  test_result_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // result_code_MAIN
#endif // result_code_TEST
