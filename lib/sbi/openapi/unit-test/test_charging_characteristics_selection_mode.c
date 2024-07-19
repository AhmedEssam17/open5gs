#ifndef charging_characteristics_selection_mode_TEST
#define charging_characteristics_selection_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_characteristics_selection_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_characteristics_selection_mode.h"
charging_characteristics_selection_mode_t* instantiate_charging_characteristics_selection_mode(int include_optional);



charging_characteristics_selection_mode_t* instantiate_charging_characteristics_selection_mode(int include_optional) {
  charging_characteristics_selection_mode_t* charging_characteristics_selection_mode = NULL;
  if (include_optional) {
    charging_characteristics_selection_mode = charging_characteristics_selection_mode_create(
    );
  } else {
    charging_characteristics_selection_mode = charging_characteristics_selection_mode_create(
    );
  }

  return charging_characteristics_selection_mode;
}


#ifdef charging_characteristics_selection_mode_MAIN

void test_charging_characteristics_selection_mode(int include_optional) {
    charging_characteristics_selection_mode_t* charging_characteristics_selection_mode_1 = instantiate_charging_characteristics_selection_mode(include_optional);

	cJSON* jsoncharging_characteristics_selection_mode_1 = charging_characteristics_selection_mode_convertToJSON(charging_characteristics_selection_mode_1);
	printf("charging_characteristics_selection_mode :\n%s\n", cJSON_Print(jsoncharging_characteristics_selection_mode_1));
	charging_characteristics_selection_mode_t* charging_characteristics_selection_mode_2 = charging_characteristics_selection_mode_parseFromJSON(jsoncharging_characteristics_selection_mode_1);
	cJSON* jsoncharging_characteristics_selection_mode_2 = charging_characteristics_selection_mode_convertToJSON(charging_characteristics_selection_mode_2);
	printf("repeating charging_characteristics_selection_mode:\n%s\n", cJSON_Print(jsoncharging_characteristics_selection_mode_2));
}

int main() {
  test_charging_characteristics_selection_mode(1);
  test_charging_characteristics_selection_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_characteristics_selection_mode_MAIN
#endif // charging_characteristics_selection_mode_TEST
