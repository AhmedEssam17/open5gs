#ifndef location_reporting_charging_information_TEST
#define location_reporting_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_reporting_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_reporting_charging_information.h"
location_reporting_charging_information_t* instantiate_location_reporting_charging_information(int include_optional);

#include "test_user_information.c"
#include "test_user_location.c"
#include "test_ps_cell_information.c"


location_reporting_charging_information_t* instantiate_location_reporting_charging_information(int include_optional) {
  location_reporting_charging_information_t* location_reporting_charging_information = NULL;
  if (include_optional) {
    location_reporting_charging_information = location_reporting_charging_information_create(
      56,
       // false, not to have infinite recursion
      instantiate_user_information(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
       // false, not to have infinite recursion
      instantiate_ps_cell_information(0),
      "-08:00+1",
      nchf_convergedcharging_location_reporting_charging_information__NR,
      list_createList()
    );
  } else {
    location_reporting_charging_information = location_reporting_charging_information_create(
      56,
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      nchf_convergedcharging_location_reporting_charging_information__NR,
      list_createList()
    );
  }

  return location_reporting_charging_information;
}


#ifdef location_reporting_charging_information_MAIN

void test_location_reporting_charging_information(int include_optional) {
    location_reporting_charging_information_t* location_reporting_charging_information_1 = instantiate_location_reporting_charging_information(include_optional);

	cJSON* jsonlocation_reporting_charging_information_1 = location_reporting_charging_information_convertToJSON(location_reporting_charging_information_1);
	printf("location_reporting_charging_information :\n%s\n", cJSON_Print(jsonlocation_reporting_charging_information_1));
	location_reporting_charging_information_t* location_reporting_charging_information_2 = location_reporting_charging_information_parseFromJSON(jsonlocation_reporting_charging_information_1);
	cJSON* jsonlocation_reporting_charging_information_2 = location_reporting_charging_information_convertToJSON(location_reporting_charging_information_2);
	printf("repeating location_reporting_charging_information:\n%s\n", cJSON_Print(jsonlocation_reporting_charging_information_2));
}

int main() {
  test_location_reporting_charging_information(1);
  test_location_reporting_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_reporting_charging_information_MAIN
#endif // location_reporting_charging_information_TEST
