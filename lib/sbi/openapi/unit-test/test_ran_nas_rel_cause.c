#ifndef ran_nas_rel_cause_TEST
#define ran_nas_rel_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ran_nas_rel_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ran_nas_rel_cause.h"
ran_nas_rel_cause_t* instantiate_ran_nas_rel_cause(int include_optional);

#include "test_ng_ap_cause.c"


ran_nas_rel_cause_t* instantiate_ran_nas_rel_cause(int include_optional) {
  ran_nas_rel_cause_t* ran_nas_rel_cause = NULL;
  if (include_optional) {
    ran_nas_rel_cause = ran_nas_rel_cause_create(
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0),
      0,
      0,
      "0"
    );
  } else {
    ran_nas_rel_cause = ran_nas_rel_cause_create(
      NULL,
      0,
      0,
      "0"
    );
  }

  return ran_nas_rel_cause;
}


#ifdef ran_nas_rel_cause_MAIN

void test_ran_nas_rel_cause(int include_optional) {
    ran_nas_rel_cause_t* ran_nas_rel_cause_1 = instantiate_ran_nas_rel_cause(include_optional);

	cJSON* jsonran_nas_rel_cause_1 = ran_nas_rel_cause_convertToJSON(ran_nas_rel_cause_1);
	printf("ran_nas_rel_cause :\n%s\n", cJSON_Print(jsonran_nas_rel_cause_1));
	ran_nas_rel_cause_t* ran_nas_rel_cause_2 = ran_nas_rel_cause_parseFromJSON(jsonran_nas_rel_cause_1);
	cJSON* jsonran_nas_rel_cause_2 = ran_nas_rel_cause_convertToJSON(ran_nas_rel_cause_2);
	printf("repeating ran_nas_rel_cause:\n%s\n", cJSON_Print(jsonran_nas_rel_cause_2));
}

int main() {
  test_ran_nas_rel_cause(1);
  test_ran_nas_rel_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // ran_nas_rel_cause_MAIN
#endif // ran_nas_rel_cause_TEST
