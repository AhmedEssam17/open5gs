#ifndef charging_characteristics_selection_mode_any_of_TEST
#define charging_characteristics_selection_mode_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_characteristics_selection_mode_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_characteristics_selection_mode_any_of.h"
charging_characteristics_selection_mode_any_of_t* instantiate_charging_characteristics_selection_mode_any_of(int include_optional);



charging_characteristics_selection_mode_any_of_t* instantiate_charging_characteristics_selection_mode_any_of(int include_optional) {
  charging_characteristics_selection_mode_any_of_t* charging_characteristics_selection_mode_any_of = NULL;
  if (include_optional) {
    charging_characteristics_selection_mode_any_of = charging_characteristics_selection_mode_any_of_create(
    );
  } else {
    charging_characteristics_selection_mode_any_of = charging_characteristics_selection_mode_any_of_create(
    );
  }

  return charging_characteristics_selection_mode_any_of;
}


#ifdef charging_characteristics_selection_mode_any_of_MAIN

void test_charging_characteristics_selection_mode_any_of(int include_optional) {
    charging_characteristics_selection_mode_any_of_t* charging_characteristics_selection_mode_any_of_1 = instantiate_charging_characteristics_selection_mode_any_of(include_optional);

	cJSON* jsoncharging_characteristics_selection_mode_any_of_1 = charging_characteristics_selection_mode_any_of_convertToJSON(charging_characteristics_selection_mode_any_of_1);
	printf("charging_characteristics_selection_mode_any_of :\n%s\n", cJSON_Print(jsoncharging_characteristics_selection_mode_any_of_1));
	charging_characteristics_selection_mode_any_of_t* charging_characteristics_selection_mode_any_of_2 = charging_characteristics_selection_mode_any_of_parseFromJSON(jsoncharging_characteristics_selection_mode_any_of_1);
	cJSON* jsoncharging_characteristics_selection_mode_any_of_2 = charging_characteristics_selection_mode_any_of_convertToJSON(charging_characteristics_selection_mode_any_of_2);
	printf("repeating charging_characteristics_selection_mode_any_of:\n%s\n", cJSON_Print(jsoncharging_characteristics_selection_mode_any_of_2));
}

int main() {
  test_charging_characteristics_selection_mode_any_of(1);
  test_charging_characteristics_selection_mode_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_characteristics_selection_mode_any_of_MAIN
#endif // charging_characteristics_selection_mode_any_of_TEST
