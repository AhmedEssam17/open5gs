#ifndef inter_operator_identifier_TEST
#define inter_operator_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inter_operator_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inter_operator_identifier.h"
inter_operator_identifier_t* instantiate_inter_operator_identifier(int include_optional);



inter_operator_identifier_t* instantiate_inter_operator_identifier(int include_optional) {
  inter_operator_identifier_t* inter_operator_identifier = NULL;
  if (include_optional) {
    inter_operator_identifier = inter_operator_identifier_create(
      "0",
      "0"
    );
  } else {
    inter_operator_identifier = inter_operator_identifier_create(
      "0",
      "0"
    );
  }

  return inter_operator_identifier;
}


#ifdef inter_operator_identifier_MAIN

void test_inter_operator_identifier(int include_optional) {
    inter_operator_identifier_t* inter_operator_identifier_1 = instantiate_inter_operator_identifier(include_optional);

	cJSON* jsoninter_operator_identifier_1 = inter_operator_identifier_convertToJSON(inter_operator_identifier_1);
	printf("inter_operator_identifier :\n%s\n", cJSON_Print(jsoninter_operator_identifier_1));
	inter_operator_identifier_t* inter_operator_identifier_2 = inter_operator_identifier_parseFromJSON(jsoninter_operator_identifier_1);
	cJSON* jsoninter_operator_identifier_2 = inter_operator_identifier_convertToJSON(inter_operator_identifier_2);
	printf("repeating inter_operator_identifier:\n%s\n", cJSON_Print(jsoninter_operator_identifier_2));
}

int main() {
  test_inter_operator_identifier(1);
  test_inter_operator_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // inter_operator_identifier_MAIN
#endif // inter_operator_identifier_TEST
