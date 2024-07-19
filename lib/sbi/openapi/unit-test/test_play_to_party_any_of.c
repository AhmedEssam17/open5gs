#ifndef play_to_party_any_of_TEST
#define play_to_party_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define play_to_party_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/play_to_party_any_of.h"
play_to_party_any_of_t* instantiate_play_to_party_any_of(int include_optional);



play_to_party_any_of_t* instantiate_play_to_party_any_of(int include_optional) {
  play_to_party_any_of_t* play_to_party_any_of = NULL;
  if (include_optional) {
    play_to_party_any_of = play_to_party_any_of_create(
    );
  } else {
    play_to_party_any_of = play_to_party_any_of_create(
    );
  }

  return play_to_party_any_of;
}


#ifdef play_to_party_any_of_MAIN

void test_play_to_party_any_of(int include_optional) {
    play_to_party_any_of_t* play_to_party_any_of_1 = instantiate_play_to_party_any_of(include_optional);

	cJSON* jsonplay_to_party_any_of_1 = play_to_party_any_of_convertToJSON(play_to_party_any_of_1);
	printf("play_to_party_any_of :\n%s\n", cJSON_Print(jsonplay_to_party_any_of_1));
	play_to_party_any_of_t* play_to_party_any_of_2 = play_to_party_any_of_parseFromJSON(jsonplay_to_party_any_of_1);
	cJSON* jsonplay_to_party_any_of_2 = play_to_party_any_of_convertToJSON(play_to_party_any_of_2);
	printf("repeating play_to_party_any_of:\n%s\n", cJSON_Print(jsonplay_to_party_any_of_2));
}

int main() {
  test_play_to_party_any_of(1);
  test_play_to_party_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // play_to_party_any_of_MAIN
#endif // play_to_party_any_of_TEST
