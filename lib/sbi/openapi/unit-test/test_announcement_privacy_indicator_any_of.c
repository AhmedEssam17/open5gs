#ifndef announcement_privacy_indicator_any_of_TEST
#define announcement_privacy_indicator_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define announcement_privacy_indicator_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/announcement_privacy_indicator_any_of.h"
announcement_privacy_indicator_any_of_t* instantiate_announcement_privacy_indicator_any_of(int include_optional);



announcement_privacy_indicator_any_of_t* instantiate_announcement_privacy_indicator_any_of(int include_optional) {
  announcement_privacy_indicator_any_of_t* announcement_privacy_indicator_any_of = NULL;
  if (include_optional) {
    announcement_privacy_indicator_any_of = announcement_privacy_indicator_any_of_create(
    );
  } else {
    announcement_privacy_indicator_any_of = announcement_privacy_indicator_any_of_create(
    );
  }

  return announcement_privacy_indicator_any_of;
}


#ifdef announcement_privacy_indicator_any_of_MAIN

void test_announcement_privacy_indicator_any_of(int include_optional) {
    announcement_privacy_indicator_any_of_t* announcement_privacy_indicator_any_of_1 = instantiate_announcement_privacy_indicator_any_of(include_optional);

	cJSON* jsonannouncement_privacy_indicator_any_of_1 = announcement_privacy_indicator_any_of_convertToJSON(announcement_privacy_indicator_any_of_1);
	printf("announcement_privacy_indicator_any_of :\n%s\n", cJSON_Print(jsonannouncement_privacy_indicator_any_of_1));
	announcement_privacy_indicator_any_of_t* announcement_privacy_indicator_any_of_2 = announcement_privacy_indicator_any_of_parseFromJSON(jsonannouncement_privacy_indicator_any_of_1);
	cJSON* jsonannouncement_privacy_indicator_any_of_2 = announcement_privacy_indicator_any_of_convertToJSON(announcement_privacy_indicator_any_of_2);
	printf("repeating announcement_privacy_indicator_any_of:\n%s\n", cJSON_Print(jsonannouncement_privacy_indicator_any_of_2));
}

int main() {
  test_announcement_privacy_indicator_any_of(1);
  test_announcement_privacy_indicator_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // announcement_privacy_indicator_any_of_MAIN
#endif // announcement_privacy_indicator_any_of_TEST
