#ifndef range_class_TEST
#define range_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define range_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/range_class.h"
range_class_t* instantiate_range_class(int include_optional);



range_class_t* instantiate_range_class(int include_optional) {
  range_class_t* range_class = NULL;
  if (include_optional) {
    range_class = range_class_create(
    );
  } else {
    range_class = range_class_create(
    );
  }

  return range_class;
}


#ifdef range_class_MAIN

void test_range_class(int include_optional) {
    range_class_t* range_class_1 = instantiate_range_class(include_optional);

	cJSON* jsonrange_class_1 = range_class_convertToJSON(range_class_1);
	printf("range_class :\n%s\n", cJSON_Print(jsonrange_class_1));
	range_class_t* range_class_2 = range_class_parseFromJSON(jsonrange_class_1);
	cJSON* jsonrange_class_2 = range_class_convertToJSON(range_class_2);
	printf("repeating range_class:\n%s\n", cJSON_Print(jsonrange_class_2));
}

int main() {
  test_range_class(1);
  test_range_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // range_class_MAIN
#endif // range_class_TEST
