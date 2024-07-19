#ifndef multiple_qf_icontainer_TEST
#define multiple_qf_icontainer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multiple_qf_icontainer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multiple_qf_icontainer.h"
multiple_qf_icontainer_t* instantiate_multiple_qf_icontainer(int include_optional);

#include "test_qfi_container_information.c"


multiple_qf_icontainer_t* instantiate_multiple_qf_icontainer(int include_optional) {
  multiple_qf_icontainer_t* multiple_qf_icontainer = NULL;
  if (include_optional) {
    multiple_qf_icontainer = multiple_qf_icontainer_create(
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      0,
      56,
       // false, not to have infinite recursion
      instantiate_qfi_container_information(0)
    );
  } else {
    multiple_qf_icontainer = multiple_qf_icontainer_create(
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      0,
      56,
      NULL
    );
  }

  return multiple_qf_icontainer;
}


#ifdef multiple_qf_icontainer_MAIN

void test_multiple_qf_icontainer(int include_optional) {
    multiple_qf_icontainer_t* multiple_qf_icontainer_1 = instantiate_multiple_qf_icontainer(include_optional);

	cJSON* jsonmultiple_qf_icontainer_1 = multiple_qf_icontainer_convertToJSON(multiple_qf_icontainer_1);
	printf("multiple_qf_icontainer :\n%s\n", cJSON_Print(jsonmultiple_qf_icontainer_1));
	multiple_qf_icontainer_t* multiple_qf_icontainer_2 = multiple_qf_icontainer_parseFromJSON(jsonmultiple_qf_icontainer_1);
	cJSON* jsonmultiple_qf_icontainer_2 = multiple_qf_icontainer_convertToJSON(multiple_qf_icontainer_2);
	printf("repeating multiple_qf_icontainer:\n%s\n", cJSON_Print(jsonmultiple_qf_icontainer_2));
}

int main() {
  test_multiple_qf_icontainer(1);
  test_multiple_qf_icontainer(0);

  printf("Hello world \n");
  return 0;
}

#endif // multiple_qf_icontainer_MAIN
#endif // multiple_qf_icontainer_TEST
