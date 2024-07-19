#ifndef access_transfer_type_TEST
#define access_transfer_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_transfer_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_transfer_type.h"
access_transfer_type_t* instantiate_access_transfer_type(int include_optional);



access_transfer_type_t* instantiate_access_transfer_type(int include_optional) {
  access_transfer_type_t* access_transfer_type = NULL;
  if (include_optional) {
    access_transfer_type = access_transfer_type_create(
    );
  } else {
    access_transfer_type = access_transfer_type_create(
    );
  }

  return access_transfer_type;
}


#ifdef access_transfer_type_MAIN

void test_access_transfer_type(int include_optional) {
    access_transfer_type_t* access_transfer_type_1 = instantiate_access_transfer_type(include_optional);

	cJSON* jsonaccess_transfer_type_1 = access_transfer_type_convertToJSON(access_transfer_type_1);
	printf("access_transfer_type :\n%s\n", cJSON_Print(jsonaccess_transfer_type_1));
	access_transfer_type_t* access_transfer_type_2 = access_transfer_type_parseFromJSON(jsonaccess_transfer_type_1);
	cJSON* jsonaccess_transfer_type_2 = access_transfer_type_convertToJSON(access_transfer_type_2);
	printf("repeating access_transfer_type:\n%s\n", cJSON_Print(jsonaccess_transfer_type_2));
}

int main() {
  test_access_transfer_type(1);
  test_access_transfer_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_transfer_type_MAIN
#endif // access_transfer_type_TEST
