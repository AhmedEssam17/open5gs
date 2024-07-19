#ifndef nni_relationship_mode_TEST
#define nni_relationship_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nni_relationship_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nni_relationship_mode.h"
nni_relationship_mode_t* instantiate_nni_relationship_mode(int include_optional);



nni_relationship_mode_t* instantiate_nni_relationship_mode(int include_optional) {
  nni_relationship_mode_t* nni_relationship_mode = NULL;
  if (include_optional) {
    nni_relationship_mode = nni_relationship_mode_create(
    );
  } else {
    nni_relationship_mode = nni_relationship_mode_create(
    );
  }

  return nni_relationship_mode;
}


#ifdef nni_relationship_mode_MAIN

void test_nni_relationship_mode(int include_optional) {
    nni_relationship_mode_t* nni_relationship_mode_1 = instantiate_nni_relationship_mode(include_optional);

	cJSON* jsonnni_relationship_mode_1 = nni_relationship_mode_convertToJSON(nni_relationship_mode_1);
	printf("nni_relationship_mode :\n%s\n", cJSON_Print(jsonnni_relationship_mode_1));
	nni_relationship_mode_t* nni_relationship_mode_2 = nni_relationship_mode_parseFromJSON(jsonnni_relationship_mode_1);
	cJSON* jsonnni_relationship_mode_2 = nni_relationship_mode_convertToJSON(nni_relationship_mode_2);
	printf("repeating nni_relationship_mode:\n%s\n", cJSON_Print(jsonnni_relationship_mode_2));
}

int main() {
  test_nni_relationship_mode(1);
  test_nni_relationship_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // nni_relationship_mode_MAIN
#endif // nni_relationship_mode_TEST
