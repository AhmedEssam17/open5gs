#ifndef roaming_qbc_information_TEST
#define roaming_qbc_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roaming_qbc_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roaming_qbc_information.h"
roaming_qbc_information_t* instantiate_roaming_qbc_information(int include_optional);

#include "test_roaming_charging_profile.c"


roaming_qbc_information_t* instantiate_roaming_qbc_information(int include_optional) {
  roaming_qbc_information_t* roaming_qbc_information = NULL;
  if (include_optional) {
    roaming_qbc_information = roaming_qbc_information_create(
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_roaming_charging_profile(0)
    );
  } else {
    roaming_qbc_information = roaming_qbc_information_create(
      list_createList(),
      "0",
      NULL
    );
  }

  return roaming_qbc_information;
}


#ifdef roaming_qbc_information_MAIN

void test_roaming_qbc_information(int include_optional) {
    roaming_qbc_information_t* roaming_qbc_information_1 = instantiate_roaming_qbc_information(include_optional);

	cJSON* jsonroaming_qbc_information_1 = roaming_qbc_information_convertToJSON(roaming_qbc_information_1);
	printf("roaming_qbc_information :\n%s\n", cJSON_Print(jsonroaming_qbc_information_1));
	roaming_qbc_information_t* roaming_qbc_information_2 = roaming_qbc_information_parseFromJSON(jsonroaming_qbc_information_1);
	cJSON* jsonroaming_qbc_information_2 = roaming_qbc_information_convertToJSON(roaming_qbc_information_2);
	printf("repeating roaming_qbc_information:\n%s\n", cJSON_Print(jsonroaming_qbc_information_2));
}

int main() {
  test_roaming_qbc_information(1);
  test_roaming_qbc_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // roaming_qbc_information_MAIN
#endif // roaming_qbc_information_TEST
