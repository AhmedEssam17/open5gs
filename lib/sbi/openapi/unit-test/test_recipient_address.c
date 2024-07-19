#ifndef recipient_address_TEST
#define recipient_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define recipient_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/recipient_address.h"
recipient_address_t* instantiate_recipient_address(int include_optional);

#include "test_sm_address_info.c"
#include "test_sm_addressee_type.c"


recipient_address_t* instantiate_recipient_address(int include_optional) {
  recipient_address_t* recipient_address = NULL;
  if (include_optional) {
    recipient_address = recipient_address_create(
       // false, not to have infinite recursion
      instantiate_sm_address_info(0),
      null
    );
  } else {
    recipient_address = recipient_address_create(
      NULL,
      null
    );
  }

  return recipient_address;
}


#ifdef recipient_address_MAIN

void test_recipient_address(int include_optional) {
    recipient_address_t* recipient_address_1 = instantiate_recipient_address(include_optional);

	cJSON* jsonrecipient_address_1 = recipient_address_convertToJSON(recipient_address_1);
	printf("recipient_address :\n%s\n", cJSON_Print(jsonrecipient_address_1));
	recipient_address_t* recipient_address_2 = recipient_address_parseFromJSON(jsonrecipient_address_1);
	cJSON* jsonrecipient_address_2 = recipient_address_convertToJSON(recipient_address_2);
	printf("repeating recipient_address:\n%s\n", cJSON_Print(jsonrecipient_address_2));
}

int main() {
  test_recipient_address(1);
  test_recipient_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // recipient_address_MAIN
#endif // recipient_address_TEST
