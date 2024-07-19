#ifndef nef_charging_information_TEST
#define nef_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nef_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nef_charging_information.h"
nef_charging_information_t* instantiate_nef_charging_information(int include_optional);

#include "test_api_direction.c"
#include "test_nf_identification.c"


nef_charging_information_t* instantiate_nef_charging_information(int include_optional) {
  nef_charging_information_t* nef_charging_information = NULL;
  if (include_optional) {
    nef_charging_information = nef_charging_information_create(
      "a",
      "a",
      "a",
      null,
       // false, not to have infinite recursion
      instantiate_nf_identification(0),
      0,
      "0",
      "0",
      "0"
    );
  } else {
    nef_charging_information = nef_charging_information_create(
      "a",
      "a",
      "a",
      null,
      NULL,
      0,
      "0",
      "0",
      "0"
    );
  }

  return nef_charging_information;
}


#ifdef nef_charging_information_MAIN

void test_nef_charging_information(int include_optional) {
    nef_charging_information_t* nef_charging_information_1 = instantiate_nef_charging_information(include_optional);

	cJSON* jsonnef_charging_information_1 = nef_charging_information_convertToJSON(nef_charging_information_1);
	printf("nef_charging_information :\n%s\n", cJSON_Print(jsonnef_charging_information_1));
	nef_charging_information_t* nef_charging_information_2 = nef_charging_information_parseFromJSON(jsonnef_charging_information_1);
	cJSON* jsonnef_charging_information_2 = nef_charging_information_convertToJSON(nef_charging_information_2);
	printf("repeating nef_charging_information:\n%s\n", cJSON_Print(jsonnef_charging_information_2));
}

int main() {
  test_nef_charging_information(1);
  test_nef_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // nef_charging_information_MAIN
#endif // nef_charging_information_TEST
