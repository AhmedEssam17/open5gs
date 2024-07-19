#ifndef mico_mode_indication_TEST
#define mico_mode_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mico_mode_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mico_mode_indication.h"
mico_mode_indication_t* instantiate_mico_mode_indication(int include_optional);



mico_mode_indication_t* instantiate_mico_mode_indication(int include_optional) {
  mico_mode_indication_t* mico_mode_indication = NULL;
  if (include_optional) {
    mico_mode_indication = mico_mode_indication_create(
    );
  } else {
    mico_mode_indication = mico_mode_indication_create(
    );
  }

  return mico_mode_indication;
}


#ifdef mico_mode_indication_MAIN

void test_mico_mode_indication(int include_optional) {
    mico_mode_indication_t* mico_mode_indication_1 = instantiate_mico_mode_indication(include_optional);

	cJSON* jsonmico_mode_indication_1 = mico_mode_indication_convertToJSON(mico_mode_indication_1);
	printf("mico_mode_indication :\n%s\n", cJSON_Print(jsonmico_mode_indication_1));
	mico_mode_indication_t* mico_mode_indication_2 = mico_mode_indication_parseFromJSON(jsonmico_mode_indication_1);
	cJSON* jsonmico_mode_indication_2 = mico_mode_indication_convertToJSON(mico_mode_indication_2);
	printf("repeating mico_mode_indication:\n%s\n", cJSON_Print(jsonmico_mode_indication_2));
}

int main() {
  test_mico_mode_indication(1);
  test_mico_mode_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // mico_mode_indication_MAIN
#endif // mico_mode_indication_TEST
