#ifndef sdp_type_any_of_TEST
#define sdp_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdp_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdp_type_any_of.h"
sdp_type_any_of_t* instantiate_sdp_type_any_of(int include_optional);



sdp_type_any_of_t* instantiate_sdp_type_any_of(int include_optional) {
  sdp_type_any_of_t* sdp_type_any_of = NULL;
  if (include_optional) {
    sdp_type_any_of = sdp_type_any_of_create(
    );
  } else {
    sdp_type_any_of = sdp_type_any_of_create(
    );
  }

  return sdp_type_any_of;
}


#ifdef sdp_type_any_of_MAIN

void test_sdp_type_any_of(int include_optional) {
    sdp_type_any_of_t* sdp_type_any_of_1 = instantiate_sdp_type_any_of(include_optional);

	cJSON* jsonsdp_type_any_of_1 = sdp_type_any_of_convertToJSON(sdp_type_any_of_1);
	printf("sdp_type_any_of :\n%s\n", cJSON_Print(jsonsdp_type_any_of_1));
	sdp_type_any_of_t* sdp_type_any_of_2 = sdp_type_any_of_parseFromJSON(jsonsdp_type_any_of_1);
	cJSON* jsonsdp_type_any_of_2 = sdp_type_any_of_convertToJSON(sdp_type_any_of_2);
	printf("repeating sdp_type_any_of:\n%s\n", cJSON_Print(jsonsdp_type_any_of_2));
}

int main() {
  test_sdp_type_any_of(1);
  test_sdp_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdp_type_any_of_MAIN
#endif // sdp_type_any_of_TEST
