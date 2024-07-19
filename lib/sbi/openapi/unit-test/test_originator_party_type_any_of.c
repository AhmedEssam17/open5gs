#ifndef originator_party_type_any_of_TEST
#define originator_party_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define originator_party_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/originator_party_type_any_of.h"
originator_party_type_any_of_t* instantiate_originator_party_type_any_of(int include_optional);



originator_party_type_any_of_t* instantiate_originator_party_type_any_of(int include_optional) {
  originator_party_type_any_of_t* originator_party_type_any_of = NULL;
  if (include_optional) {
    originator_party_type_any_of = originator_party_type_any_of_create(
    );
  } else {
    originator_party_type_any_of = originator_party_type_any_of_create(
    );
  }

  return originator_party_type_any_of;
}


#ifdef originator_party_type_any_of_MAIN

void test_originator_party_type_any_of(int include_optional) {
    originator_party_type_any_of_t* originator_party_type_any_of_1 = instantiate_originator_party_type_any_of(include_optional);

	cJSON* jsonoriginator_party_type_any_of_1 = originator_party_type_any_of_convertToJSON(originator_party_type_any_of_1);
	printf("originator_party_type_any_of :\n%s\n", cJSON_Print(jsonoriginator_party_type_any_of_1));
	originator_party_type_any_of_t* originator_party_type_any_of_2 = originator_party_type_any_of_parseFromJSON(jsonoriginator_party_type_any_of_1);
	cJSON* jsonoriginator_party_type_any_of_2 = originator_party_type_any_of_convertToJSON(originator_party_type_any_of_2);
	printf("repeating originator_party_type_any_of:\n%s\n", cJSON_Print(jsonoriginator_party_type_any_of_2));
}

int main() {
  test_originator_party_type_any_of(1);
  test_originator_party_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // originator_party_type_any_of_MAIN
#endif // originator_party_type_any_of_TEST
