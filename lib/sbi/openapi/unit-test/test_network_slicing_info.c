#ifndef network_slicing_info_TEST
#define network_slicing_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define network_slicing_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/network_slicing_info.h"
network_slicing_info_t* instantiate_network_slicing_info(int include_optional);

#include "test_snssai.c"


network_slicing_info_t* instantiate_network_slicing_info(int include_optional) {
  network_slicing_info_t* network_slicing_info = NULL;
  if (include_optional) {
    network_slicing_info = network_slicing_info_create(
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    network_slicing_info = network_slicing_info_create(
      NULL
    );
  }

  return network_slicing_info;
}


#ifdef network_slicing_info_MAIN

void test_network_slicing_info(int include_optional) {
    network_slicing_info_t* network_slicing_info_1 = instantiate_network_slicing_info(include_optional);

	cJSON* jsonnetwork_slicing_info_1 = network_slicing_info_convertToJSON(network_slicing_info_1);
	printf("network_slicing_info :\n%s\n", cJSON_Print(jsonnetwork_slicing_info_1));
	network_slicing_info_t* network_slicing_info_2 = network_slicing_info_parseFromJSON(jsonnetwork_slicing_info_1);
	cJSON* jsonnetwork_slicing_info_2 = network_slicing_info_convertToJSON(network_slicing_info_2);
	printf("repeating network_slicing_info:\n%s\n", cJSON_Print(jsonnetwork_slicing_info_2));
}

int main() {
  test_network_slicing_info(1);
  test_network_slicing_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // network_slicing_info_MAIN
#endif // network_slicing_info_TEST
