#ifndef reply_path_requested_any_of_TEST
#define reply_path_requested_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reply_path_requested_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reply_path_requested_any_of.h"
reply_path_requested_any_of_t* instantiate_reply_path_requested_any_of(int include_optional);



reply_path_requested_any_of_t* instantiate_reply_path_requested_any_of(int include_optional) {
  reply_path_requested_any_of_t* reply_path_requested_any_of = NULL;
  if (include_optional) {
    reply_path_requested_any_of = reply_path_requested_any_of_create(
    );
  } else {
    reply_path_requested_any_of = reply_path_requested_any_of_create(
    );
  }

  return reply_path_requested_any_of;
}


#ifdef reply_path_requested_any_of_MAIN

void test_reply_path_requested_any_of(int include_optional) {
    reply_path_requested_any_of_t* reply_path_requested_any_of_1 = instantiate_reply_path_requested_any_of(include_optional);

	cJSON* jsonreply_path_requested_any_of_1 = reply_path_requested_any_of_convertToJSON(reply_path_requested_any_of_1);
	printf("reply_path_requested_any_of :\n%s\n", cJSON_Print(jsonreply_path_requested_any_of_1));
	reply_path_requested_any_of_t* reply_path_requested_any_of_2 = reply_path_requested_any_of_parseFromJSON(jsonreply_path_requested_any_of_1);
	cJSON* jsonreply_path_requested_any_of_2 = reply_path_requested_any_of_convertToJSON(reply_path_requested_any_of_2);
	printf("repeating reply_path_requested_any_of:\n%s\n", cJSON_Print(jsonreply_path_requested_any_of_2));
}

int main() {
  test_reply_path_requested_any_of(1);
  test_reply_path_requested_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // reply_path_requested_any_of_MAIN
#endif // reply_path_requested_any_of_TEST
