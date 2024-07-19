#ifndef participant_action_type_TEST
#define participant_action_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define participant_action_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/participant_action_type.h"
participant_action_type_t* instantiate_participant_action_type(int include_optional);



participant_action_type_t* instantiate_participant_action_type(int include_optional) {
  participant_action_type_t* participant_action_type = NULL;
  if (include_optional) {
    participant_action_type = participant_action_type_create(
    );
  } else {
    participant_action_type = participant_action_type_create(
    );
  }

  return participant_action_type;
}


#ifdef participant_action_type_MAIN

void test_participant_action_type(int include_optional) {
    participant_action_type_t* participant_action_type_1 = instantiate_participant_action_type(include_optional);

	cJSON* jsonparticipant_action_type_1 = participant_action_type_convertToJSON(participant_action_type_1);
	printf("participant_action_type :\n%s\n", cJSON_Print(jsonparticipant_action_type_1));
	participant_action_type_t* participant_action_type_2 = participant_action_type_parseFromJSON(jsonparticipant_action_type_1);
	cJSON* jsonparticipant_action_type_2 = participant_action_type_convertToJSON(participant_action_type_2);
	printf("repeating participant_action_type:\n%s\n", cJSON_Print(jsonparticipant_action_type_2));
}

int main() {
  test_participant_action_type(1);
  test_participant_action_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // participant_action_type_MAIN
#endif // participant_action_type_TEST
