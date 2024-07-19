#ifndef ma_pdu_indication_TEST
#define ma_pdu_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ma_pdu_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ma_pdu_indication.h"
ma_pdu_indication_t* instantiate_ma_pdu_indication(int include_optional);



ma_pdu_indication_t* instantiate_ma_pdu_indication(int include_optional) {
  ma_pdu_indication_t* ma_pdu_indication = NULL;
  if (include_optional) {
    ma_pdu_indication = ma_pdu_indication_create(
    );
  } else {
    ma_pdu_indication = ma_pdu_indication_create(
    );
  }

  return ma_pdu_indication;
}


#ifdef ma_pdu_indication_MAIN

void test_ma_pdu_indication(int include_optional) {
    ma_pdu_indication_t* ma_pdu_indication_1 = instantiate_ma_pdu_indication(include_optional);

	cJSON* jsonma_pdu_indication_1 = ma_pdu_indication_convertToJSON(ma_pdu_indication_1);
	printf("ma_pdu_indication :\n%s\n", cJSON_Print(jsonma_pdu_indication_1));
	ma_pdu_indication_t* ma_pdu_indication_2 = ma_pdu_indication_parseFromJSON(jsonma_pdu_indication_1);
	cJSON* jsonma_pdu_indication_2 = ma_pdu_indication_convertToJSON(ma_pdu_indication_2);
	printf("repeating ma_pdu_indication:\n%s\n", cJSON_Print(jsonma_pdu_indication_2));
}

int main() {
  test_ma_pdu_indication(1);
  test_ma_pdu_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // ma_pdu_indication_MAIN
#endif // ma_pdu_indication_TEST
