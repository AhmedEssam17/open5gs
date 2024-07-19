#ifndef nspa_container_information_TEST
#define nspa_container_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nspa_container_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nspa_container_information.h"
nspa_container_information_t* instantiate_nspa_container_information(int include_optional);

#include "test_throughput.c"
#include "test_service_experience_info.c"
#include "test_nsi_load_level_info.c"


nspa_container_information_t* instantiate_nspa_container_information(int include_optional) {
  nspa_container_information_t* nspa_container_information = NULL;
  if (include_optional) {
    nspa_container_information = nspa_container_information_create(
      56,
       // false, not to have infinite recursion
      instantiate_throughput(0),
      "0",
       // false, not to have infinite recursion
      instantiate_service_experience_info(0),
      56,
      56,
       // false, not to have infinite recursion
      instantiate_nsi_load_level_info(0)
    );
  } else {
    nspa_container_information = nspa_container_information_create(
      56,
      NULL,
      "0",
      NULL,
      56,
      56,
      NULL
    );
  }

  return nspa_container_information;
}


#ifdef nspa_container_information_MAIN

void test_nspa_container_information(int include_optional) {
    nspa_container_information_t* nspa_container_information_1 = instantiate_nspa_container_information(include_optional);

	cJSON* jsonnspa_container_information_1 = nspa_container_information_convertToJSON(nspa_container_information_1);
	printf("nspa_container_information :\n%s\n", cJSON_Print(jsonnspa_container_information_1));
	nspa_container_information_t* nspa_container_information_2 = nspa_container_information_parseFromJSON(jsonnspa_container_information_1);
	cJSON* jsonnspa_container_information_2 = nspa_container_information_convertToJSON(nspa_container_information_2);
	printf("repeating nspa_container_information:\n%s\n", cJSON_Print(jsonnspa_container_information_2));
}

int main() {
  test_nspa_container_information(1);
  test_nspa_container_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // nspa_container_information_MAIN
#endif // nspa_container_information_TEST
