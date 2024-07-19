#ifndef nni_session_direction_any_of_TEST
#define nni_session_direction_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nni_session_direction_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nni_session_direction_any_of.h"
nni_session_direction_any_of_t* instantiate_nni_session_direction_any_of(int include_optional);



nni_session_direction_any_of_t* instantiate_nni_session_direction_any_of(int include_optional) {
  nni_session_direction_any_of_t* nni_session_direction_any_of = NULL;
  if (include_optional) {
    nni_session_direction_any_of = nni_session_direction_any_of_create(
    );
  } else {
    nni_session_direction_any_of = nni_session_direction_any_of_create(
    );
  }

  return nni_session_direction_any_of;
}


#ifdef nni_session_direction_any_of_MAIN

void test_nni_session_direction_any_of(int include_optional) {
    nni_session_direction_any_of_t* nni_session_direction_any_of_1 = instantiate_nni_session_direction_any_of(include_optional);

	cJSON* jsonnni_session_direction_any_of_1 = nni_session_direction_any_of_convertToJSON(nni_session_direction_any_of_1);
	printf("nni_session_direction_any_of :\n%s\n", cJSON_Print(jsonnni_session_direction_any_of_1));
	nni_session_direction_any_of_t* nni_session_direction_any_of_2 = nni_session_direction_any_of_parseFromJSON(jsonnni_session_direction_any_of_1);
	cJSON* jsonnni_session_direction_any_of_2 = nni_session_direction_any_of_convertToJSON(nni_session_direction_any_of_2);
	printf("repeating nni_session_direction_any_of:\n%s\n", cJSON_Print(jsonnni_session_direction_any_of_2));
}

int main() {
  test_nni_session_direction_any_of(1);
  test_nni_session_direction_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // nni_session_direction_any_of_MAIN
#endif // nni_session_direction_any_of_TEST
