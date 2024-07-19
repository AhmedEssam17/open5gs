#ifndef api_direction_any_of_TEST
#define api_direction_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_direction_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_direction_any_of.h"
api_direction_any_of_t* instantiate_api_direction_any_of(int include_optional);



api_direction_any_of_t* instantiate_api_direction_any_of(int include_optional) {
  api_direction_any_of_t* api_direction_any_of = NULL;
  if (include_optional) {
    api_direction_any_of = api_direction_any_of_create(
    );
  } else {
    api_direction_any_of = api_direction_any_of_create(
    );
  }

  return api_direction_any_of;
}


#ifdef api_direction_any_of_MAIN

void test_api_direction_any_of(int include_optional) {
    api_direction_any_of_t* api_direction_any_of_1 = instantiate_api_direction_any_of(include_optional);

	cJSON* jsonapi_direction_any_of_1 = api_direction_any_of_convertToJSON(api_direction_any_of_1);
	printf("api_direction_any_of :\n%s\n", cJSON_Print(jsonapi_direction_any_of_1));
	api_direction_any_of_t* api_direction_any_of_2 = api_direction_any_of_parseFromJSON(jsonapi_direction_any_of_1);
	cJSON* jsonapi_direction_any_of_2 = api_direction_any_of_convertToJSON(api_direction_any_of_2);
	printf("repeating api_direction_any_of:\n%s\n", cJSON_Print(jsonapi_direction_any_of_2));
}

int main() {
  test_api_direction_any_of(1);
  test_api_direction_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_direction_any_of_MAIN
#endif // api_direction_any_of_TEST
