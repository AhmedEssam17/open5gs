#ifndef redirect_address_type_TEST
#define redirect_address_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redirect_address_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redirect_address_type.h"
redirect_address_type_t* instantiate_redirect_address_type(int include_optional);



redirect_address_type_t* instantiate_redirect_address_type(int include_optional) {
  redirect_address_type_t* redirect_address_type = NULL;
  if (include_optional) {
    redirect_address_type = redirect_address_type_create(
    );
  } else {
    redirect_address_type = redirect_address_type_create(
    );
  }

  return redirect_address_type;
}


#ifdef redirect_address_type_MAIN

void test_redirect_address_type(int include_optional) {
    redirect_address_type_t* redirect_address_type_1 = instantiate_redirect_address_type(include_optional);

	cJSON* jsonredirect_address_type_1 = redirect_address_type_convertToJSON(redirect_address_type_1);
	printf("redirect_address_type :\n%s\n", cJSON_Print(jsonredirect_address_type_1));
	redirect_address_type_t* redirect_address_type_2 = redirect_address_type_parseFromJSON(jsonredirect_address_type_1);
	cJSON* jsonredirect_address_type_2 = redirect_address_type_convertToJSON(redirect_address_type_2);
	printf("repeating redirect_address_type:\n%s\n", cJSON_Print(jsonredirect_address_type_2));
}

int main() {
  test_redirect_address_type(1);
  test_redirect_address_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // redirect_address_type_MAIN
#endif // redirect_address_type_TEST
