#ifndef sms_indication_TEST
#define sms_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_indication.h"
sms_indication_t* instantiate_sms_indication(int include_optional);



sms_indication_t* instantiate_sms_indication(int include_optional) {
  sms_indication_t* sms_indication = NULL;
  if (include_optional) {
    sms_indication = sms_indication_create(
    );
  } else {
    sms_indication = sms_indication_create(
    );
  }

  return sms_indication;
}


#ifdef sms_indication_MAIN

void test_sms_indication(int include_optional) {
    sms_indication_t* sms_indication_1 = instantiate_sms_indication(include_optional);

	cJSON* jsonsms_indication_1 = sms_indication_convertToJSON(sms_indication_1);
	printf("sms_indication :\n%s\n", cJSON_Print(jsonsms_indication_1));
	sms_indication_t* sms_indication_2 = sms_indication_parseFromJSON(jsonsms_indication_1);
	cJSON* jsonsms_indication_2 = sms_indication_convertToJSON(sms_indication_2);
	printf("repeating sms_indication:\n%s\n", cJSON_Print(jsonsms_indication_2));
}

int main() {
  test_sms_indication(1);
  test_sms_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_indication_MAIN
#endif // sms_indication_TEST
