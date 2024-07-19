#ifndef sm_service_type_TEST
#define sm_service_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_service_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_service_type.h"
sm_service_type_t* instantiate_sm_service_type(int include_optional);



sm_service_type_t* instantiate_sm_service_type(int include_optional) {
  sm_service_type_t* sm_service_type = NULL;
  if (include_optional) {
    sm_service_type = sm_service_type_create(
    );
  } else {
    sm_service_type = sm_service_type_create(
    );
  }

  return sm_service_type;
}


#ifdef sm_service_type_MAIN

void test_sm_service_type(int include_optional) {
    sm_service_type_t* sm_service_type_1 = instantiate_sm_service_type(include_optional);

	cJSON* jsonsm_service_type_1 = sm_service_type_convertToJSON(sm_service_type_1);
	printf("sm_service_type :\n%s\n", cJSON_Print(jsonsm_service_type_1));
	sm_service_type_t* sm_service_type_2 = sm_service_type_parseFromJSON(jsonsm_service_type_1);
	cJSON* jsonsm_service_type_2 = sm_service_type_convertToJSON(sm_service_type_2);
	printf("repeating sm_service_type:\n%s\n", cJSON_Print(jsonsm_service_type_2));
}

int main() {
  test_sm_service_type(1);
  test_sm_service_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_service_type_MAIN
#endif // sm_service_type_TEST
