#ifndef partial_record_method_any_of_TEST
#define partial_record_method_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define partial_record_method_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/partial_record_method_any_of.h"
partial_record_method_any_of_t* instantiate_partial_record_method_any_of(int include_optional);



partial_record_method_any_of_t* instantiate_partial_record_method_any_of(int include_optional) {
  partial_record_method_any_of_t* partial_record_method_any_of = NULL;
  if (include_optional) {
    partial_record_method_any_of = partial_record_method_any_of_create(
    );
  } else {
    partial_record_method_any_of = partial_record_method_any_of_create(
    );
  }

  return partial_record_method_any_of;
}


#ifdef partial_record_method_any_of_MAIN

void test_partial_record_method_any_of(int include_optional) {
    partial_record_method_any_of_t* partial_record_method_any_of_1 = instantiate_partial_record_method_any_of(include_optional);

	cJSON* jsonpartial_record_method_any_of_1 = partial_record_method_any_of_convertToJSON(partial_record_method_any_of_1);
	printf("partial_record_method_any_of :\n%s\n", cJSON_Print(jsonpartial_record_method_any_of_1));
	partial_record_method_any_of_t* partial_record_method_any_of_2 = partial_record_method_any_of_parseFromJSON(jsonpartial_record_method_any_of_1);
	cJSON* jsonpartial_record_method_any_of_2 = partial_record_method_any_of_convertToJSON(partial_record_method_any_of_2);
	printf("repeating partial_record_method_any_of:\n%s\n", cJSON_Print(jsonpartial_record_method_any_of_2));
}

int main() {
  test_partial_record_method_any_of(1);
  test_partial_record_method_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // partial_record_method_any_of_MAIN
#endif // partial_record_method_any_of_TEST
