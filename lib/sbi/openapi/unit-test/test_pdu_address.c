#ifndef pdu_address_TEST
#define pdu_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_address.h"
pdu_address_t* instantiate_pdu_address(int include_optional);



pdu_address_t* instantiate_pdu_address(int include_optional) {
  pdu_address_t* pdu_address = NULL;
  if (include_optional) {
    pdu_address = pdu_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      56,
      1,
      1,
      "2001:db8:abcd:12::0/64",
      list_createList()
    );
  } else {
    pdu_address = pdu_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      56,
      1,
      1,
      "2001:db8:abcd:12::0/64",
      list_createList()
    );
  }

  return pdu_address;
}


#ifdef pdu_address_MAIN

void test_pdu_address(int include_optional) {
    pdu_address_t* pdu_address_1 = instantiate_pdu_address(include_optional);

	cJSON* jsonpdu_address_1 = pdu_address_convertToJSON(pdu_address_1);
	printf("pdu_address :\n%s\n", cJSON_Print(jsonpdu_address_1));
	pdu_address_t* pdu_address_2 = pdu_address_parseFromJSON(jsonpdu_address_1);
	cJSON* jsonpdu_address_2 = pdu_address_convertToJSON(pdu_address_2);
	printf("repeating pdu_address:\n%s\n", cJSON_Print(jsonpdu_address_2));
}

int main() {
  test_pdu_address(1);
  test_pdu_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_address_MAIN
#endif // pdu_address_TEST
