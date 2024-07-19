#ifndef api_direction_TEST
#define api_direction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_direction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_direction.h"
api_direction_t* instantiate_api_direction(int include_optional);



api_direction_t* instantiate_api_direction(int include_optional) {
  api_direction_t* api_direction = NULL;
  if (include_optional) {
    api_direction = api_direction_create(
    );
  } else {
    api_direction = api_direction_create(
    );
  }

  return api_direction;
}


#ifdef api_direction_MAIN

void test_api_direction(int include_optional) {
    api_direction_t* api_direction_1 = instantiate_api_direction(include_optional);

	cJSON* jsonapi_direction_1 = api_direction_convertToJSON(api_direction_1);
	printf("api_direction :\n%s\n", cJSON_Print(jsonapi_direction_1));
	api_direction_t* api_direction_2 = api_direction_parseFromJSON(jsonapi_direction_1);
	cJSON* jsonapi_direction_2 = api_direction_convertToJSON(api_direction_2);
	printf("repeating api_direction:\n%s\n", cJSON_Print(jsonapi_direction_2));
}

int main() {
  test_api_direction(1);
  test_api_direction(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_direction_MAIN
#endif // api_direction_TEST
