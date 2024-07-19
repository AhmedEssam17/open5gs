#ifndef ims_session_priority_TEST
#define ims_session_priority_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ims_session_priority_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ims_session_priority.h"
ims_session_priority_t* instantiate_ims_session_priority(int include_optional);



ims_session_priority_t* instantiate_ims_session_priority(int include_optional) {
  ims_session_priority_t* ims_session_priority = NULL;
  if (include_optional) {
    ims_session_priority = ims_session_priority_create(
    );
  } else {
    ims_session_priority = ims_session_priority_create(
    );
  }

  return ims_session_priority;
}


#ifdef ims_session_priority_MAIN

void test_ims_session_priority(int include_optional) {
    ims_session_priority_t* ims_session_priority_1 = instantiate_ims_session_priority(include_optional);

	cJSON* jsonims_session_priority_1 = ims_session_priority_convertToJSON(ims_session_priority_1);
	printf("ims_session_priority :\n%s\n", cJSON_Print(jsonims_session_priority_1));
	ims_session_priority_t* ims_session_priority_2 = ims_session_priority_parseFromJSON(jsonims_session_priority_1);
	cJSON* jsonims_session_priority_2 = ims_session_priority_convertToJSON(ims_session_priority_2);
	printf("repeating ims_session_priority:\n%s\n", cJSON_Print(jsonims_session_priority_2));
}

int main() {
  test_ims_session_priority(1);
  test_ims_session_priority(0);

  printf("Hello world \n");
  return 0;
}

#endif // ims_session_priority_MAIN
#endif // ims_session_priority_TEST
