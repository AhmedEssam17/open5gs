#ifndef throughput_TEST
#define throughput_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define throughput_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/throughput.h"
throughput_t* instantiate_throughput(int include_optional);



throughput_t* instantiate_throughput(int include_optional) {
  throughput_t* throughput = NULL;
  if (include_optional) {
    throughput = throughput_create(
      1.337,
      1.337
    );
  } else {
    throughput = throughput_create(
      1.337,
      1.337
    );
  }

  return throughput;
}


#ifdef throughput_MAIN

void test_throughput(int include_optional) {
    throughput_t* throughput_1 = instantiate_throughput(include_optional);

	cJSON* jsonthroughput_1 = throughput_convertToJSON(throughput_1);
	printf("throughput :\n%s\n", cJSON_Print(jsonthroughput_1));
	throughput_t* throughput_2 = throughput_parseFromJSON(jsonthroughput_1);
	cJSON* jsonthroughput_2 = throughput_convertToJSON(throughput_2);
	printf("repeating throughput:\n%s\n", cJSON_Print(jsonthroughput_2));
}

int main() {
  test_throughput(1);
  test_throughput(0);

  printf("Hello world \n");
  return 0;
}

#endif // throughput_MAIN
#endif // throughput_TEST
