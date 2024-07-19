#ifndef nspa_charging_information_TEST
#define nspa_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nspa_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nspa_charging_information.h"
nspa_charging_information_t* instantiate_nspa_charging_information(int include_optional);

#include "test_snssai.c"


nspa_charging_information_t* instantiate_nspa_charging_information(int include_optional) {
  nspa_charging_information_t* nspa_charging_information = NULL;
  if (include_optional) {
    nspa_charging_information = nspa_charging_information_create(
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    nspa_charging_information = nspa_charging_information_create(
      NULL
    );
  }

  return nspa_charging_information;
}


#ifdef nspa_charging_information_MAIN

void test_nspa_charging_information(int include_optional) {
    nspa_charging_information_t* nspa_charging_information_1 = instantiate_nspa_charging_information(include_optional);

	cJSON* jsonnspa_charging_information_1 = nspa_charging_information_convertToJSON(nspa_charging_information_1);
	printf("nspa_charging_information :\n%s\n", cJSON_Print(jsonnspa_charging_information_1));
	nspa_charging_information_t* nspa_charging_information_2 = nspa_charging_information_parseFromJSON(jsonnspa_charging_information_1);
	cJSON* jsonnspa_charging_information_2 = nspa_charging_information_convertToJSON(nspa_charging_information_2);
	printf("repeating nspa_charging_information:\n%s\n", cJSON_Print(jsonnspa_charging_information_2));
}

int main() {
  test_nspa_charging_information(1);
  test_nspa_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // nspa_charging_information_MAIN
#endif // nspa_charging_information_TEST
