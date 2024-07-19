#ifndef service_profile_charging_information_TEST
#define service_profile_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_profile_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_profile_charging_information.h"
service_profile_charging_information_t* instantiate_service_profile_charging_information(int include_optional);

#include "test_throughput.c"
#include "test_throughput.c"
#include "test_throughput.c"
#include "test_throughput.c"


service_profile_charging_information_t* instantiate_service_profile_charging_information(int include_optional) {
  service_profile_charging_information_t* service_profile_charging_information = NULL;
  if (include_optional) {
    service_profile_charging_information = service_profile_charging_information_create(
      "0",
      list_createList(),
      56,
      1.337,
      56,
      "0",
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_throughput(0),
       // false, not to have infinite recursion
      instantiate_throughput(0),
       // false, not to have infinite recursion
      instantiate_throughput(0),
       // false, not to have infinite recursion
      instantiate_throughput(0),
      56,
      "0",
      56,
      "0"
    );
  } else {
    service_profile_charging_information = service_profile_charging_information_create(
      "0",
      list_createList(),
      56,
      1.337,
      56,
      "0",
      56,
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      56,
      "0",
      56,
      "0"
    );
  }

  return service_profile_charging_information;
}


#ifdef service_profile_charging_information_MAIN

void test_service_profile_charging_information(int include_optional) {
    service_profile_charging_information_t* service_profile_charging_information_1 = instantiate_service_profile_charging_information(include_optional);

	cJSON* jsonservice_profile_charging_information_1 = service_profile_charging_information_convertToJSON(service_profile_charging_information_1);
	printf("service_profile_charging_information :\n%s\n", cJSON_Print(jsonservice_profile_charging_information_1));
	service_profile_charging_information_t* service_profile_charging_information_2 = service_profile_charging_information_parseFromJSON(jsonservice_profile_charging_information_1);
	cJSON* jsonservice_profile_charging_information_2 = service_profile_charging_information_convertToJSON(service_profile_charging_information_2);
	printf("repeating service_profile_charging_information:\n%s\n", cJSON_Print(jsonservice_profile_charging_information_2));
}

int main() {
  test_service_profile_charging_information(1);
  test_service_profile_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_profile_charging_information_MAIN
#endif // service_profile_charging_information_TEST
