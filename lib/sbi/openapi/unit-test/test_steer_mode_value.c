#ifndef steer_mode_value_TEST
#define steer_mode_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define steer_mode_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/steer_mode_value.h"
steer_mode_value_t* instantiate_steer_mode_value(int include_optional);



steer_mode_value_t* instantiate_steer_mode_value(int include_optional) {
  steer_mode_value_t* steer_mode_value = NULL;
  if (include_optional) {
    steer_mode_value = steer_mode_value_create(
    );
  } else {
    steer_mode_value = steer_mode_value_create(
    );
  }

  return steer_mode_value;
}


#ifdef steer_mode_value_MAIN

void test_steer_mode_value(int include_optional) {
    steer_mode_value_t* steer_mode_value_1 = instantiate_steer_mode_value(include_optional);

	cJSON* jsonsteer_mode_value_1 = steer_mode_value_convertToJSON(steer_mode_value_1);
	printf("steer_mode_value :\n%s\n", cJSON_Print(jsonsteer_mode_value_1));
	steer_mode_value_t* steer_mode_value_2 = steer_mode_value_parseFromJSON(jsonsteer_mode_value_1);
	cJSON* jsonsteer_mode_value_2 = steer_mode_value_convertToJSON(steer_mode_value_2);
	printf("repeating steer_mode_value:\n%s\n", cJSON_Print(jsonsteer_mode_value_2));
}

int main() {
  test_steer_mode_value(1);
  test_steer_mode_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // steer_mode_value_MAIN
#endif // steer_mode_value_TEST
