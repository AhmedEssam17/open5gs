#ifndef supplementary_service_mode_TEST
#define supplementary_service_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplementary_service_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplementary_service_mode.h"
supplementary_service_mode_t* instantiate_supplementary_service_mode(int include_optional);



supplementary_service_mode_t* instantiate_supplementary_service_mode(int include_optional) {
  supplementary_service_mode_t* supplementary_service_mode = NULL;
  if (include_optional) {
    supplementary_service_mode = supplementary_service_mode_create(
    );
  } else {
    supplementary_service_mode = supplementary_service_mode_create(
    );
  }

  return supplementary_service_mode;
}


#ifdef supplementary_service_mode_MAIN

void test_supplementary_service_mode(int include_optional) {
    supplementary_service_mode_t* supplementary_service_mode_1 = instantiate_supplementary_service_mode(include_optional);

	cJSON* jsonsupplementary_service_mode_1 = supplementary_service_mode_convertToJSON(supplementary_service_mode_1);
	printf("supplementary_service_mode :\n%s\n", cJSON_Print(jsonsupplementary_service_mode_1));
	supplementary_service_mode_t* supplementary_service_mode_2 = supplementary_service_mode_parseFromJSON(jsonsupplementary_service_mode_1);
	cJSON* jsonsupplementary_service_mode_2 = supplementary_service_mode_convertToJSON(supplementary_service_mode_2);
	printf("repeating supplementary_service_mode:\n%s\n", cJSON_Print(jsonsupplementary_service_mode_2));
}

int main() {
  test_supplementary_service_mode(1);
  test_supplementary_service_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplementary_service_mode_MAIN
#endif // supplementary_service_mode_TEST
