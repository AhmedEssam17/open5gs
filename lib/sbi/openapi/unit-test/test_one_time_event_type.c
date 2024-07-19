#ifndef one_time_event_type_TEST
#define one_time_event_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define one_time_event_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/one_time_event_type.h"
one_time_event_type_t* instantiate_one_time_event_type(int include_optional);



one_time_event_type_t* instantiate_one_time_event_type(int include_optional) {
  one_time_event_type_t* one_time_event_type = NULL;
  if (include_optional) {
    one_time_event_type = one_time_event_type_create(
    );
  } else {
    one_time_event_type = one_time_event_type_create(
    );
  }

  return one_time_event_type;
}


#ifdef one_time_event_type_MAIN

void test_one_time_event_type(int include_optional) {
    one_time_event_type_t* one_time_event_type_1 = instantiate_one_time_event_type(include_optional);

	cJSON* jsonone_time_event_type_1 = one_time_event_type_convertToJSON(one_time_event_type_1);
	printf("one_time_event_type :\n%s\n", cJSON_Print(jsonone_time_event_type_1));
	one_time_event_type_t* one_time_event_type_2 = one_time_event_type_parseFromJSON(jsonone_time_event_type_1);
	cJSON* jsonone_time_event_type_2 = one_time_event_type_convertToJSON(one_time_event_type_2);
	printf("repeating one_time_event_type:\n%s\n", cJSON_Print(jsonone_time_event_type_2));
}

int main() {
  test_one_time_event_type(1);
  test_one_time_event_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // one_time_event_type_MAIN
#endif // one_time_event_type_TEST
