#ifndef media_initiator_flag_TEST
#define media_initiator_flag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_initiator_flag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_initiator_flag.h"
media_initiator_flag_t* instantiate_media_initiator_flag(int include_optional);



media_initiator_flag_t* instantiate_media_initiator_flag(int include_optional) {
  media_initiator_flag_t* media_initiator_flag = NULL;
  if (include_optional) {
    media_initiator_flag = media_initiator_flag_create(
    );
  } else {
    media_initiator_flag = media_initiator_flag_create(
    );
  }

  return media_initiator_flag;
}


#ifdef media_initiator_flag_MAIN

void test_media_initiator_flag(int include_optional) {
    media_initiator_flag_t* media_initiator_flag_1 = instantiate_media_initiator_flag(include_optional);

	cJSON* jsonmedia_initiator_flag_1 = media_initiator_flag_convertToJSON(media_initiator_flag_1);
	printf("media_initiator_flag :\n%s\n", cJSON_Print(jsonmedia_initiator_flag_1));
	media_initiator_flag_t* media_initiator_flag_2 = media_initiator_flag_parseFromJSON(jsonmedia_initiator_flag_1);
	cJSON* jsonmedia_initiator_flag_2 = media_initiator_flag_convertToJSON(media_initiator_flag_2);
	printf("repeating media_initiator_flag:\n%s\n", cJSON_Print(jsonmedia_initiator_flag_2));
}

int main() {
  test_media_initiator_flag(1);
  test_media_initiator_flag(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_initiator_flag_MAIN
#endif // media_initiator_flag_TEST
