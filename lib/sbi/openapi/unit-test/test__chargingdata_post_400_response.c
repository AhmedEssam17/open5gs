#ifndef _chargingdata_post_400_response_TEST
#define _chargingdata_post_400_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _chargingdata_post_400_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_chargingdata_post_400_response.h"
_chargingdata_post_400_response_t* instantiate__chargingdata_post_400_response(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"
#include "test_invocation_result.c"


_chargingdata_post_400_response_t* instantiate__chargingdata_post_400_response(int include_optional) {
  _chargingdata_post_400_response_t* _chargingdata_post_400_response = NULL;
  if (include_optional) {
    _chargingdata_post_400_response = _chargingdata_post_400_response_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_access_token_err(0),
       // false, not to have infinite recursion
      instantiate_access_token_req(0),
      "a",
       // false, not to have infinite recursion
      instantiate_invocation_result(0)
    );
  } else {
    _chargingdata_post_400_response = _chargingdata_post_400_response_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
      NULL,
      NULL,
      "a",
      NULL
    );
  }

  return _chargingdata_post_400_response;
}


#ifdef _chargingdata_post_400_response_MAIN

void test__chargingdata_post_400_response(int include_optional) {
    _chargingdata_post_400_response_t* _chargingdata_post_400_response_1 = instantiate__chargingdata_post_400_response(include_optional);

	cJSON* json_chargingdata_post_400_response_1 = _chargingdata_post_400_response_convertToJSON(_chargingdata_post_400_response_1);
	printf("_chargingdata_post_400_response :\n%s\n", cJSON_Print(json_chargingdata_post_400_response_1));
	_chargingdata_post_400_response_t* _chargingdata_post_400_response_2 = _chargingdata_post_400_response_parseFromJSON(json_chargingdata_post_400_response_1);
	cJSON* json_chargingdata_post_400_response_2 = _chargingdata_post_400_response_convertToJSON(_chargingdata_post_400_response_2);
	printf("repeating _chargingdata_post_400_response:\n%s\n", cJSON_Print(json_chargingdata_post_400_response_2));
}

int main() {
  test__chargingdata_post_400_response(1);
  test__chargingdata_post_400_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // _chargingdata_post_400_response_MAIN
#endif // _chargingdata_post_400_response_TEST
