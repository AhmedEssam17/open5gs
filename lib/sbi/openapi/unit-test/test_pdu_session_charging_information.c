#ifndef pdu_session_charging_information_TEST
#define pdu_session_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_charging_information.h"
pdu_session_charging_information_t* instantiate_pdu_session_charging_information(int include_optional);

#include "test_user_information.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_pdu_session_information.c"
#include "test_ran_secondary_rat_usage_report.c"


pdu_session_charging_information_t* instantiate_pdu_session_charging_information(int include_optional) {
  pdu_session_charging_information_t* pdu_session_charging_information = NULL;
  if (include_optional) {
    pdu_session_charging_information = pdu_session_charging_information_create(
      0,
      "0",
      0,
      "0",
       // false, not to have infinite recursion
      instantiate_user_information(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_pdu_session_information(0),
      56,
       // false, not to have infinite recursion
      instantiate_ran_secondary_rat_usage_report(0)
    );
  } else {
    pdu_session_charging_information = pdu_session_charging_information_create(
      0,
      "0",
      0,
      "0",
      NULL,
      NULL,
      NULL,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "-08:00+1",
      NULL,
      56,
      NULL
    );
  }

  return pdu_session_charging_information;
}


#ifdef pdu_session_charging_information_MAIN

void test_pdu_session_charging_information(int include_optional) {
    pdu_session_charging_information_t* pdu_session_charging_information_1 = instantiate_pdu_session_charging_information(include_optional);

	cJSON* jsonpdu_session_charging_information_1 = pdu_session_charging_information_convertToJSON(pdu_session_charging_information_1);
	printf("pdu_session_charging_information :\n%s\n", cJSON_Print(jsonpdu_session_charging_information_1));
	pdu_session_charging_information_t* pdu_session_charging_information_2 = pdu_session_charging_information_parseFromJSON(jsonpdu_session_charging_information_1);
	cJSON* jsonpdu_session_charging_information_2 = pdu_session_charging_information_convertToJSON(pdu_session_charging_information_2);
	printf("repeating pdu_session_charging_information:\n%s\n", cJSON_Print(jsonpdu_session_charging_information_2));
}

int main() {
  test_pdu_session_charging_information(1);
  test_pdu_session_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_charging_information_MAIN
#endif // pdu_session_charging_information_TEST
