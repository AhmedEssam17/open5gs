#ifndef interface_type_any_of_TEST
#define interface_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define interface_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/interface_type_any_of.h"
interface_type_any_of_t* instantiate_interface_type_any_of(int include_optional);



interface_type_any_of_t* instantiate_interface_type_any_of(int include_optional) {
  interface_type_any_of_t* interface_type_any_of = NULL;
  if (include_optional) {
    interface_type_any_of = interface_type_any_of_create(
    );
  } else {
    interface_type_any_of = interface_type_any_of_create(
    );
  }

  return interface_type_any_of;
}


#ifdef interface_type_any_of_MAIN

void test_interface_type_any_of(int include_optional) {
    interface_type_any_of_t* interface_type_any_of_1 = instantiate_interface_type_any_of(include_optional);

	cJSON* jsoninterface_type_any_of_1 = interface_type_any_of_convertToJSON(interface_type_any_of_1);
	printf("interface_type_any_of :\n%s\n", cJSON_Print(jsoninterface_type_any_of_1));
	interface_type_any_of_t* interface_type_any_of_2 = interface_type_any_of_parseFromJSON(jsoninterface_type_any_of_1);
	cJSON* jsoninterface_type_any_of_2 = interface_type_any_of_convertToJSON(interface_type_any_of_2);
	printf("repeating interface_type_any_of:\n%s\n", cJSON_Print(jsoninterface_type_any_of_2));
}

int main() {
  test_interface_type_any_of(1);
  test_interface_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // interface_type_any_of_MAIN
#endif // interface_type_any_of_TEST
