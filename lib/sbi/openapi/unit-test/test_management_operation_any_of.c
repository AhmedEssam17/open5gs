#ifndef management_operation_any_of_TEST
#define management_operation_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define management_operation_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/management_operation_any_of.h"
management_operation_any_of_t* instantiate_management_operation_any_of(int include_optional);



management_operation_any_of_t* instantiate_management_operation_any_of(int include_optional) {
  management_operation_any_of_t* management_operation_any_of = NULL;
  if (include_optional) {
    management_operation_any_of = management_operation_any_of_create(
    );
  } else {
    management_operation_any_of = management_operation_any_of_create(
    );
  }

  return management_operation_any_of;
}


#ifdef management_operation_any_of_MAIN

void test_management_operation_any_of(int include_optional) {
    management_operation_any_of_t* management_operation_any_of_1 = instantiate_management_operation_any_of(include_optional);

	cJSON* jsonmanagement_operation_any_of_1 = management_operation_any_of_convertToJSON(management_operation_any_of_1);
	printf("management_operation_any_of :\n%s\n", cJSON_Print(jsonmanagement_operation_any_of_1));
	management_operation_any_of_t* management_operation_any_of_2 = management_operation_any_of_parseFromJSON(jsonmanagement_operation_any_of_1);
	cJSON* jsonmanagement_operation_any_of_2 = management_operation_any_of_convertToJSON(management_operation_any_of_2);
	printf("repeating management_operation_any_of:\n%s\n", cJSON_Print(jsonmanagement_operation_any_of_2));
}

int main() {
  test_management_operation_any_of(1);
  test_management_operation_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // management_operation_any_of_MAIN
#endif // management_operation_any_of_TEST
