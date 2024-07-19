#ifndef management_operation_status_TEST
#define management_operation_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define management_operation_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/management_operation_status.h"
management_operation_status_t* instantiate_management_operation_status(int include_optional);



management_operation_status_t* instantiate_management_operation_status(int include_optional) {
  management_operation_status_t* management_operation_status = NULL;
  if (include_optional) {
    management_operation_status = management_operation_status_create(
    );
  } else {
    management_operation_status = management_operation_status_create(
    );
  }

  return management_operation_status;
}


#ifdef management_operation_status_MAIN

void test_management_operation_status(int include_optional) {
    management_operation_status_t* management_operation_status_1 = instantiate_management_operation_status(include_optional);

	cJSON* jsonmanagement_operation_status_1 = management_operation_status_convertToJSON(management_operation_status_1);
	printf("management_operation_status :\n%s\n", cJSON_Print(jsonmanagement_operation_status_1));
	management_operation_status_t* management_operation_status_2 = management_operation_status_parseFromJSON(jsonmanagement_operation_status_1);
	cJSON* jsonmanagement_operation_status_2 = management_operation_status_convertToJSON(management_operation_status_2);
	printf("repeating management_operation_status:\n%s\n", cJSON_Print(jsonmanagement_operation_status_2));
}

int main() {
  test_management_operation_status(1);
  test_management_operation_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // management_operation_status_MAIN
#endif // management_operation_status_TEST
