#ifndef ran_secondary_rat_usage_report_TEST
#define ran_secondary_rat_usage_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ran_secondary_rat_usage_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ran_secondary_rat_usage_report.h"
ran_secondary_rat_usage_report_t* instantiate_ran_secondary_rat_usage_report(int include_optional);



ran_secondary_rat_usage_report_t* instantiate_ran_secondary_rat_usage_report(int include_optional) {
  ran_secondary_rat_usage_report_t* ran_secondary_rat_usage_report = NULL;
  if (include_optional) {
    ran_secondary_rat_usage_report = ran_secondary_rat_usage_report_create(
      nchf_convergedcharging_ran_secondary_rat_usage_report__NR,
      list_createList()
    );
  } else {
    ran_secondary_rat_usage_report = ran_secondary_rat_usage_report_create(
      nchf_convergedcharging_ran_secondary_rat_usage_report__NR,
      list_createList()
    );
  }

  return ran_secondary_rat_usage_report;
}


#ifdef ran_secondary_rat_usage_report_MAIN

void test_ran_secondary_rat_usage_report(int include_optional) {
    ran_secondary_rat_usage_report_t* ran_secondary_rat_usage_report_1 = instantiate_ran_secondary_rat_usage_report(include_optional);

	cJSON* jsonran_secondary_rat_usage_report_1 = ran_secondary_rat_usage_report_convertToJSON(ran_secondary_rat_usage_report_1);
	printf("ran_secondary_rat_usage_report :\n%s\n", cJSON_Print(jsonran_secondary_rat_usage_report_1));
	ran_secondary_rat_usage_report_t* ran_secondary_rat_usage_report_2 = ran_secondary_rat_usage_report_parseFromJSON(jsonran_secondary_rat_usage_report_1);
	cJSON* jsonran_secondary_rat_usage_report_2 = ran_secondary_rat_usage_report_convertToJSON(ran_secondary_rat_usage_report_2);
	printf("repeating ran_secondary_rat_usage_report:\n%s\n", cJSON_Print(jsonran_secondary_rat_usage_report_2));
}

int main() {
  test_ran_secondary_rat_usage_report(1);
  test_ran_secondary_rat_usage_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // ran_secondary_rat_usage_report_MAIN
#endif // ran_secondary_rat_usage_report_TEST
