#ifndef class_identifier_any_of_TEST
#define class_identifier_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define class_identifier_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/class_identifier_any_of.h"
class_identifier_any_of_t* instantiate_class_identifier_any_of(int include_optional);



class_identifier_any_of_t* instantiate_class_identifier_any_of(int include_optional) {
  class_identifier_any_of_t* class_identifier_any_of = NULL;
  if (include_optional) {
    class_identifier_any_of = class_identifier_any_of_create(
    );
  } else {
    class_identifier_any_of = class_identifier_any_of_create(
    );
  }

  return class_identifier_any_of;
}


#ifdef class_identifier_any_of_MAIN

void test_class_identifier_any_of(int include_optional) {
    class_identifier_any_of_t* class_identifier_any_of_1 = instantiate_class_identifier_any_of(include_optional);

	cJSON* jsonclass_identifier_any_of_1 = class_identifier_any_of_convertToJSON(class_identifier_any_of_1);
	printf("class_identifier_any_of :\n%s\n", cJSON_Print(jsonclass_identifier_any_of_1));
	class_identifier_any_of_t* class_identifier_any_of_2 = class_identifier_any_of_parseFromJSON(jsonclass_identifier_any_of_1);
	cJSON* jsonclass_identifier_any_of_2 = class_identifier_any_of_convertToJSON(class_identifier_any_of_2);
	printf("repeating class_identifier_any_of:\n%s\n", cJSON_Print(jsonclass_identifier_any_of_2));
}

int main() {
  test_class_identifier_any_of(1);
  test_class_identifier_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // class_identifier_any_of_MAIN
#endif // class_identifier_any_of_TEST
