#ifndef roaming_charging_profile_TEST
#define roaming_charging_profile_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roaming_charging_profile_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roaming_charging_profile.h"
roaming_charging_profile_t* instantiate_roaming_charging_profile(int include_optional);

#include "test_partial_record_method.c"


roaming_charging_profile_t* instantiate_roaming_charging_profile(int include_optional) {
  roaming_charging_profile_t* roaming_charging_profile = NULL;
  if (include_optional) {
    roaming_charging_profile = roaming_charging_profile_create(
      list_createList(),
      null
    );
  } else {
    roaming_charging_profile = roaming_charging_profile_create(
      list_createList(),
      null
    );
  }

  return roaming_charging_profile;
}


#ifdef roaming_charging_profile_MAIN

void test_roaming_charging_profile(int include_optional) {
    roaming_charging_profile_t* roaming_charging_profile_1 = instantiate_roaming_charging_profile(include_optional);

	cJSON* jsonroaming_charging_profile_1 = roaming_charging_profile_convertToJSON(roaming_charging_profile_1);
	printf("roaming_charging_profile :\n%s\n", cJSON_Print(jsonroaming_charging_profile_1));
	roaming_charging_profile_t* roaming_charging_profile_2 = roaming_charging_profile_parseFromJSON(jsonroaming_charging_profile_1);
	cJSON* jsonroaming_charging_profile_2 = roaming_charging_profile_convertToJSON(roaming_charging_profile_2);
	printf("repeating roaming_charging_profile:\n%s\n", cJSON_Print(jsonroaming_charging_profile_2));
}

int main() {
  test_roaming_charging_profile(1);
  test_roaming_charging_profile(0);

  printf("Hello world \n");
  return 0;
}

#endif // roaming_charging_profile_MAIN
#endif // roaming_charging_profile_TEST
