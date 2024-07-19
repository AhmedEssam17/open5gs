#ifndef atsss_capability_TEST
#define atsss_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define atsss_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/atsss_capability.h"
atsss_capability_t* instantiate_atsss_capability(int include_optional);



atsss_capability_t* instantiate_atsss_capability(int include_optional) {
  atsss_capability_t* atsss_capability = NULL;
  if (include_optional) {
    atsss_capability = atsss_capability_create(
      1,
      1,
      1
    );
  } else {
    atsss_capability = atsss_capability_create(
      1,
      1,
      1
    );
  }

  return atsss_capability;
}


#ifdef atsss_capability_MAIN

void test_atsss_capability(int include_optional) {
    atsss_capability_t* atsss_capability_1 = instantiate_atsss_capability(include_optional);

	cJSON* jsonatsss_capability_1 = atsss_capability_convertToJSON(atsss_capability_1);
	printf("atsss_capability :\n%s\n", cJSON_Print(jsonatsss_capability_1));
	atsss_capability_t* atsss_capability_2 = atsss_capability_parseFromJSON(jsonatsss_capability_1);
	cJSON* jsonatsss_capability_2 = atsss_capability_convertToJSON(atsss_capability_2);
	printf("repeating atsss_capability:\n%s\n", cJSON_Print(jsonatsss_capability_2));
}

int main() {
  test_atsss_capability(1);
  test_atsss_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // atsss_capability_MAIN
#endif // atsss_capability_TEST
