#ifndef reply_path_requested_TEST
#define reply_path_requested_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reply_path_requested_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reply_path_requested.h"
reply_path_requested_t* instantiate_reply_path_requested(int include_optional);



reply_path_requested_t* instantiate_reply_path_requested(int include_optional) {
  reply_path_requested_t* reply_path_requested = NULL;
  if (include_optional) {
    reply_path_requested = reply_path_requested_create(
    );
  } else {
    reply_path_requested = reply_path_requested_create(
    );
  }

  return reply_path_requested;
}


#ifdef reply_path_requested_MAIN

void test_reply_path_requested(int include_optional) {
    reply_path_requested_t* reply_path_requested_1 = instantiate_reply_path_requested(include_optional);

	cJSON* jsonreply_path_requested_1 = reply_path_requested_convertToJSON(reply_path_requested_1);
	printf("reply_path_requested :\n%s\n", cJSON_Print(jsonreply_path_requested_1));
	reply_path_requested_t* reply_path_requested_2 = reply_path_requested_parseFromJSON(jsonreply_path_requested_1);
	cJSON* jsonreply_path_requested_2 = reply_path_requested_convertToJSON(reply_path_requested_2);
	printf("repeating reply_path_requested:\n%s\n", cJSON_Print(jsonreply_path_requested_2));
}

int main() {
  test_reply_path_requested(1);
  test_reply_path_requested(0);

  printf("Hello world \n");
  return 0;
}

#endif // reply_path_requested_MAIN
#endif // reply_path_requested_TEST
