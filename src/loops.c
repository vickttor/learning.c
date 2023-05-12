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
  
  printf("\n\n==== Nested Loops ====\n");
  // nested loop = loop inside of another loop

  int rows;
  int cols;
  char symbol;

  printf("Enter a # of rows: ");
  scanf("%d", &rows);

  printf("Enter a # of cols: ");
  scanf("%d", &cols);

  scanf("%c"); // cleaning the buffer to get the \n

  printf("Enter a symbol to use: ");
  scanf("%c", &symbol);

  for(int i = 0; i <= rows; i++) {
    for(int j = 1; j <= cols; j++) {
      printf("%c", symbol);
    }
    printf("\n");
  }



  return 0;
}