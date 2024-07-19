#ifndef pfi_container_information_TEST
#define pfi_container_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pfi_container_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pfi_container_information.h"
pfi_container_information_t* instantiate_pfi_container_information(int include_optional);

#include "test_qos_data.c"
#include "test_qos_characteristics.c"
#include "test_user_location.c"


pfi_container_information_t* instantiate_pfi_container_information(int include_optional) {
  pfi_container_information_t* pfi_container_information = NULL;
  if (include_optional) {
    pfi_container_information = pfi_container_information_create(
      "0",
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
      list_createList()
    );
  } else {
    pfi_container_information = pfi_container_information_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      list_createList()
    );
  }

  return pfi_container_information;
}


#ifdef pfi_container_information_MAIN

void test_pfi_container_information(int include_optional) {
    pfi_container_information_t* pfi_container_information_1 = instantiate_pfi_container_information(include_optional);

	cJSON* jsonpfi_container_information_1 = pfi_container_information_convertToJSON(pfi_container_information_1);
	printf("pfi_container_information :\n%s\n", cJSON_Print(jsonpfi_container_information_1));
	pfi_container_information_t* pfi_container_information_2 = pfi_container_information_parseFromJSON(jsonpfi_container_information_1);
	cJSON* jsonpfi_container_information_2 = pfi_container_information_convertToJSON(pfi_container_information_2);
	printf("repeating pfi_container_information:\n%s\n", cJSON_Print(jsonpfi_container_information_2));
}

int main() {
  test_pfi_container_information(1);
  test_pfi_container_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // pfi_container_information_MAIN
#endif // pfi_container_information_TEST
