#ifndef sip_event_type_TEST
#define sip_event_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sip_event_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sip_event_type.h"
sip_event_type_t* instantiate_sip_event_type(int include_optional);



sip_event_type_t* instantiate_sip_event_type(int include_optional) {
  sip_event_type_t* sip_event_type = NULL;
  if (include_optional) {
    sip_event_type = sip_event_type_create(
      "0",
      "0",
      0
    );
  } else {
    sip_event_type = sip_event_type_create(
      "0",
      "0",
      0
    );
  }

  return sip_event_type;
}


#ifdef sip_event_type_MAIN

void test_sip_event_type(int include_optional) {
    sip_event_type_t* sip_event_type_1 = instantiate_sip_event_type(include_optional);

	cJSON* jsonsip_event_type_1 = sip_event_type_convertToJSON(sip_event_type_1);
	printf("sip_event_type :\n%s\n", cJSON_Print(jsonsip_event_type_1));
	sip_event_type_t* sip_event_type_2 = sip_event_type_parseFromJSON(jsonsip_event_type_1);
	cJSON* jsonsip_event_type_2 = sip_event_type_convertToJSON(sip_event_type_2);
	printf("repeating sip_event_type:\n%s\n", cJSON_Print(jsonsip_event_type_2));
}

int main() {
  test_sip_event_type(1);
  test_sip_event_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sip_event_type_MAIN
#endif // sip_event_type_TEST
