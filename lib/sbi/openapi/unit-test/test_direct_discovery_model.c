#ifndef direct_discovery_model_TEST
#define direct_discovery_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define direct_discovery_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/direct_discovery_model.h"
direct_discovery_model_t* instantiate_direct_discovery_model(int include_optional);



direct_discovery_model_t* instantiate_direct_discovery_model(int include_optional) {
  direct_discovery_model_t* direct_discovery_model = NULL;
  if (include_optional) {
    direct_discovery_model = direct_discovery_model_create(
    );
  } else {
    direct_discovery_model = direct_discovery_model_create(
    );
  }

  return direct_discovery_model;
}


#ifdef direct_discovery_model_MAIN

void test_direct_discovery_model(int include_optional) {
    direct_discovery_model_t* direct_discovery_model_1 = instantiate_direct_discovery_model(include_optional);

	cJSON* jsondirect_discovery_model_1 = direct_discovery_model_convertToJSON(direct_discovery_model_1);
	printf("direct_discovery_model :\n%s\n", cJSON_Print(jsondirect_discovery_model_1));
	direct_discovery_model_t* direct_discovery_model_2 = direct_discovery_model_parseFromJSON(jsondirect_discovery_model_1);
	cJSON* jsondirect_discovery_model_2 = direct_discovery_model_convertToJSON(direct_discovery_model_2);
	printf("repeating direct_discovery_model:\n%s\n", cJSON_Print(jsondirect_discovery_model_2));
}

int main() {
  test_direct_discovery_model(1);
  test_direct_discovery_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // direct_discovery_model_MAIN
#endif // direct_discovery_model_TEST
