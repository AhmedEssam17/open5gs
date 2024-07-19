#ifndef prose_functionality_TEST
#define prose_functionality_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_functionality_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_functionality.h"
prose_functionality_t* instantiate_prose_functionality(int include_optional);



prose_functionality_t* instantiate_prose_functionality(int include_optional) {
  prose_functionality_t* prose_functionality = NULL;
  if (include_optional) {
    prose_functionality = prose_functionality_create(
    );
  } else {
    prose_functionality = prose_functionality_create(
    );
  }

  return prose_functionality;
}


#ifdef prose_functionality_MAIN

void test_prose_functionality(int include_optional) {
    prose_functionality_t* prose_functionality_1 = instantiate_prose_functionality(include_optional);

	cJSON* jsonprose_functionality_1 = prose_functionality_convertToJSON(prose_functionality_1);
	printf("prose_functionality :\n%s\n", cJSON_Print(jsonprose_functionality_1));
	prose_functionality_t* prose_functionality_2 = prose_functionality_parseFromJSON(jsonprose_functionality_1);
	cJSON* jsonprose_functionality_2 = prose_functionality_convertToJSON(prose_functionality_2);
	printf("repeating prose_functionality:\n%s\n", cJSON_Print(jsonprose_functionality_2));
}

int main() {
  test_prose_functionality(1);
  test_prose_functionality(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_functionality_MAIN
#endif // prose_functionality_TEST
