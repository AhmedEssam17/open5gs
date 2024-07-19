#ifndef access_type_rm_TEST
#define access_type_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_type_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_type_rm.h"
access_type_rm_t* instantiate_access_type_rm(int include_optional);



access_type_rm_t* instantiate_access_type_rm(int include_optional) {
  access_type_rm_t* access_type_rm = NULL;
  if (include_optional) {
    access_type_rm = access_type_rm_create(
    );
  } else {
    access_type_rm = access_type_rm_create(
    );
  }

  return access_type_rm;
}


#ifdef access_type_rm_MAIN

void test_access_type_rm(int include_optional) {
    access_type_rm_t* access_type_rm_1 = instantiate_access_type_rm(include_optional);

	cJSON* jsonaccess_type_rm_1 = access_type_rm_convertToJSON(access_type_rm_1);
	printf("access_type_rm :\n%s\n", cJSON_Print(jsonaccess_type_rm_1));
	access_type_rm_t* access_type_rm_2 = access_type_rm_parseFromJSON(jsonaccess_type_rm_1);
	cJSON* jsonaccess_type_rm_2 = access_type_rm_convertToJSON(access_type_rm_2);
	printf("repeating access_type_rm:\n%s\n", cJSON_Print(jsonaccess_type_rm_2));
}

int main() {
  test_access_type_rm(1);
  test_access_type_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_type_rm_MAIN
#endif // access_type_rm_TEST
