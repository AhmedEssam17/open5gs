#ifndef participant_action_type_any_of_TEST
#define participant_action_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define participant_action_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/participant_action_type_any_of.h"
participant_action_type_any_of_t* instantiate_participant_action_type_any_of(int include_optional);



participant_action_type_any_of_t* instantiate_participant_action_type_any_of(int include_optional) {
  participant_action_type_any_of_t* participant_action_type_any_of = NULL;
  if (include_optional) {
    participant_action_type_any_of = participant_action_type_any_of_create(
    );
  } else {
    participant_action_type_any_of = participant_action_type_any_of_create(
    );
  }

  return participant_action_type_any_of;
}


#ifdef participant_action_type_any_of_MAIN

void test_participant_action_type_any_of(int include_optional) {
    participant_action_type_any_of_t* participant_action_type_any_of_1 = instantiate_participant_action_type_any_of(include_optional);

	cJSON* jsonparticipant_action_type_any_of_1 = participant_action_type_any_of_convertToJSON(participant_action_type_any_of_1);
	printf("participant_action_type_any_of :\n%s\n", cJSON_Print(jsonparticipant_action_type_any_of_1));
	participant_action_type_any_of_t* participant_action_type_any_of_2 = participant_action_type_any_of_parseFromJSON(jsonparticipant_action_type_any_of_1);
	cJSON* jsonparticipant_action_type_any_of_2 = participant_action_type_any_of_convertToJSON(participant_action_type_any_of_2);
	printf("repeating participant_action_type_any_of:\n%s\n", cJSON_Print(jsonparticipant_action_type_any_of_2));
}

int main() {
  test_participant_action_type_any_of(1);
  test_participant_action_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // participant_action_type_any_of_MAIN
#endif // participant_action_type_any_of_TEST
