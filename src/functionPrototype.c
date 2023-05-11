#include <stdio.h>

void hello(char[], int); // function prototype

int main() {
  // function prototype

  // What is It?
  // function declaration, w/o a body, before main()
  // Ensures that calls to a function are made with the correct arguments

  // Important notes
  // Many C compilers do not check for parameter matching
  // Missing arguments will result in unexpected behavior
  // a function prototype causes the compiler to flag an error if argument are missing

  char name[] = "Victor";
  int age = 18;

  hello(name, age);

  return 0;
}

void hello(char name[], int age) {
  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);
}

