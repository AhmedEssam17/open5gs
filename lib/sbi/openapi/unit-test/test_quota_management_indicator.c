#ifndef quota_management_indicator_TEST
#define quota_management_indicator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quota_management_indicator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quota_management_indicator.h"
quota_management_indicator_t* instantiate_quota_management_indicator(int include_optional);



quota_management_indicator_t* instantiate_quota_management_indicator(int include_optional) {
  quota_management_indicator_t* quota_management_indicator = NULL;
  if (include_optional) {
    quota_management_indicator = quota_management_indicator_create(
    );
  } else {
    quota_management_indicator = quota_management_indicator_create(
    );
  }

  return quota_management_indicator;
}


#ifdef quota_management_indicator_MAIN

void test_quota_management_indicator(int include_optional) {
    quota_management_indicator_t* quota_management_indicator_1 = instantiate_quota_management_indicator(include_optional);

	cJSON* jsonquota_management_indicator_1 = quota_management_indicator_convertToJSON(quota_management_indicator_1);
	printf("quota_management_indicator :\n%s\n", cJSON_Print(jsonquota_management_indicator_1));
	quota_management_indicator_t* quota_management_indicator_2 = quota_management_indicator_parseFromJSON(jsonquota_management_indicator_1);
	cJSON* jsonquota_management_indicator_2 = quota_management_indicator_convertToJSON(quota_management_indicator_2);
	printf("repeating quota_management_indicator:\n%s\n", cJSON_Print(jsonquota_management_indicator_2));
}

int main() {
  test_quota_management_indicator(1);
  test_quota_management_indicator(0);

  printf("Hello world \n");
  return 0;
}

#endif // quota_management_indicator_MAIN
#endif // quota_management_indicator_TEST
