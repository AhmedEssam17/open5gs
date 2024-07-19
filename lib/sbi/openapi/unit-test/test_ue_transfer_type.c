#ifndef ue_transfer_type_TEST
#define ue_transfer_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_transfer_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_transfer_type.h"
ue_transfer_type_t* instantiate_ue_transfer_type(int include_optional);



ue_transfer_type_t* instantiate_ue_transfer_type(int include_optional) {
  ue_transfer_type_t* ue_transfer_type = NULL;
  if (include_optional) {
    ue_transfer_type = ue_transfer_type_create(
    );
  } else {
    ue_transfer_type = ue_transfer_type_create(
    );
  }

  return ue_transfer_type;
}


#ifdef ue_transfer_type_MAIN

void test_ue_transfer_type(int include_optional) {
    ue_transfer_type_t* ue_transfer_type_1 = instantiate_ue_transfer_type(include_optional);

	cJSON* jsonue_transfer_type_1 = ue_transfer_type_convertToJSON(ue_transfer_type_1);
	printf("ue_transfer_type :\n%s\n", cJSON_Print(jsonue_transfer_type_1));
	ue_transfer_type_t* ue_transfer_type_2 = ue_transfer_type_parseFromJSON(jsonue_transfer_type_1);
	cJSON* jsonue_transfer_type_2 = ue_transfer_type_convertToJSON(ue_transfer_type_2);
	printf("repeating ue_transfer_type:\n%s\n", cJSON_Print(jsonue_transfer_type_2));
}

int main() {
  test_ue_transfer_type(1);
  test_ue_transfer_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_transfer_type_MAIN
#endif // ue_transfer_type_TEST
