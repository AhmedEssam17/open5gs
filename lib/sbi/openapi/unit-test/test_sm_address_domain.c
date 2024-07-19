#ifndef sm_address_domain_TEST
#define sm_address_domain_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_address_domain_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_address_domain.h"
sm_address_domain_t* instantiate_sm_address_domain(int include_optional);



sm_address_domain_t* instantiate_sm_address_domain(int include_optional) {
  sm_address_domain_t* sm_address_domain = NULL;
  if (include_optional) {
    sm_address_domain = sm_address_domain_create(
      "0",
      "0"
    );
  } else {
    sm_address_domain = sm_address_domain_create(
      "0",
      "0"
    );
  }

  return sm_address_domain;
}


#ifdef sm_address_domain_MAIN

void test_sm_address_domain(int include_optional) {
    sm_address_domain_t* sm_address_domain_1 = instantiate_sm_address_domain(include_optional);

	cJSON* jsonsm_address_domain_1 = sm_address_domain_convertToJSON(sm_address_domain_1);
	printf("sm_address_domain :\n%s\n", cJSON_Print(jsonsm_address_domain_1));
	sm_address_domain_t* sm_address_domain_2 = sm_address_domain_parseFromJSON(jsonsm_address_domain_1);
	cJSON* jsonsm_address_domain_2 = sm_address_domain_convertToJSON(sm_address_domain_2);
	printf("repeating sm_address_domain:\n%s\n", cJSON_Print(jsonsm_address_domain_2));
}

int main() {
  test_sm_address_domain(1);
  test_sm_address_domain(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_address_domain_MAIN
#endif // sm_address_domain_TEST
