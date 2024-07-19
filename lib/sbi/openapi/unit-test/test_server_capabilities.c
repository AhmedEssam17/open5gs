#ifndef server_capabilities_TEST
#define server_capabilities_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_capabilities_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_capabilities.h"
server_capabilities_t* instantiate_server_capabilities(int include_optional);



server_capabilities_t* instantiate_server_capabilities(int include_optional) {
  server_capabilities_t* server_capabilities = NULL;
  if (include_optional) {
    server_capabilities = server_capabilities_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    server_capabilities = server_capabilities_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return server_capabilities;
}


#ifdef server_capabilities_MAIN

void test_server_capabilities(int include_optional) {
    server_capabilities_t* server_capabilities_1 = instantiate_server_capabilities(include_optional);

	cJSON* jsonserver_capabilities_1 = server_capabilities_convertToJSON(server_capabilities_1);
	printf("server_capabilities :\n%s\n", cJSON_Print(jsonserver_capabilities_1));
	server_capabilities_t* server_capabilities_2 = server_capabilities_parseFromJSON(jsonserver_capabilities_1);
	cJSON* jsonserver_capabilities_2 = server_capabilities_convertToJSON(server_capabilities_2);
	printf("repeating server_capabilities:\n%s\n", cJSON_Print(jsonserver_capabilities_2));
}

int main() {
  test_server_capabilities(1);
  test_server_capabilities(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_capabilities_MAIN
#endif // server_capabilities_TEST
