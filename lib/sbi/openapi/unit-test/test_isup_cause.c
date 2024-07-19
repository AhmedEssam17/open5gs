#ifndef isup_cause_TEST
#define isup_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define isup_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/isup_cause.h"
isup_cause_t* instantiate_isup_cause(int include_optional);



isup_cause_t* instantiate_isup_cause(int include_optional) {
  isup_cause_t* isup_cause = NULL;
  if (include_optional) {
    isup_cause = isup_cause_create(
      0,
      0,
      "a"
    );
  } else {
    isup_cause = isup_cause_create(
      0,
      0,
      "a"
    );
  }

  return isup_cause;
}


#ifdef isup_cause_MAIN

void test_isup_cause(int include_optional) {
    isup_cause_t* isup_cause_1 = instantiate_isup_cause(include_optional);

	cJSON* jsonisup_cause_1 = isup_cause_convertToJSON(isup_cause_1);
	printf("isup_cause :\n%s\n", cJSON_Print(jsonisup_cause_1));
	isup_cause_t* isup_cause_2 = isup_cause_parseFromJSON(jsonisup_cause_1);
	cJSON* jsonisup_cause_2 = isup_cause_convertToJSON(isup_cause_2);
	printf("repeating isup_cause:\n%s\n", cJSON_Print(jsonisup_cause_2));
}

int main() {
  test_isup_cause(1);
  test_isup_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // isup_cause_MAIN
#endif // isup_cause_TEST
