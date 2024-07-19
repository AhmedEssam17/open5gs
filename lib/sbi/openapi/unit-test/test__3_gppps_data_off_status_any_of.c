#ifndef _3_gppps_data_off_status_any_of_TEST
#define _3_gppps_data_off_status_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _3_gppps_data_off_status_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_3_gppps_data_off_status_any_of.h"
_3_gppps_data_off_status_any_of_t* instantiate__3_gppps_data_off_status_any_of(int include_optional);



_3_gppps_data_off_status_any_of_t* instantiate__3_gppps_data_off_status_any_of(int include_optional) {
  _3_gppps_data_off_status_any_of_t* _3_gppps_data_off_status_any_of = NULL;
  if (include_optional) {
    _3_gppps_data_off_status_any_of = _3_gppps_data_off_status_any_of_create(
    );
  } else {
    _3_gppps_data_off_status_any_of = _3_gppps_data_off_status_any_of_create(
    );
  }

  return _3_gppps_data_off_status_any_of;
}


#ifdef _3_gppps_data_off_status_any_of_MAIN

void test__3_gppps_data_off_status_any_of(int include_optional) {
    _3_gppps_data_off_status_any_of_t* _3_gppps_data_off_status_any_of_1 = instantiate__3_gppps_data_off_status_any_of(include_optional);

	cJSON* json_3_gppps_data_off_status_any_of_1 = _3_gppps_data_off_status_any_of_convertToJSON(_3_gppps_data_off_status_any_of_1);
	printf("_3_gppps_data_off_status_any_of :\n%s\n", cJSON_Print(json_3_gppps_data_off_status_any_of_1));
	_3_gppps_data_off_status_any_of_t* _3_gppps_data_off_status_any_of_2 = _3_gppps_data_off_status_any_of_parseFromJSON(json_3_gppps_data_off_status_any_of_1);
	cJSON* json_3_gppps_data_off_status_any_of_2 = _3_gppps_data_off_status_any_of_convertToJSON(_3_gppps_data_off_status_any_of_2);
	printf("repeating _3_gppps_data_off_status_any_of:\n%s\n", cJSON_Print(json_3_gppps_data_off_status_any_of_2));
}

int main() {
  test__3_gppps_data_off_status_any_of(1);
  test__3_gppps_data_off_status_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // _3_gppps_data_off_status_any_of_MAIN
#endif // _3_gppps_data_off_status_any_of_TEST
