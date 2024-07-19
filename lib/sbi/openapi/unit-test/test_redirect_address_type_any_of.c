#ifndef redirect_address_type_any_of_TEST
#define redirect_address_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redirect_address_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redirect_address_type_any_of.h"
redirect_address_type_any_of_t* instantiate_redirect_address_type_any_of(int include_optional);



redirect_address_type_any_of_t* instantiate_redirect_address_type_any_of(int include_optional) {
  redirect_address_type_any_of_t* redirect_address_type_any_of = NULL;
  if (include_optional) {
    redirect_address_type_any_of = redirect_address_type_any_of_create(
    );
  } else {
    redirect_address_type_any_of = redirect_address_type_any_of_create(
    );
  }

  return redirect_address_type_any_of;
}


#ifdef redirect_address_type_any_of_MAIN

void test_redirect_address_type_any_of(int include_optional) {
    redirect_address_type_any_of_t* redirect_address_type_any_of_1 = instantiate_redirect_address_type_any_of(include_optional);

	cJSON* jsonredirect_address_type_any_of_1 = redirect_address_type_any_of_convertToJSON(redirect_address_type_any_of_1);
	printf("redirect_address_type_any_of :\n%s\n", cJSON_Print(jsonredirect_address_type_any_of_1));
	redirect_address_type_any_of_t* redirect_address_type_any_of_2 = redirect_address_type_any_of_parseFromJSON(jsonredirect_address_type_any_of_1);
	cJSON* jsonredirect_address_type_any_of_2 = redirect_address_type_any_of_convertToJSON(redirect_address_type_any_of_2);
	printf("repeating redirect_address_type_any_of:\n%s\n", cJSON_Print(jsonredirect_address_type_any_of_2));
}

int main() {
  test_redirect_address_type_any_of(1);
  test_redirect_address_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // redirect_address_type_any_of_MAIN
#endif // redirect_address_type_any_of_TEST
