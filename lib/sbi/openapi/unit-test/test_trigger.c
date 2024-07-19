#ifndef trigger_TEST
#define trigger_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trigger_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trigger.h"
trigger_t* instantiate_trigger(int include_optional);

#include "test_trigger_type.c"
#include "test_trigger_category.c"


trigger_t* instantiate_trigger(int include_optional) {
  trigger_t* trigger = NULL;
  if (include_optional) {
    trigger = trigger_create(
      null,
      null,
      56,
      0,
      0,
      0,
      0,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    trigger = trigger_create(
      null,
      null,
      56,
      0,
      0,
      0,
      0,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return trigger;
}


#ifdef trigger_MAIN

void test_trigger(int include_optional) {
    trigger_t* trigger_1 = instantiate_trigger(include_optional);

	cJSON* jsontrigger_1 = trigger_convertToJSON(trigger_1);
	printf("trigger :\n%s\n", cJSON_Print(jsontrigger_1));
	trigger_t* trigger_2 = trigger_parseFromJSON(jsontrigger_1);
	cJSON* jsontrigger_2 = trigger_convertToJSON(trigger_2);
	printf("repeating trigger:\n%s\n", cJSON_Print(jsontrigger_2));
}

int main() {
  test_trigger(1);
  test_trigger(0);

  printf("Hello world \n");
  return 0;
}

#endif // trigger_MAIN
#endif // trigger_TEST
