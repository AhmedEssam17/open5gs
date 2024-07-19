#ifndef radio_resources_id_TEST
#define radio_resources_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define radio_resources_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/radio_resources_id.h"
radio_resources_id_t* instantiate_radio_resources_id(int include_optional);



radio_resources_id_t* instantiate_radio_resources_id(int include_optional) {
  radio_resources_id_t* radio_resources_id = NULL;
  if (include_optional) {
    radio_resources_id = radio_resources_id_create(
    );
  } else {
    radio_resources_id = radio_resources_id_create(
    );
  }

  return radio_resources_id;
}


#ifdef radio_resources_id_MAIN

void test_radio_resources_id(int include_optional) {
    radio_resources_id_t* radio_resources_id_1 = instantiate_radio_resources_id(include_optional);

	cJSON* jsonradio_resources_id_1 = radio_resources_id_convertToJSON(radio_resources_id_1);
	printf("radio_resources_id :\n%s\n", cJSON_Print(jsonradio_resources_id_1));
	radio_resources_id_t* radio_resources_id_2 = radio_resources_id_parseFromJSON(jsonradio_resources_id_1);
	cJSON* jsonradio_resources_id_2 = radio_resources_id_convertToJSON(radio_resources_id_2);
	printf("repeating radio_resources_id:\n%s\n", cJSON_Print(jsonradio_resources_id_2));
}

int main() {
  test_radio_resources_id(1);
  test_radio_resources_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // radio_resources_id_MAIN
#endif // radio_resources_id_TEST
