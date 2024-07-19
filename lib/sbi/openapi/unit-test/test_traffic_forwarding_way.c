#ifndef traffic_forwarding_way_TEST
#define traffic_forwarding_way_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_forwarding_way_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_forwarding_way.h"
traffic_forwarding_way_t* instantiate_traffic_forwarding_way(int include_optional);



traffic_forwarding_way_t* instantiate_traffic_forwarding_way(int include_optional) {
  traffic_forwarding_way_t* traffic_forwarding_way = NULL;
  if (include_optional) {
    traffic_forwarding_way = traffic_forwarding_way_create(
    );
  } else {
    traffic_forwarding_way = traffic_forwarding_way_create(
    );
  }

  return traffic_forwarding_way;
}


#ifdef traffic_forwarding_way_MAIN

void test_traffic_forwarding_way(int include_optional) {
    traffic_forwarding_way_t* traffic_forwarding_way_1 = instantiate_traffic_forwarding_way(include_optional);

	cJSON* jsontraffic_forwarding_way_1 = traffic_forwarding_way_convertToJSON(traffic_forwarding_way_1);
	printf("traffic_forwarding_way :\n%s\n", cJSON_Print(jsontraffic_forwarding_way_1));
	traffic_forwarding_way_t* traffic_forwarding_way_2 = traffic_forwarding_way_parseFromJSON(jsontraffic_forwarding_way_1);
	cJSON* jsontraffic_forwarding_way_2 = traffic_forwarding_way_convertToJSON(traffic_forwarding_way_2);
	printf("repeating traffic_forwarding_way:\n%s\n", cJSON_Print(jsontraffic_forwarding_way_2));
}

int main() {
  test_traffic_forwarding_way(1);
  test_traffic_forwarding_way(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_forwarding_way_MAIN
#endif // traffic_forwarding_way_TEST
