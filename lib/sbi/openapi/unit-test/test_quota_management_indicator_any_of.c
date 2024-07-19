#ifndef quota_management_indicator_any_of_TEST
#define quota_management_indicator_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quota_management_indicator_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quota_management_indicator_any_of.h"
quota_management_indicator_any_of_t* instantiate_quota_management_indicator_any_of(int include_optional);



quota_management_indicator_any_of_t* instantiate_quota_management_indicator_any_of(int include_optional) {
  quota_management_indicator_any_of_t* quota_management_indicator_any_of = NULL;
  if (include_optional) {
    quota_management_indicator_any_of = quota_management_indicator_any_of_create(
    );
  } else {
    quota_management_indicator_any_of = quota_management_indicator_any_of_create(
    );
  }

  return quota_management_indicator_any_of;
}


#ifdef quota_management_indicator_any_of_MAIN

void test_quota_management_indicator_any_of(int include_optional) {
    quota_management_indicator_any_of_t* quota_management_indicator_any_of_1 = instantiate_quota_management_indicator_any_of(include_optional);

	cJSON* jsonquota_management_indicator_any_of_1 = quota_management_indicator_any_of_convertToJSON(quota_management_indicator_any_of_1);
	printf("quota_management_indicator_any_of :\n%s\n", cJSON_Print(jsonquota_management_indicator_any_of_1));
	quota_management_indicator_any_of_t* quota_management_indicator_any_of_2 = quota_management_indicator_any_of_parseFromJSON(jsonquota_management_indicator_any_of_1);
	cJSON* jsonquota_management_indicator_any_of_2 = quota_management_indicator_any_of_convertToJSON(quota_management_indicator_any_of_2);
	printf("repeating quota_management_indicator_any_of:\n%s\n", cJSON_Print(jsonquota_management_indicator_any_of_2));
}

int main() {
  test_quota_management_indicator_any_of(1);
  test_quota_management_indicator_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // quota_management_indicator_any_of_MAIN
#endif // quota_management_indicator_any_of_TEST
