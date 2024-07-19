#ifndef nsm_charging_information_TEST
#define nsm_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nsm_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nsm_charging_information.h"
nsm_charging_information_t* instantiate_nsm_charging_information(int include_optional);

#include "test_management_operation.c"
#include "test_management_operation_status.c"


nsm_charging_information_t* instantiate_nsm_charging_information(int include_optional) {
  nsm_charging_information_t* nsm_charging_information = NULL;
  if (include_optional) {
    nsm_charging_information = nsm_charging_information_create(
      null,
      "0",
      list_createList(),
      null
    );
  } else {
    nsm_charging_information = nsm_charging_information_create(
      null,
      "0",
      list_createList(),
      null
    );
  }

  return nsm_charging_information;
}


#ifdef nsm_charging_information_MAIN

void test_nsm_charging_information(int include_optional) {
    nsm_charging_information_t* nsm_charging_information_1 = instantiate_nsm_charging_information(include_optional);

	cJSON* jsonnsm_charging_information_1 = nsm_charging_information_convertToJSON(nsm_charging_information_1);
	printf("nsm_charging_information :\n%s\n", cJSON_Print(jsonnsm_charging_information_1));
	nsm_charging_information_t* nsm_charging_information_2 = nsm_charging_information_parseFromJSON(jsonnsm_charging_information_1);
	cJSON* jsonnsm_charging_information_2 = nsm_charging_information_convertToJSON(nsm_charging_information_2);
	printf("repeating nsm_charging_information:\n%s\n", cJSON_Print(jsonnsm_charging_information_2));
}

int main() {
  test_nsm_charging_information(1);
  test_nsm_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // nsm_charging_information_MAIN
#endif // nsm_charging_information_TEST
