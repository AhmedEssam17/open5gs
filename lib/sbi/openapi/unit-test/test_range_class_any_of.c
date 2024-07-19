#ifndef range_class_any_of_TEST
#define range_class_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define range_class_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/range_class_any_of.h"
range_class_any_of_t* instantiate_range_class_any_of(int include_optional);



range_class_any_of_t* instantiate_range_class_any_of(int include_optional) {
  range_class_any_of_t* range_class_any_of = NULL;
  if (include_optional) {
    range_class_any_of = range_class_any_of_create(
    );
  } else {
    range_class_any_of = range_class_any_of_create(
    );
  }

  return range_class_any_of;
}


#ifdef range_class_any_of_MAIN

void test_range_class_any_of(int include_optional) {
    range_class_any_of_t* range_class_any_of_1 = instantiate_range_class_any_of(include_optional);

	cJSON* jsonrange_class_any_of_1 = range_class_any_of_convertToJSON(range_class_any_of_1);
	printf("range_class_any_of :\n%s\n", cJSON_Print(jsonrange_class_any_of_1));
	range_class_any_of_t* range_class_any_of_2 = range_class_any_of_parseFromJSON(jsonrange_class_any_of_1);
	cJSON* jsonrange_class_any_of_2 = range_class_any_of_convertToJSON(range_class_any_of_2);
	printf("repeating range_class_any_of:\n%s\n", cJSON_Print(jsonrange_class_any_of_2));
}

int main() {
  test_range_class_any_of(1);
  test_range_class_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // range_class_any_of_MAIN
#endif // range_class_any_of_TEST
