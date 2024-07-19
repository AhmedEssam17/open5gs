#ifndef access_transfer_information_TEST
#define access_transfer_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_transfer_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_transfer_information.h"
access_transfer_information_t* instantiate_access_transfer_information(int include_optional);

#include "test_access_transfer_type.c"
#include "test_ue_transfer_type.c"
#include "test_ims_address.c"


access_transfer_information_t* instantiate_access_transfer_information(int include_optional) {
  access_transfer_information_t* access_transfer_information = NULL;
  if (include_optional) {
    access_transfer_information = access_transfer_information_create(
      null,
      list_createList(),
      "a",
      null,
      "a",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_ims_address(0),
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    access_transfer_information = access_transfer_information_create(
      null,
      list_createList(),
      "a",
      null,
      "a",
      "0",
      "0",
      NULL,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return access_transfer_information;
}


#ifdef access_transfer_information_MAIN

void test_access_transfer_information(int include_optional) {
    access_transfer_information_t* access_transfer_information_1 = instantiate_access_transfer_information(include_optional);

	cJSON* jsonaccess_transfer_information_1 = access_transfer_information_convertToJSON(access_transfer_information_1);
	printf("access_transfer_information :\n%s\n", cJSON_Print(jsonaccess_transfer_information_1));
	access_transfer_information_t* access_transfer_information_2 = access_transfer_information_parseFromJSON(jsonaccess_transfer_information_1);
	cJSON* jsonaccess_transfer_information_2 = access_transfer_information_convertToJSON(access_transfer_information_2);
	printf("repeating access_transfer_information:\n%s\n", cJSON_Print(jsonaccess_transfer_information_2));
}

int main() {
  test_access_transfer_information(1);
  test_access_transfer_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_transfer_information_MAIN
#endif // access_transfer_information_TEST
