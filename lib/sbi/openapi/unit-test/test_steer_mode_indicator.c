#ifndef steer_mode_indicator_TEST
#define steer_mode_indicator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define steer_mode_indicator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/steer_mode_indicator.h"
steer_mode_indicator_t* instantiate_steer_mode_indicator(int include_optional);



steer_mode_indicator_t* instantiate_steer_mode_indicator(int include_optional) {
  steer_mode_indicator_t* steer_mode_indicator = NULL;
  if (include_optional) {
    steer_mode_indicator = steer_mode_indicator_create(
    );
  } else {
    steer_mode_indicator = steer_mode_indicator_create(
    );
  }

  return steer_mode_indicator;
}


#ifdef steer_mode_indicator_MAIN

void test_steer_mode_indicator(int include_optional) {
    steer_mode_indicator_t* steer_mode_indicator_1 = instantiate_steer_mode_indicator(include_optional);

	cJSON* jsonsteer_mode_indicator_1 = steer_mode_indicator_convertToJSON(steer_mode_indicator_1);
	printf("steer_mode_indicator :\n%s\n", cJSON_Print(jsonsteer_mode_indicator_1));
	steer_mode_indicator_t* steer_mode_indicator_2 = steer_mode_indicator_parseFromJSON(jsonsteer_mode_indicator_1);
	cJSON* jsonsteer_mode_indicator_2 = steer_mode_indicator_convertToJSON(steer_mode_indicator_2);
	printf("repeating steer_mode_indicator:\n%s\n", cJSON_Print(jsonsteer_mode_indicator_2));
}

int main() {
  test_steer_mode_indicator(1);
  test_steer_mode_indicator(0);

  printf("Hello world \n");
  return 0;
}

#endif // steer_mode_indicator_MAIN
#endif // steer_mode_indicator_TEST
