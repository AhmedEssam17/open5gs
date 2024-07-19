#ifndef node_functionality_any_of_TEST
#define node_functionality_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define node_functionality_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/node_functionality_any_of.h"
node_functionality_any_of_t* instantiate_node_functionality_any_of(int include_optional);



node_functionality_any_of_t* instantiate_node_functionality_any_of(int include_optional) {
  node_functionality_any_of_t* node_functionality_any_of = NULL;
  if (include_optional) {
    node_functionality_any_of = node_functionality_any_of_create(
    );
  } else {
    node_functionality_any_of = node_functionality_any_of_create(
    );
  }

  return node_functionality_any_of;
}


#ifdef node_functionality_any_of_MAIN

void test_node_functionality_any_of(int include_optional) {
    node_functionality_any_of_t* node_functionality_any_of_1 = instantiate_node_functionality_any_of(include_optional);

	cJSON* jsonnode_functionality_any_of_1 = node_functionality_any_of_convertToJSON(node_functionality_any_of_1);
	printf("node_functionality_any_of :\n%s\n", cJSON_Print(jsonnode_functionality_any_of_1));
	node_functionality_any_of_t* node_functionality_any_of_2 = node_functionality_any_of_parseFromJSON(jsonnode_functionality_any_of_1);
	cJSON* jsonnode_functionality_any_of_2 = node_functionality_any_of_convertToJSON(node_functionality_any_of_2);
	printf("repeating node_functionality_any_of:\n%s\n", cJSON_Print(jsonnode_functionality_any_of_2));
}

int main() {
  test_node_functionality_any_of(1);
  test_node_functionality_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // node_functionality_any_of_MAIN
#endif // node_functionality_any_of_TEST
