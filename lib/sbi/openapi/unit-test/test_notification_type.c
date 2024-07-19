#ifndef notification_type_TEST
#define notification_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_type.h"
notification_type_t* instantiate_notification_type(int include_optional);



notification_type_t* instantiate_notification_type(int include_optional) {
  notification_type_t* notification_type = NULL;
  if (include_optional) {
    notification_type = notification_type_create(
    );
  } else {
    notification_type = notification_type_create(
    );
  }

  return notification_type;
}


#ifdef notification_type_MAIN

void test_notification_type(int include_optional) {
    notification_type_t* notification_type_1 = instantiate_notification_type(include_optional);

	cJSON* jsonnotification_type_1 = notification_type_convertToJSON(notification_type_1);
	printf("notification_type :\n%s\n", cJSON_Print(jsonnotification_type_1));
	notification_type_t* notification_type_2 = notification_type_parseFromJSON(jsonnotification_type_1);
	cJSON* jsonnotification_type_2 = notification_type_convertToJSON(notification_type_2);
	printf("repeating notification_type:\n%s\n", cJSON_Print(jsonnotification_type_2));
}

int main() {
  test_notification_type(1);
  test_notification_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_type_MAIN
#endif // notification_type_TEST
