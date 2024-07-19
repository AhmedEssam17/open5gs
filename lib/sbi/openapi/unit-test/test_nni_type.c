#ifndef nni_type_TEST
#define nni_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nni_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nni_type.h"
nni_type_t* instantiate_nni_type(int include_optional);



nni_type_t* instantiate_nni_type(int include_optional) {
  nni_type_t* nni_type = NULL;
  if (include_optional) {
    nni_type = nni_type_create(
    );
  } else {
    nni_type = nni_type_create(
    );
  }

  return nni_type;
}


#ifdef nni_type_MAIN

void test_nni_type(int include_optional) {
    nni_type_t* nni_type_1 = instantiate_nni_type(include_optional);

	cJSON* jsonnni_type_1 = nni_type_convertToJSON(nni_type_1);
	printf("nni_type :\n%s\n", cJSON_Print(jsonnni_type_1));
	nni_type_t* nni_type_2 = nni_type_parseFromJSON(jsonnni_type_1);
	cJSON* jsonnni_type_2 = nni_type_convertToJSON(nni_type_2);
	printf("repeating nni_type:\n%s\n", cJSON_Print(jsonnni_type_2));
}

int main() {
  test_nni_type(1);
  test_nni_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // nni_type_MAIN
#endif // nni_type_TEST
