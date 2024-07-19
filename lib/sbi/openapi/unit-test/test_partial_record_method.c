#ifndef partial_record_method_TEST
#define partial_record_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define partial_record_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/partial_record_method.h"
partial_record_method_t* instantiate_partial_record_method(int include_optional);



partial_record_method_t* instantiate_partial_record_method(int include_optional) {
  partial_record_method_t* partial_record_method = NULL;
  if (include_optional) {
    partial_record_method = partial_record_method_create(
    );
  } else {
    partial_record_method = partial_record_method_create(
    );
  }

  return partial_record_method;
}


#ifdef partial_record_method_MAIN

void test_partial_record_method(int include_optional) {
    partial_record_method_t* partial_record_method_1 = instantiate_partial_record_method(include_optional);

	cJSON* jsonpartial_record_method_1 = partial_record_method_convertToJSON(partial_record_method_1);
	printf("partial_record_method :\n%s\n", cJSON_Print(jsonpartial_record_method_1));
	partial_record_method_t* partial_record_method_2 = partial_record_method_parseFromJSON(jsonpartial_record_method_1);
	cJSON* jsonpartial_record_method_2 = partial_record_method_convertToJSON(partial_record_method_2);
	printf("repeating partial_record_method:\n%s\n", cJSON_Print(jsonpartial_record_method_2));
}

int main() {
  test_partial_record_method(1);
  test_partial_record_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // partial_record_method_MAIN
#endif // partial_record_method_TEST
