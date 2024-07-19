#ifndef model_3_gppps_data_off_status_TEST
#define model_3_gppps_data_off_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_3_gppps_data_off_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_3_gppps_data_off_status.h"
model_3_gppps_data_off_status_t* instantiate_model_3_gppps_data_off_status(int include_optional);



model_3_gppps_data_off_status_t* instantiate_model_3_gppps_data_off_status(int include_optional) {
  model_3_gppps_data_off_status_t* model_3_gppps_data_off_status = NULL;
  if (include_optional) {
    model_3_gppps_data_off_status = model_3_gppps_data_off_status_create(
    );
  } else {
    model_3_gppps_data_off_status = model_3_gppps_data_off_status_create(
    );
  }

  return model_3_gppps_data_off_status;
}


#ifdef model_3_gppps_data_off_status_MAIN

void test_model_3_gppps_data_off_status(int include_optional) {
    model_3_gppps_data_off_status_t* model_3_gppps_data_off_status_1 = instantiate_model_3_gppps_data_off_status(include_optional);

	cJSON* jsonmodel_3_gppps_data_off_status_1 = model_3_gppps_data_off_status_convertToJSON(model_3_gppps_data_off_status_1);
	printf("model_3_gppps_data_off_status :\n%s\n", cJSON_Print(jsonmodel_3_gppps_data_off_status_1));
	model_3_gppps_data_off_status_t* model_3_gppps_data_off_status_2 = model_3_gppps_data_off_status_parseFromJSON(jsonmodel_3_gppps_data_off_status_1);
	cJSON* jsonmodel_3_gppps_data_off_status_2 = model_3_gppps_data_off_status_convertToJSON(model_3_gppps_data_off_status_2);
	printf("repeating model_3_gppps_data_off_status:\n%s\n", cJSON_Print(jsonmodel_3_gppps_data_off_status_2));
}

int main() {
  test_model_3_gppps_data_off_status(1);
  test_model_3_gppps_data_off_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_3_gppps_data_off_status_MAIN
#endif // model_3_gppps_data_off_status_TEST
