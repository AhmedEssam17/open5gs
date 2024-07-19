#ifndef trunk_group_id_TEST
#define trunk_group_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trunk_group_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trunk_group_id.h"
trunk_group_id_t* instantiate_trunk_group_id(int include_optional);



trunk_group_id_t* instantiate_trunk_group_id(int include_optional) {
  trunk_group_id_t* trunk_group_id = NULL;
  if (include_optional) {
    trunk_group_id = trunk_group_id_create(
      "0",
      "0"
    );
  } else {
    trunk_group_id = trunk_group_id_create(
      "0",
      "0"
    );
  }

  return trunk_group_id;
}


#ifdef trunk_group_id_MAIN

void test_trunk_group_id(int include_optional) {
    trunk_group_id_t* trunk_group_id_1 = instantiate_trunk_group_id(include_optional);

	cJSON* jsontrunk_group_id_1 = trunk_group_id_convertToJSON(trunk_group_id_1);
	printf("trunk_group_id :\n%s\n", cJSON_Print(jsontrunk_group_id_1));
	trunk_group_id_t* trunk_group_id_2 = trunk_group_id_parseFromJSON(jsontrunk_group_id_1);
	cJSON* jsontrunk_group_id_2 = trunk_group_id_convertToJSON(trunk_group_id_2);
	printf("repeating trunk_group_id:\n%s\n", cJSON_Print(jsontrunk_group_id_2));
}

int main() {
  test_trunk_group_id(1);
  test_trunk_group_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // trunk_group_id_MAIN
#endif // trunk_group_id_TEST
