#ifndef node_functionality_TEST
#define node_functionality_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define node_functionality_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/node_functionality.h"
node_functionality_t* instantiate_node_functionality(int include_optional);



node_functionality_t* instantiate_node_functionality(int include_optional) {
  node_functionality_t* node_functionality = NULL;
  if (include_optional) {
    node_functionality = node_functionality_create(
    );
  } else {
    node_functionality = node_functionality_create(
    );
  }

  return node_functionality;
}


#ifdef node_functionality_MAIN

void test_node_functionality(int include_optional) {
    node_functionality_t* node_functionality_1 = instantiate_node_functionality(include_optional);

	cJSON* jsonnode_functionality_1 = node_functionality_convertToJSON(node_functionality_1);
	printf("node_functionality :\n%s\n", cJSON_Print(jsonnode_functionality_1));
	node_functionality_t* node_functionality_2 = node_functionality_parseFromJSON(jsonnode_functionality_1);
	cJSON* jsonnode_functionality_2 = node_functionality_convertToJSON(node_functionality_2);
	printf("repeating node_functionality:\n%s\n", cJSON_Print(jsonnode_functionality_2));
}

int main() {
  test_node_functionality(1);
  test_node_functionality(0);

  printf("Hello world \n");
  return 0;
}

#endif // node_functionality_MAIN
#endif // node_functionality_TEST
