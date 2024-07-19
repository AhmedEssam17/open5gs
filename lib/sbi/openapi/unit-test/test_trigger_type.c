#ifndef trigger_type_TEST
#define trigger_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trigger_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trigger_type.h"
trigger_type_t* instantiate_trigger_type(int include_optional);



trigger_type_t* instantiate_trigger_type(int include_optional) {
  trigger_type_t* trigger_type = NULL;
  if (include_optional) {
    trigger_type = trigger_type_create(
    );
  } else {
    trigger_type = trigger_type_create(
    );
  }

  return trigger_type;
}


#ifdef trigger_type_MAIN

void test_trigger_type(int include_optional) {
    trigger_type_t* trigger_type_1 = instantiate_trigger_type(include_optional);

	cJSON* jsontrigger_type_1 = trigger_type_convertToJSON(trigger_type_1);
	printf("trigger_type :\n%s\n", cJSON_Print(jsontrigger_type_1));
	trigger_type_t* trigger_type_2 = trigger_type_parseFromJSON(jsontrigger_type_1);
	cJSON* jsontrigger_type_2 = trigger_type_convertToJSON(trigger_type_2);
	printf("repeating trigger_type:\n%s\n", cJSON_Print(jsontrigger_type_2));
}

int main() {
  test_trigger_type(1);
  test_trigger_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // trigger_type_MAIN
#endif // trigger_type_TEST
