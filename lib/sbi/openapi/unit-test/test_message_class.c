#ifndef message_class_TEST
#define message_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define message_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/message_class.h"
message_class_t* instantiate_message_class(int include_optional);

#include "test_class_identifier.c"


message_class_t* instantiate_message_class(int include_optional) {
  message_class_t* message_class = NULL;
  if (include_optional) {
    message_class = message_class_create(
      null,
      "0"
    );
  } else {
    message_class = message_class_create(
      null,
      "0"
    );
  }

  return message_class;
}


#ifdef message_class_MAIN

void test_message_class(int include_optional) {
    message_class_t* message_class_1 = instantiate_message_class(include_optional);

	cJSON* jsonmessage_class_1 = message_class_convertToJSON(message_class_1);
	printf("message_class :\n%s\n", cJSON_Print(jsonmessage_class_1));
	message_class_t* message_class_2 = message_class_parseFromJSON(jsonmessage_class_1);
	cJSON* jsonmessage_class_2 = message_class_convertToJSON(message_class_2);
	printf("repeating message_class:\n%s\n", cJSON_Print(jsonmessage_class_2));
}

int main() {
  test_message_class(1);
  test_message_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // message_class_MAIN
#endif // message_class_TEST
