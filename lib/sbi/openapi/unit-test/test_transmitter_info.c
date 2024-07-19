#ifndef transmitter_info_TEST
#define transmitter_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transmitter_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transmitter_info.h"
transmitter_info_t* instantiate_transmitter_info(int include_optional);

#include "test_ip_addr.c"


transmitter_info_t* instantiate_transmitter_info(int include_optional) {
  transmitter_info_t* transmitter_info = NULL;
  if (include_optional) {
    transmitter_info = transmitter_info_create(
       // false, not to have infinite recursion
      instantiate_ip_addr(0),
      "0"
    );
  } else {
    transmitter_info = transmitter_info_create(
      NULL,
      "0"
    );
  }

  return transmitter_info;
}


#ifdef transmitter_info_MAIN

void test_transmitter_info(int include_optional) {
    transmitter_info_t* transmitter_info_1 = instantiate_transmitter_info(include_optional);

	cJSON* jsontransmitter_info_1 = transmitter_info_convertToJSON(transmitter_info_1);
	printf("transmitter_info :\n%s\n", cJSON_Print(jsontransmitter_info_1));
	transmitter_info_t* transmitter_info_2 = transmitter_info_parseFromJSON(jsontransmitter_info_1);
	cJSON* jsontransmitter_info_2 = transmitter_info_convertToJSON(transmitter_info_2);
	printf("repeating transmitter_info:\n%s\n", cJSON_Print(jsontransmitter_info_2));
}

int main() {
  test_transmitter_info(1);
  test_transmitter_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transmitter_info_MAIN
#endif // transmitter_info_TEST
