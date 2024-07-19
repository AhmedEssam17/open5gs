#ifndef authorized_default_qos_TEST
#define authorized_default_qos_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorized_default_qos_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorized_default_qos.h"
authorized_default_qos_t* instantiate_authorized_default_qos(int include_optional);

#include "test_arp.c"


authorized_default_qos_t* instantiate_authorized_default_qos(int include_optional) {
  authorized_default_qos_t* authorized_default_qos = NULL;
  if (include_optional) {
    authorized_default_qos = authorized_default_qos_create(
      0,
       // false, not to have infinite recursion
      instantiate_arp(0),
      1,
      1,
      1,
      "a",
      "a",
      "a",
      "a",
      4096
    );
  } else {
    authorized_default_qos = authorized_default_qos_create(
      0,
      NULL,
      1,
      1,
      1,
      "a",
      "a",
      "a",
      "a",
      4096
    );
  }

  return authorized_default_qos;
}


#ifdef authorized_default_qos_MAIN

void test_authorized_default_qos(int include_optional) {
    authorized_default_qos_t* authorized_default_qos_1 = instantiate_authorized_default_qos(include_optional);

	cJSON* jsonauthorized_default_qos_1 = authorized_default_qos_convertToJSON(authorized_default_qos_1);
	printf("authorized_default_qos :\n%s\n", cJSON_Print(jsonauthorized_default_qos_1));
	authorized_default_qos_t* authorized_default_qos_2 = authorized_default_qos_parseFromJSON(jsonauthorized_default_qos_1);
	cJSON* jsonauthorized_default_qos_2 = authorized_default_qos_convertToJSON(authorized_default_qos_2);
	printf("repeating authorized_default_qos:\n%s\n", cJSON_Print(jsonauthorized_default_qos_2));
}

int main() {
  test_authorized_default_qos(1);
  test_authorized_default_qos(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorized_default_qos_MAIN
#endif // authorized_default_qos_TEST
