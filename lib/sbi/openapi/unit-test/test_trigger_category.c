#ifndef trigger_category_TEST
#define trigger_category_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trigger_category_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trigger_category.h"
trigger_category_t* instantiate_trigger_category(int include_optional);



trigger_category_t* instantiate_trigger_category(int include_optional) {
  trigger_category_t* trigger_category = NULL;
  if (include_optional) {
    trigger_category = trigger_category_create(
    );
  } else {
    trigger_category = trigger_category_create(
    );
  }

  return trigger_category;
}


#ifdef trigger_category_MAIN

void test_trigger_category(int include_optional) {
    trigger_category_t* trigger_category_1 = instantiate_trigger_category(include_optional);

	cJSON* jsontrigger_category_1 = trigger_category_convertToJSON(trigger_category_1);
	printf("trigger_category :\n%s\n", cJSON_Print(jsontrigger_category_1));
	trigger_category_t* trigger_category_2 = trigger_category_parseFromJSON(jsontrigger_category_1);
	cJSON* jsontrigger_category_2 = trigger_category_convertToJSON(trigger_category_2);
	printf("repeating trigger_category:\n%s\n", cJSON_Print(jsontrigger_category_2));
}

int main() {
  test_trigger_category(1);
  test_trigger_category(0);

  printf("Hello world \n");
  return 0;
}

#endif // trigger_category_MAIN
#endif // trigger_category_TEST
