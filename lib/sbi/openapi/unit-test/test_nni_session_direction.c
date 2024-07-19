#ifndef nni_session_direction_TEST
#define nni_session_direction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nni_session_direction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nni_session_direction.h"
nni_session_direction_t* instantiate_nni_session_direction(int include_optional);



nni_session_direction_t* instantiate_nni_session_direction(int include_optional) {
  nni_session_direction_t* nni_session_direction = NULL;
  if (include_optional) {
    nni_session_direction = nni_session_direction_create(
    );
  } else {
    nni_session_direction = nni_session_direction_create(
    );
  }

  return nni_session_direction;
}


#ifdef nni_session_direction_MAIN

void test_nni_session_direction(int include_optional) {
    nni_session_direction_t* nni_session_direction_1 = instantiate_nni_session_direction(include_optional);

	cJSON* jsonnni_session_direction_1 = nni_session_direction_convertToJSON(nni_session_direction_1);
	printf("nni_session_direction :\n%s\n", cJSON_Print(jsonnni_session_direction_1));
	nni_session_direction_t* nni_session_direction_2 = nni_session_direction_parseFromJSON(jsonnni_session_direction_1);
	cJSON* jsonnni_session_direction_2 = nni_session_direction_convertToJSON(nni_session_direction_2);
	printf("repeating nni_session_direction:\n%s\n", cJSON_Print(jsonnni_session_direction_2));
}

int main() {
  test_nni_session_direction(1);
  test_nni_session_direction(0);

  printf("Hello world \n");
  return 0;
}

#endif // nni_session_direction_MAIN
#endif // nni_session_direction_TEST
