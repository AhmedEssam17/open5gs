#ifndef null_value_TEST
#define null_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define null_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/null_value.h"
null_value_t* instantiate_null_value(int include_optional);



null_value_t* instantiate_null_value(int include_optional) {
  null_value_t* null_value = NULL;
  if (include_optional) {
    null_value = null_value_create(
    );
  } else {
    null_value = null_value_create(
    );
  }

  return null_value;
}


#ifdef null_value_MAIN

void test_null_value(int include_optional) {
    null_value_t* null_value_1 = instantiate_null_value(include_optional);

	cJSON* jsonnull_value_1 = null_value_convertToJSON(null_value_1);
	printf("null_value :\n%s\n", cJSON_Print(jsonnull_value_1));
	null_value_t* null_value_2 = null_value_parseFromJSON(jsonnull_value_1);
	cJSON* jsonnull_value_2 = null_value_convertToJSON(null_value_2);
	printf("repeating null_value:\n%s\n", cJSON_Print(jsonnull_value_2));
}

int main() {
  test_null_value(1);
  test_null_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // null_value_MAIN
#endif // null_value_TEST
