#ifndef quota_consumption_indicator_TEST
#define quota_consumption_indicator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quota_consumption_indicator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quota_consumption_indicator.h"
quota_consumption_indicator_t* instantiate_quota_consumption_indicator(int include_optional);



quota_consumption_indicator_t* instantiate_quota_consumption_indicator(int include_optional) {
  quota_consumption_indicator_t* quota_consumption_indicator = NULL;
  if (include_optional) {
    quota_consumption_indicator = quota_consumption_indicator_create(
    );
  } else {
    quota_consumption_indicator = quota_consumption_indicator_create(
    );
  }

  return quota_consumption_indicator;
}


#ifdef quota_consumption_indicator_MAIN

void test_quota_consumption_indicator(int include_optional) {
    quota_consumption_indicator_t* quota_consumption_indicator_1 = instantiate_quota_consumption_indicator(include_optional);

	cJSON* jsonquota_consumption_indicator_1 = quota_consumption_indicator_convertToJSON(quota_consumption_indicator_1);
	printf("quota_consumption_indicator :\n%s\n", cJSON_Print(jsonquota_consumption_indicator_1));
	quota_consumption_indicator_t* quota_consumption_indicator_2 = quota_consumption_indicator_parseFromJSON(jsonquota_consumption_indicator_1);
	cJSON* jsonquota_consumption_indicator_2 = quota_consumption_indicator_convertToJSON(quota_consumption_indicator_2);
	printf("repeating quota_consumption_indicator:\n%s\n", cJSON_Print(jsonquota_consumption_indicator_2));
}

int main() {
  test_quota_consumption_indicator(1);
  test_quota_consumption_indicator(0);

  printf("Hello world \n");
  return 0;
}

#endif // quota_consumption_indicator_MAIN
#endif // quota_consumption_indicator_TEST
