#ifndef session_failover_any_of_TEST
#define session_failover_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define session_failover_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/session_failover_any_of.h"
session_failover_any_of_t* instantiate_session_failover_any_of(int include_optional);



session_failover_any_of_t* instantiate_session_failover_any_of(int include_optional) {
  session_failover_any_of_t* session_failover_any_of = NULL;
  if (include_optional) {
    session_failover_any_of = session_failover_any_of_create(
    );
  } else {
    session_failover_any_of = session_failover_any_of_create(
    );
  }

  return session_failover_any_of;
}


#ifdef session_failover_any_of_MAIN

void test_session_failover_any_of(int include_optional) {
    session_failover_any_of_t* session_failover_any_of_1 = instantiate_session_failover_any_of(include_optional);

	cJSON* jsonsession_failover_any_of_1 = session_failover_any_of_convertToJSON(session_failover_any_of_1);
	printf("session_failover_any_of :\n%s\n", cJSON_Print(jsonsession_failover_any_of_1));
	session_failover_any_of_t* session_failover_any_of_2 = session_failover_any_of_parseFromJSON(jsonsession_failover_any_of_1);
	cJSON* jsonsession_failover_any_of_2 = session_failover_any_of_convertToJSON(session_failover_any_of_2);
	printf("repeating session_failover_any_of:\n%s\n", cJSON_Print(jsonsession_failover_any_of_2));
}

int main() {
  test_session_failover_any_of(1);
  test_session_failover_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // session_failover_any_of_MAIN
#endif // session_failover_any_of_TEST
