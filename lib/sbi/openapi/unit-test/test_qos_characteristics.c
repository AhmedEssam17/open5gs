#ifndef qos_characteristics_TEST
#define qos_characteristics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_characteristics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_characteristics.h"
qos_characteristics_t* instantiate_qos_characteristics(int include_optional);



qos_characteristics_t* instantiate_qos_characteristics(int include_optional) {
  qos_characteristics_t* qos_characteristics = NULL;
  if (include_optional) {
    qos_characteristics = qos_characteristics_create(
      0,
      nchf_convergedcharging_qos_characteristics__NON_GBR,
      1,
      1,
      "a",
      1,
      1,
      4096
    );
  } else {
    qos_characteristics = qos_characteristics_create(
      0,
      nchf_convergedcharging_qos_characteristics__NON_GBR,
      1,
      1,
      "a",
      1,
      1,
      4096
    );
  }

  return qos_characteristics;
}


#ifdef qos_characteristics_MAIN

void test_qos_characteristics(int include_optional) {
    qos_characteristics_t* qos_characteristics_1 = instantiate_qos_characteristics(include_optional);

	cJSON* jsonqos_characteristics_1 = qos_characteristics_convertToJSON(qos_characteristics_1);
	printf("qos_characteristics :\n%s\n", cJSON_Print(jsonqos_characteristics_1));
	qos_characteristics_t* qos_characteristics_2 = qos_characteristics_parseFromJSON(jsonqos_characteristics_1);
	cJSON* jsonqos_characteristics_2 = qos_characteristics_convertToJSON(qos_characteristics_2);
	printf("repeating qos_characteristics:\n%s\n", cJSON_Print(jsonqos_characteristics_2));
}

int main() {
  test_qos_characteristics(1);
  test_qos_characteristics(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_characteristics_MAIN
#endif // qos_characteristics_TEST
