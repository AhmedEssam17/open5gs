#ifndef sdp_type_TEST
#define sdp_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdp_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdp_type.h"
sdp_type_t* instantiate_sdp_type(int include_optional);



sdp_type_t* instantiate_sdp_type(int include_optional) {
  sdp_type_t* sdp_type = NULL;
  if (include_optional) {
    sdp_type = sdp_type_create(
    );
  } else {
    sdp_type = sdp_type_create(
    );
  }

  return sdp_type;
}


#ifdef sdp_type_MAIN

void test_sdp_type(int include_optional) {
    sdp_type_t* sdp_type_1 = instantiate_sdp_type(include_optional);

	cJSON* jsonsdp_type_1 = sdp_type_convertToJSON(sdp_type_1);
	printf("sdp_type :\n%s\n", cJSON_Print(jsonsdp_type_1));
	sdp_type_t* sdp_type_2 = sdp_type_parseFromJSON(jsonsdp_type_1);
	cJSON* jsonsdp_type_2 = sdp_type_convertToJSON(sdp_type_2);
	printf("repeating sdp_type:\n%s\n", cJSON_Print(jsonsdp_type_2));
}

int main() {
  test_sdp_type(1);
  test_sdp_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdp_type_MAIN
#endif // sdp_type_TEST
