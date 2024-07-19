#ifndef ims_address_TEST
#define ims_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ims_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ims_address.h"
ims_address_t* instantiate_ims_address(int include_optional);



ims_address_t* instantiate_ims_address(int include_optional) {
  ims_address_t* ims_address = NULL;
  if (include_optional) {
    ims_address = ims_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  } else {
    ims_address = ims_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  }

  return ims_address;
}


#ifdef ims_address_MAIN

void test_ims_address(int include_optional) {
    ims_address_t* ims_address_1 = instantiate_ims_address(include_optional);

	cJSON* jsonims_address_1 = ims_address_convertToJSON(ims_address_1);
	printf("ims_address :\n%s\n", cJSON_Print(jsonims_address_1));
	ims_address_t* ims_address_2 = ims_address_parseFromJSON(jsonims_address_1);
	cJSON* jsonims_address_2 = ims_address_convertToJSON(ims_address_2);
	printf("repeating ims_address:\n%s\n", cJSON_Print(jsonims_address_2));
}

int main() {
  test_ims_address(1);
  test_ims_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // ims_address_MAIN
#endif // ims_address_TEST
