#ifndef sms_indication_any_of_TEST
#define sms_indication_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_indication_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_indication_any_of.h"
sms_indication_any_of_t* instantiate_sms_indication_any_of(int include_optional);



sms_indication_any_of_t* instantiate_sms_indication_any_of(int include_optional) {
  sms_indication_any_of_t* sms_indication_any_of = NULL;
  if (include_optional) {
    sms_indication_any_of = sms_indication_any_of_create(
    );
  } else {
    sms_indication_any_of = sms_indication_any_of_create(
    );
  }

  return sms_indication_any_of;
}


#ifdef sms_indication_any_of_MAIN

void test_sms_indication_any_of(int include_optional) {
    sms_indication_any_of_t* sms_indication_any_of_1 = instantiate_sms_indication_any_of(include_optional);

	cJSON* jsonsms_indication_any_of_1 = sms_indication_any_of_convertToJSON(sms_indication_any_of_1);
	printf("sms_indication_any_of :\n%s\n", cJSON_Print(jsonsms_indication_any_of_1));
	sms_indication_any_of_t* sms_indication_any_of_2 = sms_indication_any_of_parseFromJSON(jsonsms_indication_any_of_1);
	cJSON* jsonsms_indication_any_of_2 = sms_indication_any_of_convertToJSON(sms_indication_any_of_2);
	printf("repeating sms_indication_any_of:\n%s\n", cJSON_Print(jsonsms_indication_any_of_2));
}

int main() {
  test_sms_indication_any_of(1);
  test_sms_indication_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_indication_any_of_MAIN
#endif // sms_indication_any_of_TEST
