#ifndef radio_resources_id_any_of_TEST
#define radio_resources_id_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define radio_resources_id_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/radio_resources_id_any_of.h"
radio_resources_id_any_of_t* instantiate_radio_resources_id_any_of(int include_optional);



radio_resources_id_any_of_t* instantiate_radio_resources_id_any_of(int include_optional) {
  radio_resources_id_any_of_t* radio_resources_id_any_of = NULL;
  if (include_optional) {
    radio_resources_id_any_of = radio_resources_id_any_of_create(
    );
  } else {
    radio_resources_id_any_of = radio_resources_id_any_of_create(
    );
  }

  return radio_resources_id_any_of;
}


#ifdef radio_resources_id_any_of_MAIN

void test_radio_resources_id_any_of(int include_optional) {
    radio_resources_id_any_of_t* radio_resources_id_any_of_1 = instantiate_radio_resources_id_any_of(include_optional);

	cJSON* jsonradio_resources_id_any_of_1 = radio_resources_id_any_of_convertToJSON(radio_resources_id_any_of_1);
	printf("radio_resources_id_any_of :\n%s\n", cJSON_Print(jsonradio_resources_id_any_of_1));
	radio_resources_id_any_of_t* radio_resources_id_any_of_2 = radio_resources_id_any_of_parseFromJSON(jsonradio_resources_id_any_of_1);
	cJSON* jsonradio_resources_id_any_of_2 = radio_resources_id_any_of_convertToJSON(radio_resources_id_any_of_2);
	printf("repeating radio_resources_id_any_of:\n%s\n", cJSON_Print(jsonradio_resources_id_any_of_2));
}

int main() {
  test_radio_resources_id_any_of(1);
  test_radio_resources_id_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // radio_resources_id_any_of_MAIN
#endif // radio_resources_id_any_of_TEST
