#ifndef qos_data_TEST
#define qos_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_data.h"
qos_data_t* instantiate_qos_data(int include_optional);

#include "test_arp.c"


qos_data_t* instantiate_qos_data(int include_optional) {
  qos_data_t* qos_data = NULL;
  if (include_optional) {
    qos_data = qos_data_create(
      "0",
      0,
      "a",
      "a",
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_arp(0),
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      0,
      0,
      1,
      4096,
      1,
      "a"
    );
  } else {
    qos_data = qos_data_create(
      "0",
      0,
      "a",
      "a",
      "a",
      "a",
      NULL,
      1,
      1,
      1,
      1,
      1,
      "0",
      "0",
      0,
      0,
      1,
      4096,
      1,
      "a"
    );
  }

  return qos_data;
}


#ifdef qos_data_MAIN

void test_qos_data(int include_optional) {
    qos_data_t* qos_data_1 = instantiate_qos_data(include_optional);

	cJSON* jsonqos_data_1 = qos_data_convertToJSON(qos_data_1);
	printf("qos_data :\n%s\n", cJSON_Print(jsonqos_data_1));
	qos_data_t* qos_data_2 = qos_data_parseFromJSON(jsonqos_data_1);
	cJSON* jsonqos_data_2 = qos_data_convertToJSON(qos_data_2);
	printf("repeating qos_data:\n%s\n", cJSON_Print(jsonqos_data_2));
}

int main() {
  test_qos_data(1);
  test_qos_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_data_MAIN
#endif // qos_data_TEST
