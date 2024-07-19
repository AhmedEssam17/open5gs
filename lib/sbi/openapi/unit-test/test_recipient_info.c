#ifndef recipient_info_TEST
#define recipient_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define recipient_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/recipient_info.h"
recipient_info_t* instantiate_recipient_info(int include_optional);

#include "test_sm_address_info.c"
#include "test_sm_address_info.c"
#include "test_sm_interface.c"


recipient_info_t* instantiate_recipient_info(int include_optional) {
  recipient_info_t* recipient_info = NULL;
  if (include_optional) {
    recipient_info = recipient_info_create(
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_sm_address_info(0),
       // false, not to have infinite recursion
      instantiate_sm_address_info(0),
      "0",
       // false, not to have infinite recursion
      instantiate_sm_interface(0),
      "0"
    );
  } else {
    recipient_info = recipient_info_create(
      "a",
      "a",
      NULL,
      NULL,
      "0",
      NULL,
      "0"
    );
  }

  return recipient_info;
}


#ifdef recipient_info_MAIN

void test_recipient_info(int include_optional) {
    recipient_info_t* recipient_info_1 = instantiate_recipient_info(include_optional);

	cJSON* jsonrecipient_info_1 = recipient_info_convertToJSON(recipient_info_1);
	printf("recipient_info :\n%s\n", cJSON_Print(jsonrecipient_info_1));
	recipient_info_t* recipient_info_2 = recipient_info_parseFromJSON(jsonrecipient_info_1);
	cJSON* jsonrecipient_info_2 = recipient_info_convertToJSON(recipient_info_2);
	printf("repeating recipient_info:\n%s\n", cJSON_Print(jsonrecipient_info_2));
}

int main() {
  test_recipient_info(1);
  test_recipient_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // recipient_info_MAIN
#endif // recipient_info_TEST
