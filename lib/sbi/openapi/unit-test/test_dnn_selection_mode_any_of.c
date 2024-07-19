#ifndef dnn_selection_mode_any_of_TEST
#define dnn_selection_mode_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_selection_mode_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_selection_mode_any_of.h"
dnn_selection_mode_any_of_t* instantiate_dnn_selection_mode_any_of(int include_optional);



dnn_selection_mode_any_of_t* instantiate_dnn_selection_mode_any_of(int include_optional) {
  dnn_selection_mode_any_of_t* dnn_selection_mode_any_of = NULL;
  if (include_optional) {
    dnn_selection_mode_any_of = dnn_selection_mode_any_of_create(
    );
  } else {
    dnn_selection_mode_any_of = dnn_selection_mode_any_of_create(
    );
  }

  return dnn_selection_mode_any_of;
}


#ifdef dnn_selection_mode_any_of_MAIN

void test_dnn_selection_mode_any_of(int include_optional) {
    dnn_selection_mode_any_of_t* dnn_selection_mode_any_of_1 = instantiate_dnn_selection_mode_any_of(include_optional);

	cJSON* jsondnn_selection_mode_any_of_1 = dnn_selection_mode_any_of_convertToJSON(dnn_selection_mode_any_of_1);
	printf("dnn_selection_mode_any_of :\n%s\n", cJSON_Print(jsondnn_selection_mode_any_of_1));
	dnn_selection_mode_any_of_t* dnn_selection_mode_any_of_2 = dnn_selection_mode_any_of_parseFromJSON(jsondnn_selection_mode_any_of_1);
	cJSON* jsondnn_selection_mode_any_of_2 = dnn_selection_mode_any_of_convertToJSON(dnn_selection_mode_any_of_2);
	printf("repeating dnn_selection_mode_any_of:\n%s\n", cJSON_Print(jsondnn_selection_mode_any_of_2));
}

int main() {
  test_dnn_selection_mode_any_of(1);
  test_dnn_selection_mode_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_selection_mode_any_of_MAIN
#endif // dnn_selection_mode_any_of_TEST
