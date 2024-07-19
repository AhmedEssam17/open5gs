#ifndef tad_identifier_any_of_TEST
#define tad_identifier_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tad_identifier_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tad_identifier_any_of.h"
tad_identifier_any_of_t* instantiate_tad_identifier_any_of(int include_optional);



tad_identifier_any_of_t* instantiate_tad_identifier_any_of(int include_optional) {
  tad_identifier_any_of_t* tad_identifier_any_of = NULL;
  if (include_optional) {
    tad_identifier_any_of = tad_identifier_any_of_create(
    );
  } else {
    tad_identifier_any_of = tad_identifier_any_of_create(
    );
  }

  return tad_identifier_any_of;
}


#ifdef tad_identifier_any_of_MAIN

void test_tad_identifier_any_of(int include_optional) {
    tad_identifier_any_of_t* tad_identifier_any_of_1 = instantiate_tad_identifier_any_of(include_optional);

	cJSON* jsontad_identifier_any_of_1 = tad_identifier_any_of_convertToJSON(tad_identifier_any_of_1);
	printf("tad_identifier_any_of :\n%s\n", cJSON_Print(jsontad_identifier_any_of_1));
	tad_identifier_any_of_t* tad_identifier_any_of_2 = tad_identifier_any_of_parseFromJSON(jsontad_identifier_any_of_1);
	cJSON* jsontad_identifier_any_of_2 = tad_identifier_any_of_convertToJSON(tad_identifier_any_of_2);
	printf("repeating tad_identifier_any_of:\n%s\n", cJSON_Print(jsontad_identifier_any_of_2));
}

int main() {
  test_tad_identifier_any_of(1);
  test_tad_identifier_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // tad_identifier_any_of_MAIN
#endif // tad_identifier_any_of_TEST
