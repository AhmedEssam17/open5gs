#ifndef session_failover_TEST
#define session_failover_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define session_failover_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/session_failover.h"
session_failover_t* instantiate_session_failover(int include_optional);



session_failover_t* instantiate_session_failover(int include_optional) {
  session_failover_t* session_failover = NULL;
  if (include_optional) {
    session_failover = session_failover_create(
    );
  } else {
    session_failover = session_failover_create(
    );
  }

  return session_failover;
}


#ifdef session_failover_MAIN

void test_session_failover(int include_optional) {
    session_failover_t* session_failover_1 = instantiate_session_failover(include_optional);

	cJSON* jsonsession_failover_1 = session_failover_convertToJSON(session_failover_1);
	printf("session_failover :\n%s\n", cJSON_Print(jsonsession_failover_1));
	session_failover_t* session_failover_2 = session_failover_parseFromJSON(jsonsession_failover_1);
	cJSON* jsonsession_failover_2 = session_failover_convertToJSON(session_failover_2);
	printf("repeating session_failover:\n%s\n", cJSON_Print(jsonsession_failover_2));
}

int main() {
  test_session_failover(1);
  test_session_failover(0);

  printf("Hello world \n");
  return 0;
}

#endif // session_failover_MAIN
#endif // session_failover_TEST
