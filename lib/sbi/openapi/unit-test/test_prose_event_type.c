#ifndef prose_event_type_TEST
#define prose_event_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_event_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_event_type.h"
prose_event_type_t* instantiate_prose_event_type(int include_optional);



prose_event_type_t* instantiate_prose_event_type(int include_optional) {
  prose_event_type_t* prose_event_type = NULL;
  if (include_optional) {
    prose_event_type = prose_event_type_create(
    );
  } else {
    prose_event_type = prose_event_type_create(
    );
  }

  return prose_event_type;
}


#ifdef prose_event_type_MAIN

void test_prose_event_type(int include_optional) {
    prose_event_type_t* prose_event_type_1 = instantiate_prose_event_type(include_optional);

	cJSON* jsonprose_event_type_1 = prose_event_type_convertToJSON(prose_event_type_1);
	printf("prose_event_type :\n%s\n", cJSON_Print(jsonprose_event_type_1));
	prose_event_type_t* prose_event_type_2 = prose_event_type_parseFromJSON(jsonprose_event_type_1);
	cJSON* jsonprose_event_type_2 = prose_event_type_convertToJSON(prose_event_type_2);
	printf("repeating prose_event_type:\n%s\n", cJSON_Print(jsonprose_event_type_2));
}

int main() {
  test_prose_event_type(1);
  test_prose_event_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_event_type_MAIN
#endif // prose_event_type_TEST
