#ifndef prose_functionality_any_of_TEST
#define prose_functionality_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_functionality_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_functionality_any_of.h"
prose_functionality_any_of_t* instantiate_prose_functionality_any_of(int include_optional);



prose_functionality_any_of_t* instantiate_prose_functionality_any_of(int include_optional) {
  prose_functionality_any_of_t* prose_functionality_any_of = NULL;
  if (include_optional) {
    prose_functionality_any_of = prose_functionality_any_of_create(
    );
  } else {
    prose_functionality_any_of = prose_functionality_any_of_create(
    );
  }

  return prose_functionality_any_of;
}


#ifdef prose_functionality_any_of_MAIN

void test_prose_functionality_any_of(int include_optional) {
    prose_functionality_any_of_t* prose_functionality_any_of_1 = instantiate_prose_functionality_any_of(include_optional);

	cJSON* jsonprose_functionality_any_of_1 = prose_functionality_any_of_convertToJSON(prose_functionality_any_of_1);
	printf("prose_functionality_any_of :\n%s\n", cJSON_Print(jsonprose_functionality_any_of_1));
	prose_functionality_any_of_t* prose_functionality_any_of_2 = prose_functionality_any_of_parseFromJSON(jsonprose_functionality_any_of_1);
	cJSON* jsonprose_functionality_any_of_2 = prose_functionality_any_of_convertToJSON(prose_functionality_any_of_2);
	printf("repeating prose_functionality_any_of:\n%s\n", cJSON_Print(jsonprose_functionality_any_of_2));
}

int main() {
  test_prose_functionality_any_of(1);
  test_prose_functionality_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_functionality_any_of_MAIN
#endif // prose_functionality_any_of_TEST
