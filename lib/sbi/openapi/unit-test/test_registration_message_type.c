#ifndef registration_message_type_TEST
#define registration_message_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_message_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_message_type.h"
registration_message_type_t* instantiate_registration_message_type(int include_optional);



registration_message_type_t* instantiate_registration_message_type(int include_optional) {
  registration_message_type_t* registration_message_type = NULL;
  if (include_optional) {
    registration_message_type = registration_message_type_create(
    );
  } else {
    registration_message_type = registration_message_type_create(
    );
  }

  return registration_message_type;
}


#ifdef registration_message_type_MAIN

void test_registration_message_type(int include_optional) {
    registration_message_type_t* registration_message_type_1 = instantiate_registration_message_type(include_optional);

	cJSON* jsonregistration_message_type_1 = registration_message_type_convertToJSON(registration_message_type_1);
	printf("registration_message_type :\n%s\n", cJSON_Print(jsonregistration_message_type_1));
	registration_message_type_t* registration_message_type_2 = registration_message_type_parseFromJSON(jsonregistration_message_type_1);
	cJSON* jsonregistration_message_type_2 = registration_message_type_convertToJSON(registration_message_type_2);
	printf("repeating registration_message_type:\n%s\n", cJSON_Print(jsonregistration_message_type_2));
}

int main() {
  test_registration_message_type(1);
  test_registration_message_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_message_type_MAIN
#endif // registration_message_type_TEST
