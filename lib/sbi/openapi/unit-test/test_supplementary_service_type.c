#ifndef supplementary_service_type_TEST
#define supplementary_service_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supplementary_service_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supplementary_service_type.h"
supplementary_service_type_t* instantiate_supplementary_service_type(int include_optional);



supplementary_service_type_t* instantiate_supplementary_service_type(int include_optional) {
  supplementary_service_type_t* supplementary_service_type = NULL;
  if (include_optional) {
    supplementary_service_type = supplementary_service_type_create(
    );
  } else {
    supplementary_service_type = supplementary_service_type_create(
    );
  }

  return supplementary_service_type;
}


#ifdef supplementary_service_type_MAIN

void test_supplementary_service_type(int include_optional) {
    supplementary_service_type_t* supplementary_service_type_1 = instantiate_supplementary_service_type(include_optional);

	cJSON* jsonsupplementary_service_type_1 = supplementary_service_type_convertToJSON(supplementary_service_type_1);
	printf("supplementary_service_type :\n%s\n", cJSON_Print(jsonsupplementary_service_type_1));
	supplementary_service_type_t* supplementary_service_type_2 = supplementary_service_type_parseFromJSON(jsonsupplementary_service_type_1);
	cJSON* jsonsupplementary_service_type_2 = supplementary_service_type_convertToJSON(supplementary_service_type_2);
	printf("repeating supplementary_service_type:\n%s\n", cJSON_Print(jsonsupplementary_service_type_2));
}

int main() {
  test_supplementary_service_type(1);
  test_supplementary_service_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // supplementary_service_type_MAIN
#endif // supplementary_service_type_TEST
