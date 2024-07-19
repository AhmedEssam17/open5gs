#ifndef eas_deployment_charging_information_TEST
#define eas_deployment_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eas_deployment_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eas_deployment_charging_information.h"
eas_deployment_charging_information_t* instantiate_eas_deployment_charging_information(int include_optional);



eas_deployment_charging_information_t* instantiate_eas_deployment_charging_information(int include_optional) {
  eas_deployment_charging_information_t* eas_deployment_charging_information = NULL;
  if (include_optional) {
    eas_deployment_charging_information = eas_deployment_charging_information_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    eas_deployment_charging_information = eas_deployment_charging_information_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return eas_deployment_charging_information;
}


#ifdef eas_deployment_charging_information_MAIN

void test_eas_deployment_charging_information(int include_optional) {
    eas_deployment_charging_information_t* eas_deployment_charging_information_1 = instantiate_eas_deployment_charging_information(include_optional);

	cJSON* jsoneas_deployment_charging_information_1 = eas_deployment_charging_information_convertToJSON(eas_deployment_charging_information_1);
	printf("eas_deployment_charging_information :\n%s\n", cJSON_Print(jsoneas_deployment_charging_information_1));
	eas_deployment_charging_information_t* eas_deployment_charging_information_2 = eas_deployment_charging_information_parseFromJSON(jsoneas_deployment_charging_information_1);
	cJSON* jsoneas_deployment_charging_information_2 = eas_deployment_charging_information_convertToJSON(eas_deployment_charging_information_2);
	printf("repeating eas_deployment_charging_information:\n%s\n", cJSON_Print(jsoneas_deployment_charging_information_2));
}

int main() {
  test_eas_deployment_charging_information(1);
  test_eas_deployment_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // eas_deployment_charging_information_MAIN
#endif // eas_deployment_charging_information_TEST
