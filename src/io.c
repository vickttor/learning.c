#include <stdio.h>
#include <string.h>

int main(){
  
  // To accept user input we use the scanf instead of printf

  char name[25]; // bytes (each letter is 1 byte)
  int age;

  printf("What's your name? ");
  // scanf("%s", &name); // this doesn't accept white spaces
  fgets(name, 25, stdin);

  name[strlen(name) - 1] = '\0'; 
  // This will remove the  last character from our string. That's a \n (enter)

  printf("How old are You? ");
  scanf("%d", &age); // this doesn't accept white spaces

  printf("Hello %s, how are you?\n", name);
  printf("You are %d years old ^_^\n", age);

  return 0;
}