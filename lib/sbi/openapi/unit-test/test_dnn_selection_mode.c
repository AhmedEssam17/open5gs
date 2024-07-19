#ifndef dnn_selection_mode_TEST
#define dnn_selection_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_selection_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_selection_mode.h"
dnn_selection_mode_t* instantiate_dnn_selection_mode(int include_optional);



dnn_selection_mode_t* instantiate_dnn_selection_mode(int include_optional) {
  dnn_selection_mode_t* dnn_selection_mode = NULL;
  if (include_optional) {
    dnn_selection_mode = dnn_selection_mode_create(
    );
  } else {
    dnn_selection_mode = dnn_selection_mode_create(
    );
  }

  return dnn_selection_mode;
}


#ifdef dnn_selection_mode_MAIN

void test_dnn_selection_mode(int include_optional) {
    dnn_selection_mode_t* dnn_selection_mode_1 = instantiate_dnn_selection_mode(include_optional);

	cJSON* jsondnn_selection_mode_1 = dnn_selection_mode_convertToJSON(dnn_selection_mode_1);
	printf("dnn_selection_mode :\n%s\n", cJSON_Print(jsondnn_selection_mode_1));
	dnn_selection_mode_t* dnn_selection_mode_2 = dnn_selection_mode_parseFromJSON(jsondnn_selection_mode_1);
	cJSON* jsondnn_selection_mode_2 = dnn_selection_mode_convertToJSON(dnn_selection_mode_2);
	printf("repeating dnn_selection_mode:\n%s\n", cJSON_Print(jsondnn_selection_mode_2));
}

int main() {
  test_dnn_selection_mode(1);
  test_dnn_selection_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_selection_mode_MAIN
#endif // dnn_selection_mode_TEST
