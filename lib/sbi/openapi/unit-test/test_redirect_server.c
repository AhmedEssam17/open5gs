#ifndef redirect_server_TEST
#define redirect_server_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redirect_server_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redirect_server.h"
redirect_server_t* instantiate_redirect_server(int include_optional);

#include "test_redirect_address_type.c"


redirect_server_t* instantiate_redirect_server(int include_optional) {
  redirect_server_t* redirect_server = NULL;
  if (include_optional) {
    redirect_server = redirect_server_create(
      null,
      "0"
    );
  } else {
    redirect_server = redirect_server_create(
      null,
      "0"
    );
  }

  return redirect_server;
}


#ifdef redirect_server_MAIN

void test_redirect_server(int include_optional) {
    redirect_server_t* redirect_server_1 = instantiate_redirect_server(include_optional);

	cJSON* jsonredirect_server_1 = redirect_server_convertToJSON(redirect_server_1);
	printf("redirect_server :\n%s\n", cJSON_Print(jsonredirect_server_1));
	redirect_server_t* redirect_server_2 = redirect_server_parseFromJSON(jsonredirect_server_1);
	cJSON* jsonredirect_server_2 = redirect_server_convertToJSON(redirect_server_2);
	printf("repeating redirect_server:\n%s\n", cJSON_Print(jsonredirect_server_2));
}

int main() {
  test_redirect_server(1);
  test_redirect_server(0);

  printf("Hello world \n");
  return 0;
}

#endif // redirect_server_MAIN
#endif // redirect_server_TEST
