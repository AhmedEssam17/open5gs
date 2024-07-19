#ifndef called_identity_change_TEST
#define called_identity_change_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define called_identity_change_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/called_identity_change.h"
called_identity_change_t* instantiate_called_identity_change(int include_optional);



called_identity_change_t* instantiate_called_identity_change(int include_optional) {
  called_identity_change_t* called_identity_change = NULL;
  if (include_optional) {
    called_identity_change = called_identity_change_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    called_identity_change = called_identity_change_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return called_identity_change;
}


#ifdef called_identity_change_MAIN

void test_called_identity_change(int include_optional) {
    called_identity_change_t* called_identity_change_1 = instantiate_called_identity_change(include_optional);

	cJSON* jsoncalled_identity_change_1 = called_identity_change_convertToJSON(called_identity_change_1);
	printf("called_identity_change :\n%s\n", cJSON_Print(jsoncalled_identity_change_1));
	called_identity_change_t* called_identity_change_2 = called_identity_change_parseFromJSON(jsoncalled_identity_change_1);
	cJSON* jsoncalled_identity_change_2 = called_identity_change_convertToJSON(called_identity_change_2);
	printf("repeating called_identity_change:\n%s\n", cJSON_Print(jsoncalled_identity_change_2));
}

int main() {
  test_called_identity_change(1);
  test_called_identity_change(0);

  printf("Hello world \n");
  return 0;
}

#endif // called_identity_change_MAIN
#endif // called_identity_change_TEST
