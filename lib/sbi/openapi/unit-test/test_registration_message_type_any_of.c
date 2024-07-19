#ifndef registration_message_type_any_of_TEST
#define registration_message_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_message_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_message_type_any_of.h"
registration_message_type_any_of_t* instantiate_registration_message_type_any_of(int include_optional);



registration_message_type_any_of_t* instantiate_registration_message_type_any_of(int include_optional) {
  registration_message_type_any_of_t* registration_message_type_any_of = NULL;
  if (include_optional) {
    registration_message_type_any_of = registration_message_type_any_of_create(
    );
  } else {
    registration_message_type_any_of = registration_message_type_any_of_create(
    );
  }

  return registration_message_type_any_of;
}


#ifdef registration_message_type_any_of_MAIN

void test_registration_message_type_any_of(int include_optional) {
    registration_message_type_any_of_t* registration_message_type_any_of_1 = instantiate_registration_message_type_any_of(include_optional);

	cJSON* jsonregistration_message_type_any_of_1 = registration_message_type_any_of_convertToJSON(registration_message_type_any_of_1);
	printf("registration_message_type_any_of :\n%s\n", cJSON_Print(jsonregistration_message_type_any_of_1));
	registration_message_type_any_of_t* registration_message_type_any_of_2 = registration_message_type_any_of_parseFromJSON(jsonregistration_message_type_any_of_1);
	cJSON* jsonregistration_message_type_any_of_2 = registration_message_type_any_of_convertToJSON(registration_message_type_any_of_2);
	printf("repeating registration_message_type_any_of:\n%s\n", cJSON_Print(jsonregistration_message_type_any_of_2));
}

int main() {
  test_registration_message_type_any_of(1);
  test_registration_message_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_message_type_any_of_MAIN
#endif // registration_message_type_any_of_TEST
