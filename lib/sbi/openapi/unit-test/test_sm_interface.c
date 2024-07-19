#ifndef sm_interface_TEST
#define sm_interface_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_interface_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_interface.h"
sm_interface_t* instantiate_sm_interface(int include_optional);

#include "test_interface_type.c"


sm_interface_t* instantiate_sm_interface(int include_optional) {
  sm_interface_t* sm_interface = NULL;
  if (include_optional) {
    sm_interface = sm_interface_create(
      "0",
      "0",
      "0",
      null
    );
  } else {
    sm_interface = sm_interface_create(
      "0",
      "0",
      "0",
      null
    );
  }

  return sm_interface;
}


#ifdef sm_interface_MAIN

void test_sm_interface(int include_optional) {
    sm_interface_t* sm_interface_1 = instantiate_sm_interface(include_optional);

	cJSON* jsonsm_interface_1 = sm_interface_convertToJSON(sm_interface_1);
	printf("sm_interface :\n%s\n", cJSON_Print(jsonsm_interface_1));
	sm_interface_t* sm_interface_2 = sm_interface_parseFromJSON(jsonsm_interface_1);
	cJSON* jsonsm_interface_2 = sm_interface_convertToJSON(sm_interface_2);
	printf("repeating sm_interface:\n%s\n", cJSON_Print(jsonsm_interface_2));
}

int main() {
  test_sm_interface(1);
  test_sm_interface(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_interface_MAIN
#endif // sm_interface_TEST
