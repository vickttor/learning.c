#include <stdio.h>
#include <string.h>

int main() {

  printf("\n==== For Loops ====\n\n");
  // for loop = repeats a section of code a limited amount of times

  for(int i = 1; i <= 10; i++) {
    printf("%d ", i);
  }

  printf("\n\n==== While Loops ==== \n\n");
  // while loop = repeats a section of code possibly unlimited times
  int until = 10;
  int incremental_control = 0;
  int i = 2;

  while(incremental_control < until) { // it'll print al the next 10 even numbers
    if(i % 2 == 0) {
      printf("%d ", i);
      incremental_control++;
    }
    i++;
  }

  printf("\n\n==== do while Loops ====\n");
  // do while loop = repeats a section of code possibly unlimited times with at least one loop.

  char name[25];
  do {
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
  } while(strlen(name) == 0);

  printf("\nHello %s\n", name);



  return 0;
}