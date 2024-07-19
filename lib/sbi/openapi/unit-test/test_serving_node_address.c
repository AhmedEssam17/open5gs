#ifndef serving_node_address_TEST
#define serving_node_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define serving_node_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/serving_node_address.h"
serving_node_address_t* instantiate_serving_node_address(int include_optional);



serving_node_address_t* instantiate_serving_node_address(int include_optional) {
  serving_node_address_t* serving_node_address = NULL;
  if (include_optional) {
    serving_node_address = serving_node_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    serving_node_address = serving_node_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return serving_node_address;
}


#ifdef serving_node_address_MAIN

void test_serving_node_address(int include_optional) {
    serving_node_address_t* serving_node_address_1 = instantiate_serving_node_address(include_optional);

	cJSON* jsonserving_node_address_1 = serving_node_address_convertToJSON(serving_node_address_1);
	printf("serving_node_address :\n%s\n", cJSON_Print(jsonserving_node_address_1));
	serving_node_address_t* serving_node_address_2 = serving_node_address_parseFromJSON(jsonserving_node_address_1);
	cJSON* jsonserving_node_address_2 = serving_node_address_convertToJSON(serving_node_address_2);
	printf("repeating serving_node_address:\n%s\n", cJSON_Print(jsonserving_node_address_2));
}

int main() {
  test_serving_node_address(1);
  test_serving_node_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // serving_node_address_MAIN
#endif // serving_node_address_TEST
