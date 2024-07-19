#ifndef edge_infrastructure_usage_charging_information_TEST
#define edge_infrastructure_usage_charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define edge_infrastructure_usage_charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/edge_infrastructure_usage_charging_information.h"
edge_infrastructure_usage_charging_information_t* instantiate_edge_infrastructure_usage_charging_information(int include_optional);



edge_infrastructure_usage_charging_information_t* instantiate_edge_infrastructure_usage_charging_information(int include_optional) {
  edge_infrastructure_usage_charging_information_t* edge_infrastructure_usage_charging_information = NULL;
  if (include_optional) {
    edge_infrastructure_usage_charging_information = edge_infrastructure_usage_charging_information_create(
      1.337,
      1.337,
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    edge_infrastructure_usage_charging_information = edge_infrastructure_usage_charging_information_create(
      1.337,
      1.337,
      1.337,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return edge_infrastructure_usage_charging_information;
}


#ifdef edge_infrastructure_usage_charging_information_MAIN

void test_edge_infrastructure_usage_charging_information(int include_optional) {
    edge_infrastructure_usage_charging_information_t* edge_infrastructure_usage_charging_information_1 = instantiate_edge_infrastructure_usage_charging_information(include_optional);

	cJSON* jsonedge_infrastructure_usage_charging_information_1 = edge_infrastructure_usage_charging_information_convertToJSON(edge_infrastructure_usage_charging_information_1);
	printf("edge_infrastructure_usage_charging_information :\n%s\n", cJSON_Print(jsonedge_infrastructure_usage_charging_information_1));
	edge_infrastructure_usage_charging_information_t* edge_infrastructure_usage_charging_information_2 = edge_infrastructure_usage_charging_information_parseFromJSON(jsonedge_infrastructure_usage_charging_information_1);
	cJSON* jsonedge_infrastructure_usage_charging_information_2 = edge_infrastructure_usage_charging_information_convertToJSON(edge_infrastructure_usage_charging_information_2);
	printf("repeating edge_infrastructure_usage_charging_information:\n%s\n", cJSON_Print(jsonedge_infrastructure_usage_charging_information_2));
}

int main() {
  test_edge_infrastructure_usage_charging_information(1);
  test_edge_infrastructure_usage_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // edge_infrastructure_usage_charging_information_MAIN
#endif // edge_infrastructure_usage_charging_information_TEST
