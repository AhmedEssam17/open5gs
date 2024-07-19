#ifndef roamer_in_out_any_of_TEST
#define roamer_in_out_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roamer_in_out_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roamer_in_out_any_of.h"
roamer_in_out_any_of_t* instantiate_roamer_in_out_any_of(int include_optional);



roamer_in_out_any_of_t* instantiate_roamer_in_out_any_of(int include_optional) {
  roamer_in_out_any_of_t* roamer_in_out_any_of = NULL;
  if (include_optional) {
    roamer_in_out_any_of = roamer_in_out_any_of_create(
    );
  } else {
    roamer_in_out_any_of = roamer_in_out_any_of_create(
    );
  }

  return roamer_in_out_any_of;
}


#ifdef roamer_in_out_any_of_MAIN

void test_roamer_in_out_any_of(int include_optional) {
    roamer_in_out_any_of_t* roamer_in_out_any_of_1 = instantiate_roamer_in_out_any_of(include_optional);

	cJSON* jsonroamer_in_out_any_of_1 = roamer_in_out_any_of_convertToJSON(roamer_in_out_any_of_1);
	printf("roamer_in_out_any_of :\n%s\n", cJSON_Print(jsonroamer_in_out_any_of_1));
	roamer_in_out_any_of_t* roamer_in_out_any_of_2 = roamer_in_out_any_of_parseFromJSON(jsonroamer_in_out_any_of_1);
	cJSON* jsonroamer_in_out_any_of_2 = roamer_in_out_any_of_convertToJSON(roamer_in_out_any_of_2);
	printf("repeating roamer_in_out_any_of:\n%s\n", cJSON_Print(jsonroamer_in_out_any_of_2));
}

int main() {
  test_roamer_in_out_any_of(1);
  test_roamer_in_out_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // roamer_in_out_any_of_MAIN
#endif // roamer_in_out_any_of_TEST
