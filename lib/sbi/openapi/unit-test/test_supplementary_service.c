#ifndef supplementary_service_TEST
#define supplementary_service_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplementary_service_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplementary_service.h"
supplementary_service_t* instantiate_supplementary_service(int include_optional);

#include "test_supplementary_service_type.c"
#include "test_supplementary_service_mode.c"
#include "test_participant_action_type.c"


supplementary_service_t* instantiate_supplementary_service(int include_optional) {
  supplementary_service_t* supplementary_service = NULL;
  if (include_optional) {
    supplementary_service = supplementary_service_create(
      null,
      null,
      0,
      "0",
      "0",
      null,
      "2013-10-20T19:20:30+01:00",
      0,
      "a"
    );
  } else {
    supplementary_service = supplementary_service_create(
      null,
      null,
      0,
      "0",
      "0",
      null,
      "2013-10-20T19:20:30+01:00",
      0,
      "a"
    );
  }

  return supplementary_service;
}


#ifdef supplementary_service_MAIN

void test_supplementary_service(int include_optional) {
    supplementary_service_t* supplementary_service_1 = instantiate_supplementary_service(include_optional);

	cJSON* jsonsupplementary_service_1 = supplementary_service_convertToJSON(supplementary_service_1);
	printf("supplementary_service :\n%s\n", cJSON_Print(jsonsupplementary_service_1));
	supplementary_service_t* supplementary_service_2 = supplementary_service_parseFromJSON(jsonsupplementary_service_1);
	cJSON* jsonsupplementary_service_2 = supplementary_service_convertToJSON(supplementary_service_2);
	printf("repeating supplementary_service:\n%s\n", cJSON_Print(jsonsupplementary_service_2));
}

int main() {
  test_supplementary_service(1);
  test_supplementary_service(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplementary_service_MAIN
#endif // supplementary_service_TEST
