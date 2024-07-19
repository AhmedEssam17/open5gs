#ifndef notification_type_any_of_TEST
#define notification_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_type_any_of.h"
notification_type_any_of_t* instantiate_notification_type_any_of(int include_optional);



notification_type_any_of_t* instantiate_notification_type_any_of(int include_optional) {
  notification_type_any_of_t* notification_type_any_of = NULL;
  if (include_optional) {
    notification_type_any_of = notification_type_any_of_create(
    );
  } else {
    notification_type_any_of = notification_type_any_of_create(
    );
  }

  return notification_type_any_of;
}


#ifdef notification_type_any_of_MAIN

void test_notification_type_any_of(int include_optional) {
    notification_type_any_of_t* notification_type_any_of_1 = instantiate_notification_type_any_of(include_optional);

	cJSON* jsonnotification_type_any_of_1 = notification_type_any_of_convertToJSON(notification_type_any_of_1);
	printf("notification_type_any_of :\n%s\n", cJSON_Print(jsonnotification_type_any_of_1));
	notification_type_any_of_t* notification_type_any_of_2 = notification_type_any_of_parseFromJSON(jsonnotification_type_any_of_1);
	cJSON* jsonnotification_type_any_of_2 = notification_type_any_of_convertToJSON(notification_type_any_of_2);
	printf("repeating notification_type_any_of:\n%s\n", cJSON_Print(jsonnotification_type_any_of_2));
}

int main() {
  test_notification_type_any_of(1);
  test_notification_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_type_any_of_MAIN
#endif // notification_type_any_of_TEST
