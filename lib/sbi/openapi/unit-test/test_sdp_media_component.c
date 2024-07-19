#ifndef sdp_media_component_TEST
#define sdp_media_component_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdp_media_component_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdp_media_component.h"
sdp_media_component_t* instantiate_sdp_media_component(int include_optional);

#include "test_media_initiator_flag.c"
#include "test_sdp_type.c"


sdp_media_component_t* instantiate_sdp_media_component(int include_optional) {
  sdp_media_component_t* sdp_media_component = NULL;
  if (include_optional) {
    sdp_media_component = sdp_media_component_create(
      "0",
      list_createList(),
      1,
      1,
      1,
      null,
      "0",
      "a",
      "a",
      null
    );
  } else {
    sdp_media_component = sdp_media_component_create(
      "0",
      list_createList(),
      1,
      1,
      1,
      null,
      "0",
      "a",
      "a",
      null
    );
  }

  return sdp_media_component;
}


#ifdef sdp_media_component_MAIN

void test_sdp_media_component(int include_optional) {
    sdp_media_component_t* sdp_media_component_1 = instantiate_sdp_media_component(include_optional);

	cJSON* jsonsdp_media_component_1 = sdp_media_component_convertToJSON(sdp_media_component_1);
	printf("sdp_media_component :\n%s\n", cJSON_Print(jsonsdp_media_component_1));
	sdp_media_component_t* sdp_media_component_2 = sdp_media_component_parseFromJSON(jsonsdp_media_component_1);
	cJSON* jsonsdp_media_component_2 = sdp_media_component_convertToJSON(sdp_media_component_2);
	printf("repeating sdp_media_component:\n%s\n", cJSON_Print(jsonsdp_media_component_2));
}

int main() {
  test_sdp_media_component(1);
  test_sdp_media_component(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdp_media_component_MAIN
#endif // sdp_media_component_TEST
