#ifndef one_time_event_type_any_of_TEST
#define one_time_event_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define one_time_event_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/one_time_event_type_any_of.h"
one_time_event_type_any_of_t* instantiate_one_time_event_type_any_of(int include_optional);



one_time_event_type_any_of_t* instantiate_one_time_event_type_any_of(int include_optional) {
  one_time_event_type_any_of_t* one_time_event_type_any_of = NULL;
  if (include_optional) {
    one_time_event_type_any_of = one_time_event_type_any_of_create(
    );
  } else {
    one_time_event_type_any_of = one_time_event_type_any_of_create(
    );
  }

  return one_time_event_type_any_of;
}


#ifdef one_time_event_type_any_of_MAIN

void test_one_time_event_type_any_of(int include_optional) {
    one_time_event_type_any_of_t* one_time_event_type_any_of_1 = instantiate_one_time_event_type_any_of(include_optional);

	cJSON* jsonone_time_event_type_any_of_1 = one_time_event_type_any_of_convertToJSON(one_time_event_type_any_of_1);
	printf("one_time_event_type_any_of :\n%s\n", cJSON_Print(jsonone_time_event_type_any_of_1));
	one_time_event_type_any_of_t* one_time_event_type_any_of_2 = one_time_event_type_any_of_parseFromJSON(jsonone_time_event_type_any_of_1);
	cJSON* jsonone_time_event_type_any_of_2 = one_time_event_type_any_of_convertToJSON(one_time_event_type_any_of_2);
	printf("repeating one_time_event_type_any_of:\n%s\n", cJSON_Print(jsonone_time_event_type_any_of_2));
}

int main() {
  test_one_time_event_type_any_of(1);
  test_one_time_event_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // one_time_event_type_any_of_MAIN
#endif // one_time_event_type_any_of_TEST
