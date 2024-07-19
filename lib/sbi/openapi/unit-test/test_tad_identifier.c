#ifndef tad_identifier_TEST
#define tad_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tad_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tad_identifier.h"
tad_identifier_t* instantiate_tad_identifier(int include_optional);



tad_identifier_t* instantiate_tad_identifier(int include_optional) {
  tad_identifier_t* tad_identifier = NULL;
  if (include_optional) {
    tad_identifier = tad_identifier_create(
    );
  } else {
    tad_identifier = tad_identifier_create(
    );
  }

  return tad_identifier;
}


#ifdef tad_identifier_MAIN

void test_tad_identifier(int include_optional) {
    tad_identifier_t* tad_identifier_1 = instantiate_tad_identifier(include_optional);

	cJSON* jsontad_identifier_1 = tad_identifier_convertToJSON(tad_identifier_1);
	printf("tad_identifier :\n%s\n", cJSON_Print(jsontad_identifier_1));
	tad_identifier_t* tad_identifier_2 = tad_identifier_parseFromJSON(jsontad_identifier_1);
	cJSON* jsontad_identifier_2 = tad_identifier_convertToJSON(tad_identifier_2);
	printf("repeating tad_identifier:\n%s\n", cJSON_Print(jsontad_identifier_2));
}

int main() {
  test_tad_identifier(1);
  test_tad_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // tad_identifier_MAIN
#endif // tad_identifier_TEST
