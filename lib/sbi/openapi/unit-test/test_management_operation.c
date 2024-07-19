#ifndef management_operation_TEST
#define management_operation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define management_operation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/management_operation.h"
management_operation_t* instantiate_management_operation(int include_optional);



management_operation_t* instantiate_management_operation(int include_optional) {
  management_operation_t* management_operation = NULL;
  if (include_optional) {
    management_operation = management_operation_create(
    );
  } else {
    management_operation = management_operation_create(
    );
  }

  return management_operation;
}


#ifdef management_operation_MAIN

void test_management_operation(int include_optional) {
    management_operation_t* management_operation_1 = instantiate_management_operation(include_optional);

	cJSON* jsonmanagement_operation_1 = management_operation_convertToJSON(management_operation_1);
	printf("management_operation :\n%s\n", cJSON_Print(jsonmanagement_operation_1));
	management_operation_t* management_operation_2 = management_operation_parseFromJSON(jsonmanagement_operation_1);
	cJSON* jsonmanagement_operation_2 = management_operation_convertToJSON(management_operation_2);
	printf("repeating management_operation:\n%s\n", cJSON_Print(jsonmanagement_operation_2));
}

int main() {
  test_management_operation(1);
  test_management_operation(0);

  printf("Hello world \n");
  return 0;
}

#endif // management_operation_MAIN
#endif // management_operation_TEST
