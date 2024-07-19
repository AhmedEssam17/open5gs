#ifndef mapdu_session_information_TEST
#define mapdu_session_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mapdu_session_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mapdu_session_information.h"
mapdu_session_information_t* instantiate_mapdu_session_information(int include_optional);

#include "test_atsss_capability.c"


mapdu_session_information_t* instantiate_mapdu_session_information(int include_optional) {
  mapdu_session_information_t* mapdu_session_information = NULL;
  if (include_optional) {
    mapdu_session_information = mapdu_session_information_create(
      nchf_convergedcharging_mapdu_session_information__MA_PDU_REQUEST,
       // false, not to have infinite recursion
      instantiate_atsss_capability(0)
    );
  } else {
    mapdu_session_information = mapdu_session_information_create(
      nchf_convergedcharging_mapdu_session_information__MA_PDU_REQUEST,
      NULL
    );
  }

  return mapdu_session_information;
}


#ifdef mapdu_session_information_MAIN

void test_mapdu_session_information(int include_optional) {
    mapdu_session_information_t* mapdu_session_information_1 = instantiate_mapdu_session_information(include_optional);

	cJSON* jsonmapdu_session_information_1 = mapdu_session_information_convertToJSON(mapdu_session_information_1);
	printf("mapdu_session_information :\n%s\n", cJSON_Print(jsonmapdu_session_information_1));
	mapdu_session_information_t* mapdu_session_information_2 = mapdu_session_information_parseFromJSON(jsonmapdu_session_information_1);
	cJSON* jsonmapdu_session_information_2 = mapdu_session_information_convertToJSON(mapdu_session_information_2);
	printf("repeating mapdu_session_information:\n%s\n", cJSON_Print(jsonmapdu_session_information_2));
}

int main() {
  test_mapdu_session_information(1);
  test_mapdu_session_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // mapdu_session_information_MAIN
#endif // mapdu_session_information_TEST
