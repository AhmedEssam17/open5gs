#ifndef mico_mode_indication_any_of_TEST
#define mico_mode_indication_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mico_mode_indication_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mico_mode_indication_any_of.h"
mico_mode_indication_any_of_t* instantiate_mico_mode_indication_any_of(int include_optional);



mico_mode_indication_any_of_t* instantiate_mico_mode_indication_any_of(int include_optional) {
  mico_mode_indication_any_of_t* mico_mode_indication_any_of = NULL;
  if (include_optional) {
    mico_mode_indication_any_of = mico_mode_indication_any_of_create(
    );
  } else {
    mico_mode_indication_any_of = mico_mode_indication_any_of_create(
    );
  }

  return mico_mode_indication_any_of;
}


#ifdef mico_mode_indication_any_of_MAIN

void test_mico_mode_indication_any_of(int include_optional) {
    mico_mode_indication_any_of_t* mico_mode_indication_any_of_1 = instantiate_mico_mode_indication_any_of(include_optional);

	cJSON* jsonmico_mode_indication_any_of_1 = mico_mode_indication_any_of_convertToJSON(mico_mode_indication_any_of_1);
	printf("mico_mode_indication_any_of :\n%s\n", cJSON_Print(jsonmico_mode_indication_any_of_1));
	mico_mode_indication_any_of_t* mico_mode_indication_any_of_2 = mico_mode_indication_any_of_parseFromJSON(jsonmico_mode_indication_any_of_1);
	cJSON* jsonmico_mode_indication_any_of_2 = mico_mode_indication_any_of_convertToJSON(mico_mode_indication_any_of_2);
	printf("repeating mico_mode_indication_any_of:\n%s\n", cJSON_Print(jsonmico_mode_indication_any_of_2));
}

int main() {
  test_mico_mode_indication_any_of(1);
  test_mico_mode_indication_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // mico_mode_indication_any_of_MAIN
#endif // mico_mode_indication_any_of_TEST
