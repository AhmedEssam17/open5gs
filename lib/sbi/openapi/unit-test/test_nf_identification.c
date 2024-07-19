#ifndef nf_identification_TEST
#define nf_identification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_identification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_identification.h"
nf_identification_t* instantiate_nf_identification(int include_optional);

#include "test_plmn_id.c"
#include "test_node_functionality.c"


nf_identification_t* instantiate_nf_identification(int include_optional) {
  nf_identification_t* nf_identification = NULL;
  if (include_optional) {
    nf_identification = nf_identification_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      null,
      "0"
    );
  } else {
    nf_identification = nf_identification_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      NULL,
      null,
      "0"
    );
  }

  return nf_identification;
}


#ifdef nf_identification_MAIN

void test_nf_identification(int include_optional) {
    nf_identification_t* nf_identification_1 = instantiate_nf_identification(include_optional);

	cJSON* jsonnf_identification_1 = nf_identification_convertToJSON(nf_identification_1);
	printf("nf_identification :\n%s\n", cJSON_Print(jsonnf_identification_1));
	nf_identification_t* nf_identification_2 = nf_identification_parseFromJSON(jsonnf_identification_1);
	cJSON* jsonnf_identification_2 = nf_identification_convertToJSON(nf_identification_2);
	printf("repeating nf_identification:\n%s\n", cJSON_Print(jsonnf_identification_2));
}

int main() {
  test_nf_identification(1);
  test_nf_identification(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_identification_MAIN
#endif // nf_identification_TEST
