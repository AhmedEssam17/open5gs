#ifndef play_to_party_TEST
#define play_to_party_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define play_to_party_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/play_to_party.h"
play_to_party_t* instantiate_play_to_party(int include_optional);



play_to_party_t* instantiate_play_to_party(int include_optional) {
  play_to_party_t* play_to_party = NULL;
  if (include_optional) {
    play_to_party = play_to_party_create(
    );
  } else {
    play_to_party = play_to_party_create(
    );
  }

  return play_to_party;
}


#ifdef play_to_party_MAIN

void test_play_to_party(int include_optional) {
    play_to_party_t* play_to_party_1 = instantiate_play_to_party(include_optional);

	cJSON* jsonplay_to_party_1 = play_to_party_convertToJSON(play_to_party_1);
	printf("play_to_party :\n%s\n", cJSON_Print(jsonplay_to_party_1));
	play_to_party_t* play_to_party_2 = play_to_party_parseFromJSON(jsonplay_to_party_1);
	cJSON* jsonplay_to_party_2 = play_to_party_convertToJSON(play_to_party_2);
	printf("repeating play_to_party:\n%s\n", cJSON_Print(jsonplay_to_party_2));
}

int main() {
  test_play_to_party(1);
  test_play_to_party(0);

  printf("Hello world \n");
  return 0;
}

#endif // play_to_party_MAIN
#endif // play_to_party_TEST
