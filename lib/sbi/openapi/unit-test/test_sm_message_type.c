#ifndef sm_message_type_TEST
#define sm_message_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_message_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_message_type.h"
sm_message_type_t* instantiate_sm_message_type(int include_optional);



sm_message_type_t* instantiate_sm_message_type(int include_optional) {
  sm_message_type_t* sm_message_type = NULL;
  if (include_optional) {
    sm_message_type = sm_message_type_create(
    );
  } else {
    sm_message_type = sm_message_type_create(
    );
  }

  return sm_message_type;
}


#ifdef sm_message_type_MAIN

void test_sm_message_type(int include_optional) {
    sm_message_type_t* sm_message_type_1 = instantiate_sm_message_type(include_optional);

	cJSON* jsonsm_message_type_1 = sm_message_type_convertToJSON(sm_message_type_1);
	printf("sm_message_type :\n%s\n", cJSON_Print(jsonsm_message_type_1));
	sm_message_type_t* sm_message_type_2 = sm_message_type_parseFromJSON(jsonsm_message_type_1);
	cJSON* jsonsm_message_type_2 = sm_message_type_convertToJSON(sm_message_type_2);
	printf("repeating sm_message_type:\n%s\n", cJSON_Print(jsonsm_message_type_2));
}

int main() {
  test_sm_message_type(1);
  test_sm_message_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_message_type_MAIN
#endif // sm_message_type_TEST
