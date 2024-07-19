#ifndef delivery_report_requested_any_of_TEST
#define delivery_report_requested_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delivery_report_requested_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delivery_report_requested_any_of.h"
delivery_report_requested_any_of_t* instantiate_delivery_report_requested_any_of(int include_optional);



delivery_report_requested_any_of_t* instantiate_delivery_report_requested_any_of(int include_optional) {
  delivery_report_requested_any_of_t* delivery_report_requested_any_of = NULL;
  if (include_optional) {
    delivery_report_requested_any_of = delivery_report_requested_any_of_create(
    );
  } else {
    delivery_report_requested_any_of = delivery_report_requested_any_of_create(
    );
  }

  return delivery_report_requested_any_of;
}


#ifdef delivery_report_requested_any_of_MAIN

void test_delivery_report_requested_any_of(int include_optional) {
    delivery_report_requested_any_of_t* delivery_report_requested_any_of_1 = instantiate_delivery_report_requested_any_of(include_optional);

	cJSON* jsondelivery_report_requested_any_of_1 = delivery_report_requested_any_of_convertToJSON(delivery_report_requested_any_of_1);
	printf("delivery_report_requested_any_of :\n%s\n", cJSON_Print(jsondelivery_report_requested_any_of_1));
	delivery_report_requested_any_of_t* delivery_report_requested_any_of_2 = delivery_report_requested_any_of_parseFromJSON(jsondelivery_report_requested_any_of_1);
	cJSON* jsondelivery_report_requested_any_of_2 = delivery_report_requested_any_of_convertToJSON(delivery_report_requested_any_of_2);
	printf("repeating delivery_report_requested_any_of:\n%s\n", cJSON_Print(jsondelivery_report_requested_any_of_2));
}

int main() {
  test_delivery_report_requested_any_of(1);
  test_delivery_report_requested_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // delivery_report_requested_any_of_MAIN
#endif // delivery_report_requested_any_of_TEST
