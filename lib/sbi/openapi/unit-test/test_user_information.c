#ifndef user_information_TEST
#define user_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_information.h"
user_information_t* instantiate_user_information(int include_optional);

#include "test_roamer_in_out.c"


user_information_t* instantiate_user_information(int include_optional) {
  user_information_t* user_information = NULL;
  if (include_optional) {
    user_information = user_information_create(
      "a",
      "a",
      1,
      null
    );
  } else {
    user_information = user_information_create(
      "a",
      "a",
      1,
      null
    );
  }

  return user_information;
}


#ifdef user_information_MAIN

void test_user_information(int include_optional) {
    user_information_t* user_information_1 = instantiate_user_information(include_optional);

	cJSON* jsonuser_information_1 = user_information_convertToJSON(user_information_1);
	printf("user_information :\n%s\n", cJSON_Print(jsonuser_information_1));
	user_information_t* user_information_2 = user_information_parseFromJSON(jsonuser_information_1);
	cJSON* jsonuser_information_2 = user_information_convertToJSON(user_information_2);
	printf("repeating user_information:\n%s\n", cJSON_Print(jsonuser_information_2));
}

int main() {
  test_user_information(1);
  test_user_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_information_MAIN
#endif // user_information_TEST
