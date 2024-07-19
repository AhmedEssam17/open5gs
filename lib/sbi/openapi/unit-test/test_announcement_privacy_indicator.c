#ifndef announcement_privacy_indicator_TEST
#define announcement_privacy_indicator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define announcement_privacy_indicator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/announcement_privacy_indicator.h"
announcement_privacy_indicator_t* instantiate_announcement_privacy_indicator(int include_optional);



announcement_privacy_indicator_t* instantiate_announcement_privacy_indicator(int include_optional) {
  announcement_privacy_indicator_t* announcement_privacy_indicator = NULL;
  if (include_optional) {
    announcement_privacy_indicator = announcement_privacy_indicator_create(
    );
  } else {
    announcement_privacy_indicator = announcement_privacy_indicator_create(
    );
  }

  return announcement_privacy_indicator;
}


#ifdef announcement_privacy_indicator_MAIN

void test_announcement_privacy_indicator(int include_optional) {
    announcement_privacy_indicator_t* announcement_privacy_indicator_1 = instantiate_announcement_privacy_indicator(include_optional);

	cJSON* jsonannouncement_privacy_indicator_1 = announcement_privacy_indicator_convertToJSON(announcement_privacy_indicator_1);
	printf("announcement_privacy_indicator :\n%s\n", cJSON_Print(jsonannouncement_privacy_indicator_1));
	announcement_privacy_indicator_t* announcement_privacy_indicator_2 = announcement_privacy_indicator_parseFromJSON(jsonannouncement_privacy_indicator_1);
	cJSON* jsonannouncement_privacy_indicator_2 = announcement_privacy_indicator_convertToJSON(announcement_privacy_indicator_2);
	printf("repeating announcement_privacy_indicator:\n%s\n", cJSON_Print(jsonannouncement_privacy_indicator_2));
}

int main() {
  test_announcement_privacy_indicator(1);
  test_announcement_privacy_indicator(0);

  printf("Hello world \n");
  return 0;
}

#endif // announcement_privacy_indicator_MAIN
#endif // announcement_privacy_indicator_TEST
