#ifndef originator_info_TEST
#define originator_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define originator_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/originator_info.h"
originator_info_t* instantiate_originator_info(int include_optional);

#include "test_sm_address_info.c"
#include "test_sm_address_info.c"
#include "test_sm_interface.c"


originator_info_t* instantiate_originator_info(int include_optional) {
  originator_info_t* originator_info = NULL;
  if (include_optional) {
    originator_info = originator_info_create(
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_sm_address_info(0),
       // false, not to have infinite recursion
      instantiate_sm_address_info(0),
      "0",
       // false, not to have infinite recursion
      instantiate_sm_interface(0),
      "0"
    );
  } else {
    originator_info = originator_info_create(
      "a",
      "a",
      NULL,
      NULL,
      "0",
      NULL,
      "0"
    );
  }

  return originator_info;
}


#ifdef originator_info_MAIN

void test_originator_info(int include_optional) {
    originator_info_t* originator_info_1 = instantiate_originator_info(include_optional);

	cJSON* jsonoriginator_info_1 = originator_info_convertToJSON(originator_info_1);
	printf("originator_info :\n%s\n", cJSON_Print(jsonoriginator_info_1));
	originator_info_t* originator_info_2 = originator_info_parseFromJSON(jsonoriginator_info_1);
	cJSON* jsonoriginator_info_2 = originator_info_convertToJSON(originator_info_2);
	printf("repeating originator_info:\n%s\n", cJSON_Print(jsonoriginator_info_2));
}

int main() {
  test_originator_info(1);
  test_originator_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // originator_info_MAIN
#endif // originator_info_TEST
