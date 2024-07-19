#ifndef qos_monitoring_report_TEST
#define qos_monitoring_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_monitoring_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_monitoring_report.h"
qos_monitoring_report_t* instantiate_qos_monitoring_report(int include_optional);



qos_monitoring_report_t* instantiate_qos_monitoring_report(int include_optional) {
  qos_monitoring_report_t* qos_monitoring_report = NULL;
  if (include_optional) {
    qos_monitoring_report = qos_monitoring_report_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    qos_monitoring_report = qos_monitoring_report_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return qos_monitoring_report;
}


#ifdef qos_monitoring_report_MAIN

void test_qos_monitoring_report(int include_optional) {
    qos_monitoring_report_t* qos_monitoring_report_1 = instantiate_qos_monitoring_report(include_optional);

	cJSON* jsonqos_monitoring_report_1 = qos_monitoring_report_convertToJSON(qos_monitoring_report_1);
	printf("qos_monitoring_report :\n%s\n", cJSON_Print(jsonqos_monitoring_report_1));
	qos_monitoring_report_t* qos_monitoring_report_2 = qos_monitoring_report_parseFromJSON(jsonqos_monitoring_report_1);
	cJSON* jsonqos_monitoring_report_2 = qos_monitoring_report_convertToJSON(qos_monitoring_report_2);
	printf("repeating qos_monitoring_report:\n%s\n", cJSON_Print(jsonqos_monitoring_report_2));
}

int main() {
  test_qos_monitoring_report(1);
  test_qos_monitoring_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_monitoring_report_MAIN
#endif // qos_monitoring_report_TEST
