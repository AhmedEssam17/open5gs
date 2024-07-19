#ifndef serving_network_function_id_TEST
#define serving_network_function_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define serving_network_function_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/serving_network_function_id.h"
serving_network_function_id_t* instantiate_serving_network_function_id(int include_optional);

#include "test_nf_identification.c"


serving_network_function_id_t* instantiate_serving_network_function_id(int include_optional) {
  serving_network_function_id_t* serving_network_function_id = NULL;
  if (include_optional) {
    serving_network_function_id = serving_network_function_id_create(
       // false, not to have infinite recursion
      instantiate_nf_identification(0),
      "a"
    );
  } else {
    serving_network_function_id = serving_network_function_id_create(
      NULL,
      "a"
    );
  }

  return serving_network_function_id;
}


#ifdef serving_network_function_id_MAIN

void test_serving_network_function_id(int include_optional) {
    serving_network_function_id_t* serving_network_function_id_1 = instantiate_serving_network_function_id(include_optional);

	cJSON* jsonserving_network_function_id_1 = serving_network_function_id_convertToJSON(serving_network_function_id_1);
	printf("serving_network_function_id :\n%s\n", cJSON_Print(jsonserving_network_function_id_1));
	serving_network_function_id_t* serving_network_function_id_2 = serving_network_function_id_parseFromJSON(jsonserving_network_function_id_1);
	cJSON* jsonserving_network_function_id_2 = serving_network_function_id_convertToJSON(serving_network_function_id_2);
	printf("repeating serving_network_function_id:\n%s\n", cJSON_Print(jsonserving_network_function_id_2));
}

int main() {
  test_serving_network_function_id(1);
  test_serving_network_function_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // serving_network_function_id_MAIN
#endif // serving_network_function_id_TEST
