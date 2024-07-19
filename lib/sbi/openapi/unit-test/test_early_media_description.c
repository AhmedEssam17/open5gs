#ifndef early_media_description_TEST
#define early_media_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define early_media_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/early_media_description.h"
early_media_description_t* instantiate_early_media_description(int include_optional);

#include "test_sdp_time_stamps.c"


early_media_description_t* instantiate_early_media_description(int include_optional) {
  early_media_description_t* early_media_description = NULL;
  if (include_optional) {
    early_media_description = early_media_description_create(
       // false, not to have infinite recursion
      instantiate_sdp_time_stamps(0),
      list_createList(),
      list_createList()
    );
  } else {
    early_media_description = early_media_description_create(
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return early_media_description;
}


#ifdef early_media_description_MAIN

void test_early_media_description(int include_optional) {
    early_media_description_t* early_media_description_1 = instantiate_early_media_description(include_optional);

	cJSON* jsonearly_media_description_1 = early_media_description_convertToJSON(early_media_description_1);
	printf("early_media_description :\n%s\n", cJSON_Print(jsonearly_media_description_1));
	early_media_description_t* early_media_description_2 = early_media_description_parseFromJSON(jsonearly_media_description_1);
	cJSON* jsonearly_media_description_2 = early_media_description_convertToJSON(early_media_description_2);
	printf("repeating early_media_description:\n%s\n", cJSON_Print(jsonearly_media_description_2));
}

int main() {
  test_early_media_description(1);
  test_early_media_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // early_media_description_MAIN
#endif // early_media_description_TEST
