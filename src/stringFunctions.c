#include <stdio.h>
#include <string.h>

int main() {

  char string1[] = "Victor";
  char string2[] = "Silva";

  // strlwr(string1);                // converts a string to lowercase
  // strupr(string1);                // converts a string to uppercase
  // strcat(string1, string2);       // appends string2 to end of string1
  // strncat(string1, string2, 1);   // appends n characters from string2 to string1
  // strcpy(string1, string2);       // copy string2 to string1
  // strncpy(string1, string2, 3);   // copy n character of string2 to string1;

  // strset(string1, '?');           // sets all characters of a string to a given character
  // strnset(string1, 'H', 1);       // sets first n character of a string to a given character
  // strrev(string1);                // reverses a string

  int length = strlen(string1);            // returns string length as int
  // int result = strcmp(string1, string2);   //string compare all characters
  // int result = strncmp(string1, string2, 1);  // string compare n characters
  // int result = strcmpi(string1, string1);     // string compare all (ignore case)
  // int result = strnicmp(string1, string2, 1); // string compare n characters (ignore case)

  printf("String: %s\n", string1);
  printf("Length: %d\n", length);

  //strcmp returns 0 if it's equal and 1 if not.
  if(result == 0) printf("\nThe strings are the same!\n");
  else printf("\nThe strings are not the same\n");

  return 0;
}
