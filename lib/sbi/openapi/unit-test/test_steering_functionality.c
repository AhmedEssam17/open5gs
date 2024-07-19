#ifndef steering_functionality_TEST
#define steering_functionality_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define steering_functionality_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/steering_functionality.h"
steering_functionality_t* instantiate_steering_functionality(int include_optional);



steering_functionality_t* instantiate_steering_functionality(int include_optional) {
  steering_functionality_t* steering_functionality = NULL;
  if (include_optional) {
    steering_functionality = steering_functionality_create(
    );
  } else {
    steering_functionality = steering_functionality_create(
    );
  }

  return steering_functionality;
}


#ifdef steering_functionality_MAIN

void test_steering_functionality(int include_optional) {
    steering_functionality_t* steering_functionality_1 = instantiate_steering_functionality(include_optional);

	cJSON* jsonsteering_functionality_1 = steering_functionality_convertToJSON(steering_functionality_1);
	printf("steering_functionality :\n%s\n", cJSON_Print(jsonsteering_functionality_1));
	steering_functionality_t* steering_functionality_2 = steering_functionality_parseFromJSON(jsonsteering_functionality_1);
	cJSON* jsonsteering_functionality_2 = steering_functionality_convertToJSON(steering_functionality_2);
	printf("repeating steering_functionality:\n%s\n", cJSON_Print(jsonsteering_functionality_2));
}

int main() {
  test_steering_functionality(1);
  test_steering_functionality(0);

  printf("Hello world \n");
  return 0;
}

#endif // steering_functionality_MAIN
#endif // steering_functionality_TEST
