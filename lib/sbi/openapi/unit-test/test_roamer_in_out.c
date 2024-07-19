#ifndef roamer_in_out_TEST
#define roamer_in_out_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roamer_in_out_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roamer_in_out.h"
roamer_in_out_t* instantiate_roamer_in_out(int include_optional);



roamer_in_out_t* instantiate_roamer_in_out(int include_optional) {
  roamer_in_out_t* roamer_in_out = NULL;
  if (include_optional) {
    roamer_in_out = roamer_in_out_create(
    );
  } else {
    roamer_in_out = roamer_in_out_create(
    );
  }

  return roamer_in_out;
}


#ifdef roamer_in_out_MAIN

void test_roamer_in_out(int include_optional) {
    roamer_in_out_t* roamer_in_out_1 = instantiate_roamer_in_out(include_optional);

	cJSON* jsonroamer_in_out_1 = roamer_in_out_convertToJSON(roamer_in_out_1);
	printf("roamer_in_out :\n%s\n", cJSON_Print(jsonroamer_in_out_1));
	roamer_in_out_t* roamer_in_out_2 = roamer_in_out_parseFromJSON(jsonroamer_in_out_1);
	cJSON* jsonroamer_in_out_2 = roamer_in_out_convertToJSON(roamer_in_out_2);
	printf("repeating roamer_in_out:\n%s\n", cJSON_Print(jsonroamer_in_out_2));
}

int main() {
  test_roamer_in_out(1);
  test_roamer_in_out(0);

  printf("Hello world \n");
  return 0;
}

#endif // roamer_in_out_MAIN
#endif // roamer_in_out_TEST
