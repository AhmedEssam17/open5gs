#ifndef radio_parameter_set_info_TEST
#define radio_parameter_set_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define radio_parameter_set_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/radio_parameter_set_info.h"
radio_parameter_set_info_t* instantiate_radio_parameter_set_info(int include_optional);



radio_parameter_set_info_t* instantiate_radio_parameter_set_info(int include_optional) {
  radio_parameter_set_info_t* radio_parameter_set_info = NULL;
  if (include_optional) {
    radio_parameter_set_info = radio_parameter_set_info_create(
      list_createList(),
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    radio_parameter_set_info = radio_parameter_set_info_create(
      list_createList(),
      "2013-10-20T19:20:30+01:00"
    );
  }

  return radio_parameter_set_info;
}


#ifdef radio_parameter_set_info_MAIN

void test_radio_parameter_set_info(int include_optional) {
    radio_parameter_set_info_t* radio_parameter_set_info_1 = instantiate_radio_parameter_set_info(include_optional);

	cJSON* jsonradio_parameter_set_info_1 = radio_parameter_set_info_convertToJSON(radio_parameter_set_info_1);
	printf("radio_parameter_set_info :\n%s\n", cJSON_Print(jsonradio_parameter_set_info_1));
	radio_parameter_set_info_t* radio_parameter_set_info_2 = radio_parameter_set_info_parseFromJSON(jsonradio_parameter_set_info_1);
	cJSON* jsonradio_parameter_set_info_2 = radio_parameter_set_info_convertToJSON(radio_parameter_set_info_2);
	printf("repeating radio_parameter_set_info:\n%s\n", cJSON_Print(jsonradio_parameter_set_info_2));
}

int main() {
  test_radio_parameter_set_info(1);
  test_radio_parameter_set_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // radio_parameter_set_info_MAIN
#endif // radio_parameter_set_info_TEST
