#ifndef qfi_container_information_TEST
#define qfi_container_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qfi_container_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qfi_container_information.h"
qfi_container_information_t* instantiate_qfi_container_information(int include_optional);

#include "test_qos_data.c"
#include "test_qos_characteristics.c"
#include "test_user_location.c"
#include "test_model_3_gppps_data_off_status.c"


qfi_container_information_t* instantiate_qfi_container_information(int include_optional) {
  qfi_container_information_t* qfi_container_information = NULL;
  if (include_optional) {
    qfi_container_information = qfi_container_information_create(
      0,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_qos_data(0),
       // false, not to have infinite recursion
      instantiate_qos_characteristics(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
      list_createList(),
      nchf_convergedcharging_qfi_container_information__NR,
      list_createList(),
      null,
      0,
      56,
      list_createList()
    );
  } else {
    qfi_container_information = qfi_container_information_create(
      0,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      list_createList(),
      nchf_convergedcharging_qfi_container_information__NR,
      list_createList(),
      null,
      0,
      56,
      list_createList()
    );
  }

  return qfi_container_information;
}


#ifdef qfi_container_information_MAIN

void test_qfi_container_information(int include_optional) {
    qfi_container_information_t* qfi_container_information_1 = instantiate_qfi_container_information(include_optional);

	cJSON* jsonqfi_container_information_1 = qfi_container_information_convertToJSON(qfi_container_information_1);
	printf("qfi_container_information :\n%s\n", cJSON_Print(jsonqfi_container_information_1));
	qfi_container_information_t* qfi_container_information_2 = qfi_container_information_parseFromJSON(jsonqfi_container_information_1);
	cJSON* jsonqfi_container_information_2 = qfi_container_information_convertToJSON(qfi_container_information_2);
	printf("repeating qfi_container_information:\n%s\n", cJSON_Print(jsonqfi_container_information_2));
}

int main() {
  test_qfi_container_information(1);
  test_qfi_container_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // qfi_container_information_MAIN
#endif // qfi_container_information_TEST
