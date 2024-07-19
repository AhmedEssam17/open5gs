#ifndef sm_address_info_TEST
#define sm_address_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_address_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_address_info.h"
sm_address_info_t* instantiate_sm_address_info(int include_optional);

#include "test_sm_address_type.c"
#include "test_sm_address_domain.c"


sm_address_info_t* instantiate_sm_address_info(int include_optional) {
  sm_address_info_t* sm_address_info = NULL;
  if (include_optional) {
    sm_address_info = sm_address_info_create(
      null,
      "0",
       // false, not to have infinite recursion
      instantiate_sm_address_domain(0)
    );
  } else {
    sm_address_info = sm_address_info_create(
      null,
      "0",
      NULL
    );
  }

  return sm_address_info;
}


#ifdef sm_address_info_MAIN

void test_sm_address_info(int include_optional) {
    sm_address_info_t* sm_address_info_1 = instantiate_sm_address_info(include_optional);

	cJSON* jsonsm_address_info_1 = sm_address_info_convertToJSON(sm_address_info_1);
	printf("sm_address_info :\n%s\n", cJSON_Print(jsonsm_address_info_1));
	sm_address_info_t* sm_address_info_2 = sm_address_info_parseFromJSON(jsonsm_address_info_1);
	cJSON* jsonsm_address_info_2 = sm_address_info_convertToJSON(sm_address_info_2);
	printf("repeating sm_address_info:\n%s\n", cJSON_Print(jsonsm_address_info_2));
}

int main() {
  test_sm_address_info(1);
  test_sm_address_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_address_info_MAIN
#endif // sm_address_info_TEST
