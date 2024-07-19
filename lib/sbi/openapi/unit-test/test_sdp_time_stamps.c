#ifndef sdp_time_stamps_TEST
#define sdp_time_stamps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdp_time_stamps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdp_time_stamps.h"
sdp_time_stamps_t* instantiate_sdp_time_stamps(int include_optional);



sdp_time_stamps_t* instantiate_sdp_time_stamps(int include_optional) {
  sdp_time_stamps_t* sdp_time_stamps = NULL;
  if (include_optional) {
    sdp_time_stamps = sdp_time_stamps_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    sdp_time_stamps = sdp_time_stamps_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return sdp_time_stamps;
}


#ifdef sdp_time_stamps_MAIN

void test_sdp_time_stamps(int include_optional) {
    sdp_time_stamps_t* sdp_time_stamps_1 = instantiate_sdp_time_stamps(include_optional);

	cJSON* jsonsdp_time_stamps_1 = sdp_time_stamps_convertToJSON(sdp_time_stamps_1);
	printf("sdp_time_stamps :\n%s\n", cJSON_Print(jsonsdp_time_stamps_1));
	sdp_time_stamps_t* sdp_time_stamps_2 = sdp_time_stamps_parseFromJSON(jsonsdp_time_stamps_1);
	cJSON* jsonsdp_time_stamps_2 = sdp_time_stamps_convertToJSON(sdp_time_stamps_2);
	printf("repeating sdp_time_stamps:\n%s\n", cJSON_Print(jsonsdp_time_stamps_2));
}

int main() {
  test_sdp_time_stamps(1);
  test_sdp_time_stamps(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdp_time_stamps_MAIN
#endif // sdp_time_stamps_TEST
