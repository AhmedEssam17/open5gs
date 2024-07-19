#ifndef model_5_glan_type_service_TEST
#define model_5_glan_type_service_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_5_glan_type_service_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_5_glan_type_service.h"
model_5_glan_type_service_t* instantiate_model_5_glan_type_service(int include_optional);



model_5_glan_type_service_t* instantiate_model_5_glan_type_service(int include_optional) {
  model_5_glan_type_service_t* model_5_glan_type_service = NULL;
  if (include_optional) {
    model_5_glan_type_service = model_5_glan_type_service_create(
      "a"
    );
  } else {
    model_5_glan_type_service = model_5_glan_type_service_create(
      "a"
    );
  }

  return model_5_glan_type_service;
}


#ifdef model_5_glan_type_service_MAIN

void test_model_5_glan_type_service(int include_optional) {
    model_5_glan_type_service_t* model_5_glan_type_service_1 = instantiate_model_5_glan_type_service(include_optional);

	cJSON* jsonmodel_5_glan_type_service_1 = model_5_glan_type_service_convertToJSON(model_5_glan_type_service_1);
	printf("model_5_glan_type_service :\n%s\n", cJSON_Print(jsonmodel_5_glan_type_service_1));
	model_5_glan_type_service_t* model_5_glan_type_service_2 = model_5_glan_type_service_parseFromJSON(jsonmodel_5_glan_type_service_1);
	cJSON* jsonmodel_5_glan_type_service_2 = model_5_glan_type_service_convertToJSON(model_5_glan_type_service_2);
	printf("repeating model_5_glan_type_service:\n%s\n", cJSON_Print(jsonmodel_5_glan_type_service_2));
}

int main() {
  test_model_5_glan_type_service(1);
  test_model_5_glan_type_service(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_5_glan_type_service_MAIN
#endif // model_5_glan_type_service_TEST
