#ifndef trigger_type_any_of_TEST
#define trigger_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trigger_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trigger_type_any_of.h"
trigger_type_any_of_t* instantiate_trigger_type_any_of(int include_optional);



trigger_type_any_of_t* instantiate_trigger_type_any_of(int include_optional) {
  trigger_type_any_of_t* trigger_type_any_of = NULL;
  if (include_optional) {
    trigger_type_any_of = trigger_type_any_of_create(
    );
  } else {
    trigger_type_any_of = trigger_type_any_of_create(
    );
  }

  return trigger_type_any_of;
}


#ifdef trigger_type_any_of_MAIN

void test_trigger_type_any_of(int include_optional) {
    trigger_type_any_of_t* trigger_type_any_of_1 = instantiate_trigger_type_any_of(include_optional);

	cJSON* jsontrigger_type_any_of_1 = trigger_type_any_of_convertToJSON(trigger_type_any_of_1);
	printf("trigger_type_any_of :\n%s\n", cJSON_Print(jsontrigger_type_any_of_1));
	trigger_type_any_of_t* trigger_type_any_of_2 = trigger_type_any_of_parseFromJSON(jsontrigger_type_any_of_1);
	cJSON* jsontrigger_type_any_of_2 = trigger_type_any_of_convertToJSON(trigger_type_any_of_2);
	printf("repeating trigger_type_any_of:\n%s\n", cJSON_Print(jsontrigger_type_any_of_2));
}

int main() {
  test_trigger_type_any_of(1);
  test_trigger_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // trigger_type_any_of_MAIN
#endif // trigger_type_any_of_TEST
