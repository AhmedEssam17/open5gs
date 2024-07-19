#ifndef direct_discovery_model_any_of_TEST
#define direct_discovery_model_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define direct_discovery_model_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/direct_discovery_model_any_of.h"
direct_discovery_model_any_of_t* instantiate_direct_discovery_model_any_of(int include_optional);



direct_discovery_model_any_of_t* instantiate_direct_discovery_model_any_of(int include_optional) {
  direct_discovery_model_any_of_t* direct_discovery_model_any_of = NULL;
  if (include_optional) {
    direct_discovery_model_any_of = direct_discovery_model_any_of_create(
    );
  } else {
    direct_discovery_model_any_of = direct_discovery_model_any_of_create(
    );
  }

  return direct_discovery_model_any_of;
}


#ifdef direct_discovery_model_any_of_MAIN

void test_direct_discovery_model_any_of(int include_optional) {
    direct_discovery_model_any_of_t* direct_discovery_model_any_of_1 = instantiate_direct_discovery_model_any_of(include_optional);

	cJSON* jsondirect_discovery_model_any_of_1 = direct_discovery_model_any_of_convertToJSON(direct_discovery_model_any_of_1);
	printf("direct_discovery_model_any_of :\n%s\n", cJSON_Print(jsondirect_discovery_model_any_of_1));
	direct_discovery_model_any_of_t* direct_discovery_model_any_of_2 = direct_discovery_model_any_of_parseFromJSON(jsondirect_discovery_model_any_of_1);
	cJSON* jsondirect_discovery_model_any_of_2 = direct_discovery_model_any_of_convertToJSON(direct_discovery_model_any_of_2);
	printf("repeating direct_discovery_model_any_of:\n%s\n", cJSON_Print(jsondirect_discovery_model_any_of_2));
}

int main() {
  test_direct_discovery_model_any_of(1);
  test_direct_discovery_model_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // direct_discovery_model_any_of_MAIN
#endif // direct_discovery_model_any_of_TEST
