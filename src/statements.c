#include <stdio.h>

int main() {

  int age;

  printf("\nEnter your age: ");
  scanf("%d", &age);

  // if = A statement to use with short else if cases

  if(age >= 18) {
    printf("- You are now signed up!");
  }else if(age < 0) {
    printf("- Are you okay bro '_' ?");
  }else if(age == 0){
    printf("- You can't sign up! You were just born!");
  }else {
    printf("- You are too young to sign up!");
  }

  // switch = A more efficient alternative to using many "else if"
  //          statements. Allows a value to be tested for equality many cases.

  char grade;

  printf("\n\nEnter a letter grade: ");
  scanf("%s", &grade);

  switch (grade){
    case 'A':
      printf("- Good Job |^o^| !\n");
      break;
    case 'B':
      printf("- Congratultions ^_^\n");
      break;
    case 'C':
      printf("- :) Hmmm ok....\n");
      break;
    case 'D':
      printf("- Oh sorry, good luck in the next\n");
      break;
    case 'F': 
      printf("- wtf bro '_'... \n");
      break;
    default:
      printf("- Please enter only valid grades\n");
  }

  return 0;
}