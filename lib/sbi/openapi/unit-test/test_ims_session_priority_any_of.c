#ifndef ims_session_priority_any_of_TEST
#define ims_session_priority_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ims_session_priority_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ims_session_priority_any_of.h"
ims_session_priority_any_of_t* instantiate_ims_session_priority_any_of(int include_optional);



ims_session_priority_any_of_t* instantiate_ims_session_priority_any_of(int include_optional) {
  ims_session_priority_any_of_t* ims_session_priority_any_of = NULL;
  if (include_optional) {
    ims_session_priority_any_of = ims_session_priority_any_of_create(
    );
  } else {
    ims_session_priority_any_of = ims_session_priority_any_of_create(
    );
  }

  return ims_session_priority_any_of;
}


#ifdef ims_session_priority_any_of_MAIN

void test_ims_session_priority_any_of(int include_optional) {
    ims_session_priority_any_of_t* ims_session_priority_any_of_1 = instantiate_ims_session_priority_any_of(include_optional);

	cJSON* jsonims_session_priority_any_of_1 = ims_session_priority_any_of_convertToJSON(ims_session_priority_any_of_1);
	printf("ims_session_priority_any_of :\n%s\n", cJSON_Print(jsonims_session_priority_any_of_1));
	ims_session_priority_any_of_t* ims_session_priority_any_of_2 = ims_session_priority_any_of_parseFromJSON(jsonims_session_priority_any_of_1);
	cJSON* jsonims_session_priority_any_of_2 = ims_session_priority_any_of_convertToJSON(ims_session_priority_any_of_2);
	printf("repeating ims_session_priority_any_of:\n%s\n", cJSON_Print(jsonims_session_priority_any_of_2));
}

int main() {
  test_ims_session_priority_any_of(1);
  test_ims_session_priority_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ims_session_priority_any_of_MAIN
#endif // ims_session_priority_any_of_TEST
