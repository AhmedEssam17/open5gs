#ifndef nni_information_TEST
#define nni_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nni_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nni_information.h"
nni_information_t* instantiate_nni_information(int include_optional);

#include "test_nni_session_direction.c"
#include "test_nni_type.c"
#include "test_nni_relationship_mode.c"
#include "test_ims_address.c"


nni_information_t* instantiate_nni_information(int include_optional) {
  nni_information_t* nni_information = NULL;
  if (include_optional) {
    nni_information = nni_information_create(
      null,
      null,
      null,
       // false, not to have infinite recursion
      instantiate_ims_address(0)
    );
  } else {
    nni_information = nni_information_create(
      null,
      null,
      null,
      NULL
    );
  }

  return nni_information;
}


#ifdef nni_information_MAIN

void test_nni_information(int include_optional) {
    nni_information_t* nni_information_1 = instantiate_nni_information(include_optional);

	cJSON* jsonnni_information_1 = nni_information_convertToJSON(nni_information_1);
	printf("nni_information :\n%s\n", cJSON_Print(jsonnni_information_1));
	nni_information_t* nni_information_2 = nni_information_parseFromJSON(jsonnni_information_1);
	cJSON* jsonnni_information_2 = nni_information_convertToJSON(nni_information_2);
	printf("repeating nni_information:\n%s\n", cJSON_Print(jsonnni_information_2));
}

int main() {
  test_nni_information(1);
  test_nni_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // nni_information_MAIN
#endif // nni_information_TEST
