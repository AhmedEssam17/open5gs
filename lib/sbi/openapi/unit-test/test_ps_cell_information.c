#ifndef ps_cell_information_TEST
#define ps_cell_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ps_cell_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ps_cell_information.h"
ps_cell_information_t* instantiate_ps_cell_information(int include_optional);

#include "test_ncgi.c"
#include "test_ecgi.c"


ps_cell_information_t* instantiate_ps_cell_information(int include_optional) {
  ps_cell_information_t* ps_cell_information = NULL;
  if (include_optional) {
    ps_cell_information = ps_cell_information_create(
       // false, not to have infinite recursion
      instantiate_ncgi(0),
       // false, not to have infinite recursion
      instantiate_ecgi(0)
    );
  } else {
    ps_cell_information = ps_cell_information_create(
      NULL,
      NULL
    );
  }

  return ps_cell_information;
}


#ifdef ps_cell_information_MAIN

void test_ps_cell_information(int include_optional) {
    ps_cell_information_t* ps_cell_information_1 = instantiate_ps_cell_information(include_optional);

	cJSON* jsonps_cell_information_1 = ps_cell_information_convertToJSON(ps_cell_information_1);
	printf("ps_cell_information :\n%s\n", cJSON_Print(jsonps_cell_information_1));
	ps_cell_information_t* ps_cell_information_2 = ps_cell_information_parseFromJSON(jsonps_cell_information_1);
	cJSON* jsonps_cell_information_2 = ps_cell_information_convertToJSON(ps_cell_information_2);
	printf("repeating ps_cell_information:\n%s\n", cJSON_Print(jsonps_cell_information_2));
}

int main() {
  test_ps_cell_information(1);
  test_ps_cell_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // ps_cell_information_MAIN
#endif // ps_cell_information_TEST
