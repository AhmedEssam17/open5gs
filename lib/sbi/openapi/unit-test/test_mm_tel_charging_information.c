#ifndef mm_tel_charging_information_TEST
#define mm_tel_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mm_tel_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mm_tel_charging_information.h"
mm_tel_charging_information_t* instantiate_mm_tel_charging_information(int include_optional);



mm_tel_charging_information_t* instantiate_mm_tel_charging_information(int include_optional) {
  mm_tel_charging_information_t* mm_tel_charging_information = NULL;
  if (include_optional) {
    mm_tel_charging_information = mm_tel_charging_information_create(
      list_createList()
    );
  } else {
    mm_tel_charging_information = mm_tel_charging_information_create(
      list_createList()
    );
  }

  return mm_tel_charging_information;
}


#ifdef mm_tel_charging_information_MAIN

void test_mm_tel_charging_information(int include_optional) {
    mm_tel_charging_information_t* mm_tel_charging_information_1 = instantiate_mm_tel_charging_information(include_optional);

	cJSON* jsonmm_tel_charging_information_1 = mm_tel_charging_information_convertToJSON(mm_tel_charging_information_1);
	printf("mm_tel_charging_information :\n%s\n", cJSON_Print(jsonmm_tel_charging_information_1));
	mm_tel_charging_information_t* mm_tel_charging_information_2 = mm_tel_charging_information_parseFromJSON(jsonmm_tel_charging_information_1);
	cJSON* jsonmm_tel_charging_information_2 = mm_tel_charging_information_convertToJSON(mm_tel_charging_information_2);
	printf("repeating mm_tel_charging_information:\n%s\n", cJSON_Print(jsonmm_tel_charging_information_2));
}

int main() {
  test_mm_tel_charging_information(1);
  test_mm_tel_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // mm_tel_charging_information_MAIN
#endif // mm_tel_charging_information_TEST
