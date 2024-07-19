#ifndef threshold_value_TEST
#define threshold_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define threshold_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/threshold_value.h"
threshold_value_t* instantiate_threshold_value(int include_optional);



threshold_value_t* instantiate_threshold_value(int include_optional) {
  threshold_value_t* threshold_value = NULL;
  if (include_optional) {
    threshold_value = threshold_value_create(
      0,
      0
    );
  } else {
    threshold_value = threshold_value_create(
      0,
      0
    );
  }

  return threshold_value;
}


#ifdef threshold_value_MAIN

void test_threshold_value(int include_optional) {
    threshold_value_t* threshold_value_1 = instantiate_threshold_value(include_optional);

	cJSON* jsonthreshold_value_1 = threshold_value_convertToJSON(threshold_value_1);
	printf("threshold_value :\n%s\n", cJSON_Print(jsonthreshold_value_1));
	threshold_value_t* threshold_value_2 = threshold_value_parseFromJSON(jsonthreshold_value_1);
	cJSON* jsonthreshold_value_2 = threshold_value_convertToJSON(threshold_value_2);
	printf("repeating threshold_value:\n%s\n", cJSON_Print(jsonthreshold_value_2));
}

int main() {
  test_threshold_value(1);
  test_threshold_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // threshold_value_MAIN
#endif // threshold_value_TEST
