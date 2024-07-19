#ifndef originator_party_type_TEST
#define originator_party_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define originator_party_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/originator_party_type.h"
originator_party_type_t* instantiate_originator_party_type(int include_optional);



originator_party_type_t* instantiate_originator_party_type(int include_optional) {
  originator_party_type_t* originator_party_type = NULL;
  if (include_optional) {
    originator_party_type = originator_party_type_create(
    );
  } else {
    originator_party_type = originator_party_type_create(
    );
  }

  return originator_party_type;
}


#ifdef originator_party_type_MAIN

void test_originator_party_type(int include_optional) {
    originator_party_type_t* originator_party_type_1 = instantiate_originator_party_type(include_optional);

	cJSON* jsonoriginator_party_type_1 = originator_party_type_convertToJSON(originator_party_type_1);
	printf("originator_party_type :\n%s\n", cJSON_Print(jsonoriginator_party_type_1));
	originator_party_type_t* originator_party_type_2 = originator_party_type_parseFromJSON(jsonoriginator_party_type_1);
	cJSON* jsonoriginator_party_type_2 = originator_party_type_convertToJSON(originator_party_type_2);
	printf("repeating originator_party_type:\n%s\n", cJSON_Print(jsonoriginator_party_type_2));
}

int main() {
  test_originator_party_type(1);
  test_originator_party_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // originator_party_type_MAIN
#endif // originator_party_type_TEST
