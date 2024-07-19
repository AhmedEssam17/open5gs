#ifndef announcement_information_TEST
#define announcement_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define announcement_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/announcement_information.h"
announcement_information_t* instantiate_announcement_information(int include_optional);

#include "test_quota_consumption_indicator.c"
#include "test_play_to_party.c"
#include "test_announcement_privacy_indicator.c"


announcement_information_t* instantiate_announcement_information(int include_optional) {
  announcement_information_t* announcement_information = NULL;
  if (include_optional) {
    announcement_information = announcement_information_create(
      0,
      "0",
      list_createList(),
      56,
      null,
      0,
      null,
      null,
      "0"
    );
  } else {
    announcement_information = announcement_information_create(
      0,
      "0",
      list_createList(),
      56,
      null,
      0,
      null,
      null,
      "0"
    );
  }

  return announcement_information;
}


#ifdef announcement_information_MAIN

void test_announcement_information(int include_optional) {
    announcement_information_t* announcement_information_1 = instantiate_announcement_information(include_optional);

	cJSON* jsonannouncement_information_1 = announcement_information_convertToJSON(announcement_information_1);
	printf("announcement_information :\n%s\n", cJSON_Print(jsonannouncement_information_1));
	announcement_information_t* announcement_information_2 = announcement_information_parseFromJSON(jsonannouncement_information_1);
	cJSON* jsonannouncement_information_2 = announcement_information_convertToJSON(announcement_information_2);
	printf("repeating announcement_information:\n%s\n", cJSON_Print(jsonannouncement_information_2));
}

int main() {
  test_announcement_information(1);
  test_announcement_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // announcement_information_MAIN
#endif // announcement_information_TEST
