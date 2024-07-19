#ifndef supplementary_service_mode_any_of_TEST
#define supplementary_service_mode_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplementary_service_mode_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplementary_service_mode_any_of.h"
supplementary_service_mode_any_of_t* instantiate_supplementary_service_mode_any_of(int include_optional);



supplementary_service_mode_any_of_t* instantiate_supplementary_service_mode_any_of(int include_optional) {
  supplementary_service_mode_any_of_t* supplementary_service_mode_any_of = NULL;
  if (include_optional) {
    supplementary_service_mode_any_of = supplementary_service_mode_any_of_create(
    );
  } else {
    supplementary_service_mode_any_of = supplementary_service_mode_any_of_create(
    );
  }

  return supplementary_service_mode_any_of;
}


#ifdef supplementary_service_mode_any_of_MAIN

void test_supplementary_service_mode_any_of(int include_optional) {
    supplementary_service_mode_any_of_t* supplementary_service_mode_any_of_1 = instantiate_supplementary_service_mode_any_of(include_optional);

	cJSON* jsonsupplementary_service_mode_any_of_1 = supplementary_service_mode_any_of_convertToJSON(supplementary_service_mode_any_of_1);
	printf("supplementary_service_mode_any_of :\n%s\n", cJSON_Print(jsonsupplementary_service_mode_any_of_1));
	supplementary_service_mode_any_of_t* supplementary_service_mode_any_of_2 = supplementary_service_mode_any_of_parseFromJSON(jsonsupplementary_service_mode_any_of_1);
	cJSON* jsonsupplementary_service_mode_any_of_2 = supplementary_service_mode_any_of_convertToJSON(supplementary_service_mode_any_of_2);
	printf("repeating supplementary_service_mode_any_of:\n%s\n", cJSON_Print(jsonsupplementary_service_mode_any_of_2));
}

int main() {
  test_supplementary_service_mode_any_of(1);
  test_supplementary_service_mode_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplementary_service_mode_any_of_MAIN
#endif // supplementary_service_mode_any_of_TEST
