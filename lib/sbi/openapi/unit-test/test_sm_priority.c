#ifndef sm_priority_TEST
#define sm_priority_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_priority_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_priority.h"
sm_priority_t* instantiate_sm_priority(int include_optional);



sm_priority_t* instantiate_sm_priority(int include_optional) {
  sm_priority_t* sm_priority = NULL;
  if (include_optional) {
    sm_priority = sm_priority_create(
    );
  } else {
    sm_priority = sm_priority_create(
    );
  }

  return sm_priority;
}


#ifdef sm_priority_MAIN

void test_sm_priority(int include_optional) {
    sm_priority_t* sm_priority_1 = instantiate_sm_priority(include_optional);

	cJSON* jsonsm_priority_1 = sm_priority_convertToJSON(sm_priority_1);
	printf("sm_priority :\n%s\n", cJSON_Print(jsonsm_priority_1));
	sm_priority_t* sm_priority_2 = sm_priority_parseFromJSON(jsonsm_priority_1);
	cJSON* jsonsm_priority_2 = sm_priority_convertToJSON(sm_priority_2);
	printf("repeating sm_priority:\n%s\n", cJSON_Print(jsonsm_priority_2));
}

int main() {
  test_sm_priority(1);
  test_sm_priority(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_priority_MAIN
#endif // sm_priority_TEST
