#ifndef ims_node_functionality_TEST
#define ims_node_functionality_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ims_node_functionality_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ims_node_functionality.h"
ims_node_functionality_t* instantiate_ims_node_functionality(int include_optional);



ims_node_functionality_t* instantiate_ims_node_functionality(int include_optional) {
  ims_node_functionality_t* ims_node_functionality = NULL;
  if (include_optional) {
    ims_node_functionality = ims_node_functionality_create(
    );
  } else {
    ims_node_functionality = ims_node_functionality_create(
    );
  }

  return ims_node_functionality;
}


#ifdef ims_node_functionality_MAIN

void test_ims_node_functionality(int include_optional) {
    ims_node_functionality_t* ims_node_functionality_1 = instantiate_ims_node_functionality(include_optional);

	cJSON* jsonims_node_functionality_1 = ims_node_functionality_convertToJSON(ims_node_functionality_1);
	printf("ims_node_functionality :\n%s\n", cJSON_Print(jsonims_node_functionality_1));
	ims_node_functionality_t* ims_node_functionality_2 = ims_node_functionality_parseFromJSON(jsonims_node_functionality_1);
	cJSON* jsonims_node_functionality_2 = ims_node_functionality_convertToJSON(ims_node_functionality_2);
	printf("repeating ims_node_functionality:\n%s\n", cJSON_Print(jsonims_node_functionality_2));
}

int main() {
  test_ims_node_functionality(1);
  test_ims_node_functionality(0);

  printf("Hello world \n");
  return 0;
}

#endif // ims_node_functionality_MAIN
#endif // ims_node_functionality_TEST
