#ifndef final_unit_indication_TEST
#define final_unit_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define final_unit_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/final_unit_indication.h"
final_unit_indication_t* instantiate_final_unit_indication(int include_optional);

#include "test_final_unit_action.c"
#include "test_redirect_server.c"


final_unit_indication_t* instantiate_final_unit_indication(int include_optional) {
  final_unit_indication_t* final_unit_indication = NULL;
  if (include_optional) {
    final_unit_indication = final_unit_indication_create(
      null,
      "0",
      list_createList(),
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_redirect_server(0)
    );
  } else {
    final_unit_indication = final_unit_indication_create(
      null,
      "0",
      list_createList(),
      "0",
      list_createList(),
      NULL
    );
  }

  return final_unit_indication;
}


#ifdef final_unit_indication_MAIN

void test_final_unit_indication(int include_optional) {
    final_unit_indication_t* final_unit_indication_1 = instantiate_final_unit_indication(include_optional);

	cJSON* jsonfinal_unit_indication_1 = final_unit_indication_convertToJSON(final_unit_indication_1);
	printf("final_unit_indication :\n%s\n", cJSON_Print(jsonfinal_unit_indication_1));
	final_unit_indication_t* final_unit_indication_2 = final_unit_indication_parseFromJSON(jsonfinal_unit_indication_1);
	cJSON* jsonfinal_unit_indication_2 = final_unit_indication_convertToJSON(final_unit_indication_2);
	printf("repeating final_unit_indication:\n%s\n", cJSON_Print(jsonfinal_unit_indication_2));
}

int main() {
  test_final_unit_indication(1);
  test_final_unit_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // final_unit_indication_MAIN
#endif // final_unit_indication_TEST
