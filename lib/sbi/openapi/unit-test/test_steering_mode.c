#ifndef steering_mode_TEST
#define steering_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define steering_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/steering_mode.h"
steering_mode_t* instantiate_steering_mode(int include_optional);

#include "test_access_type_rm.c"
#include "test_threshold_value.c"


steering_mode_t* instantiate_steering_mode(int include_optional) {
  steering_mode_t* steering_mode = NULL;
  if (include_optional) {
    steering_mode = steering_mode_create(
      nchf_convergedcharging_steering_mode__ACTIVE_STANDBY,
      nchf_convergedcharging_steering_mode__3GPP_ACCESS,
      null,
      0,
      nchf_convergedcharging_steering_mode__3GPP_ACCESS,
       // false, not to have infinite recursion
      instantiate_threshold_value(0),
      nchf_convergedcharging_steering_mode__AUTO_LOAD_BALANCE
    );
  } else {
    steering_mode = steering_mode_create(
      nchf_convergedcharging_steering_mode__ACTIVE_STANDBY,
      nchf_convergedcharging_steering_mode__3GPP_ACCESS,
      null,
      0,
      nchf_convergedcharging_steering_mode__3GPP_ACCESS,
      NULL,
      nchf_convergedcharging_steering_mode__AUTO_LOAD_BALANCE
    );
  }

  return steering_mode;
}


#ifdef steering_mode_MAIN

void test_steering_mode(int include_optional) {
    steering_mode_t* steering_mode_1 = instantiate_steering_mode(include_optional);

	cJSON* jsonsteering_mode_1 = steering_mode_convertToJSON(steering_mode_1);
	printf("steering_mode :\n%s\n", cJSON_Print(jsonsteering_mode_1));
	steering_mode_t* steering_mode_2 = steering_mode_parseFromJSON(jsonsteering_mode_1);
	cJSON* jsonsteering_mode_2 = steering_mode_convertToJSON(steering_mode_2);
	printf("repeating steering_mode:\n%s\n", cJSON_Print(jsonsteering_mode_2));
}

int main() {
  test_steering_mode(1);
  test_steering_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // steering_mode_MAIN
#endif // steering_mode_TEST
