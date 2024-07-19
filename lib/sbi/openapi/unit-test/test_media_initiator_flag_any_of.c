#ifndef media_initiator_flag_any_of_TEST
#define media_initiator_flag_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_initiator_flag_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_initiator_flag_any_of.h"
media_initiator_flag_any_of_t* instantiate_media_initiator_flag_any_of(int include_optional);



media_initiator_flag_any_of_t* instantiate_media_initiator_flag_any_of(int include_optional) {
  media_initiator_flag_any_of_t* media_initiator_flag_any_of = NULL;
  if (include_optional) {
    media_initiator_flag_any_of = media_initiator_flag_any_of_create(
    );
  } else {
    media_initiator_flag_any_of = media_initiator_flag_any_of_create(
    );
  }

  return media_initiator_flag_any_of;
}


#ifdef media_initiator_flag_any_of_MAIN

void test_media_initiator_flag_any_of(int include_optional) {
    media_initiator_flag_any_of_t* media_initiator_flag_any_of_1 = instantiate_media_initiator_flag_any_of(include_optional);

	cJSON* jsonmedia_initiator_flag_any_of_1 = media_initiator_flag_any_of_convertToJSON(media_initiator_flag_any_of_1);
	printf("media_initiator_flag_any_of :\n%s\n", cJSON_Print(jsonmedia_initiator_flag_any_of_1));
	media_initiator_flag_any_of_t* media_initiator_flag_any_of_2 = media_initiator_flag_any_of_parseFromJSON(jsonmedia_initiator_flag_any_of_1);
	cJSON* jsonmedia_initiator_flag_any_of_2 = media_initiator_flag_any_of_convertToJSON(media_initiator_flag_any_of_2);
	printf("repeating media_initiator_flag_any_of:\n%s\n", cJSON_Print(jsonmedia_initiator_flag_any_of_2));
}

int main() {
  test_media_initiator_flag_any_of(1);
  test_media_initiator_flag_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_initiator_flag_any_of_MAIN
#endif // media_initiator_flag_any_of_TEST
