#ifndef sm_address_type_TEST
#define sm_address_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_address_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_address_type.h"
sm_address_type_t* instantiate_sm_address_type(int include_optional);



sm_address_type_t* instantiate_sm_address_type(int include_optional) {
  sm_address_type_t* sm_address_type = NULL;
  if (include_optional) {
    sm_address_type = sm_address_type_create(
    );
  } else {
    sm_address_type = sm_address_type_create(
    );
  }

  return sm_address_type;
}


#ifdef sm_address_type_MAIN

void test_sm_address_type(int include_optional) {
    sm_address_type_t* sm_address_type_1 = instantiate_sm_address_type(include_optional);

	cJSON* jsonsm_address_type_1 = sm_address_type_convertToJSON(sm_address_type_1);
	printf("sm_address_type :\n%s\n", cJSON_Print(jsonsm_address_type_1));
	sm_address_type_t* sm_address_type_2 = sm_address_type_parseFromJSON(jsonsm_address_type_1);
	cJSON* jsonsm_address_type_2 = sm_address_type_convertToJSON(sm_address_type_2);
	printf("repeating sm_address_type:\n%s\n", cJSON_Print(jsonsm_address_type_2));
}

int main() {
  test_sm_address_type(1);
  test_sm_address_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_address_type_MAIN
#endif // sm_address_type_TEST
