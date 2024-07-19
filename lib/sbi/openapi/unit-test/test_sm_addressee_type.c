#ifndef sm_addressee_type_TEST
#define sm_addressee_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_addressee_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_addressee_type.h"
sm_addressee_type_t* instantiate_sm_addressee_type(int include_optional);



sm_addressee_type_t* instantiate_sm_addressee_type(int include_optional) {
  sm_addressee_type_t* sm_addressee_type = NULL;
  if (include_optional) {
    sm_addressee_type = sm_addressee_type_create(
    );
  } else {
    sm_addressee_type = sm_addressee_type_create(
    );
  }

  return sm_addressee_type;
}


#ifdef sm_addressee_type_MAIN

void test_sm_addressee_type(int include_optional) {
    sm_addressee_type_t* sm_addressee_type_1 = instantiate_sm_addressee_type(include_optional);

	cJSON* jsonsm_addressee_type_1 = sm_addressee_type_convertToJSON(sm_addressee_type_1);
	printf("sm_addressee_type :\n%s\n", cJSON_Print(jsonsm_addressee_type_1));
	sm_addressee_type_t* sm_addressee_type_2 = sm_addressee_type_parseFromJSON(jsonsm_addressee_type_1);
	cJSON* jsonsm_addressee_type_2 = sm_addressee_type_convertToJSON(sm_addressee_type_2);
	printf("repeating sm_addressee_type:\n%s\n", cJSON_Print(jsonsm_addressee_type_2));
}

int main() {
  test_sm_addressee_type(1);
  test_sm_addressee_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_addressee_type_MAIN
#endif // sm_addressee_type_TEST
