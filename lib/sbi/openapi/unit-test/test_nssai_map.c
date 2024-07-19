#ifndef nssai_map_TEST
#define nssai_map_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nssai_map_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nssai_map.h"
nssai_map_t* instantiate_nssai_map(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"


nssai_map_t* instantiate_nssai_map(int include_optional) {
  nssai_map_t* nssai_map = NULL;
  if (include_optional) {
    nssai_map = nssai_map_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    nssai_map = nssai_map_create(
      NULL,
      NULL
    );
  }

  return nssai_map;
}


#ifdef nssai_map_MAIN

void test_nssai_map(int include_optional) {
    nssai_map_t* nssai_map_1 = instantiate_nssai_map(include_optional);

	cJSON* jsonnssai_map_1 = nssai_map_convertToJSON(nssai_map_1);
	printf("nssai_map :\n%s\n", cJSON_Print(jsonnssai_map_1));
	nssai_map_t* nssai_map_2 = nssai_map_parseFromJSON(jsonnssai_map_1);
	cJSON* jsonnssai_map_2 = nssai_map_convertToJSON(nssai_map_2);
	printf("repeating nssai_map:\n%s\n", cJSON_Print(jsonnssai_map_2));
}

int main() {
  test_nssai_map(1);
  test_nssai_map(0);

  printf("Hello world \n");
  return 0;
}

#endif // nssai_map_MAIN
#endif // nssai_map_TEST
