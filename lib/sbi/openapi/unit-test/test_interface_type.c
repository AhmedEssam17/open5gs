#ifndef interface_type_TEST
#define interface_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define interface_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/interface_type.h"
interface_type_t* instantiate_interface_type(int include_optional);



interface_type_t* instantiate_interface_type(int include_optional) {
  interface_type_t* interface_type = NULL;
  if (include_optional) {
    interface_type = interface_type_create(
    );
  } else {
    interface_type = interface_type_create(
    );
  }

  return interface_type;
}


#ifdef interface_type_MAIN

void test_interface_type(int include_optional) {
    interface_type_t* interface_type_1 = instantiate_interface_type(include_optional);

	cJSON* jsoninterface_type_1 = interface_type_convertToJSON(interface_type_1);
	printf("interface_type :\n%s\n", cJSON_Print(jsoninterface_type_1));
	interface_type_t* interface_type_2 = interface_type_parseFromJSON(jsoninterface_type_1);
	cJSON* jsoninterface_type_2 = interface_type_convertToJSON(interface_type_2);
	printf("repeating interface_type:\n%s\n", cJSON_Print(jsoninterface_type_2));
}

int main() {
  test_interface_type(1);
  test_interface_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // interface_type_MAIN
#endif // interface_type_TEST
