#include <stdio.h>
#include <string.h>

int main() {

  char words[4][20] = {"Minecraft", "Battlefield", "Arkham Knight"};

  // words[0] = "Valorant"; This will not work
  strcpy(words[3], "Valorant");

  for(int i = 0; i < sizeof(words)/sizeof(words[0]); i++) {
    printf("%s\n", words[i]);
  }

  return 0;
}