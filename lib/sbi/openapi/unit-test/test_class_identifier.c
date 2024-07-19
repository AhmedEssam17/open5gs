#ifndef class_identifier_TEST
#define class_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define class_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/class_identifier.h"
class_identifier_t* instantiate_class_identifier(int include_optional);



class_identifier_t* instantiate_class_identifier(int include_optional) {
  class_identifier_t* class_identifier = NULL;
  if (include_optional) {
    class_identifier = class_identifier_create(
    );
  } else {
    class_identifier = class_identifier_create(
    );
  }

  return class_identifier;
}


#ifdef class_identifier_MAIN

void test_class_identifier(int include_optional) {
    class_identifier_t* class_identifier_1 = instantiate_class_identifier(include_optional);

	cJSON* jsonclass_identifier_1 = class_identifier_convertToJSON(class_identifier_1);
	printf("class_identifier :\n%s\n", cJSON_Print(jsonclass_identifier_1));
	class_identifier_t* class_identifier_2 = class_identifier_parseFromJSON(jsonclass_identifier_1);
	cJSON* jsonclass_identifier_2 = class_identifier_convertToJSON(class_identifier_2);
	printf("repeating class_identifier:\n%s\n", cJSON_Print(jsonclass_identifier_2));
}

int main() {
  test_class_identifier(1);
  test_class_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // class_identifier_MAIN
#endif // class_identifier_TEST
