#ifndef delivery_report_requested_TEST
#define delivery_report_requested_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delivery_report_requested_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delivery_report_requested.h"
delivery_report_requested_t* instantiate_delivery_report_requested(int include_optional);



delivery_report_requested_t* instantiate_delivery_report_requested(int include_optional) {
  delivery_report_requested_t* delivery_report_requested = NULL;
  if (include_optional) {
    delivery_report_requested = delivery_report_requested_create(
    );
  } else {
    delivery_report_requested = delivery_report_requested_create(
    );
  }

  return delivery_report_requested;
}


#ifdef delivery_report_requested_MAIN

void test_delivery_report_requested(int include_optional) {
    delivery_report_requested_t* delivery_report_requested_1 = instantiate_delivery_report_requested(include_optional);

	cJSON* jsondelivery_report_requested_1 = delivery_report_requested_convertToJSON(delivery_report_requested_1);
	printf("delivery_report_requested :\n%s\n", cJSON_Print(jsondelivery_report_requested_1));
	delivery_report_requested_t* delivery_report_requested_2 = delivery_report_requested_parseFromJSON(jsondelivery_report_requested_1);
	cJSON* jsondelivery_report_requested_2 = delivery_report_requested_convertToJSON(delivery_report_requested_2);
	printf("repeating delivery_report_requested:\n%s\n", cJSON_Print(jsondelivery_report_requested_2));
}

int main() {
  test_delivery_report_requested(1);
  test_delivery_report_requested(0);

  printf("Hello world \n");
  return 0;
}

#endif // delivery_report_requested_MAIN
#endif // delivery_report_requested_TEST
