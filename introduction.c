#include <stdio.h>
#include <stdbool.h>

// This is a single line comment

/*
* This is a multiple line comment
* Second Line
*/

int main(){

  printf("\n\n==== Learning C ====\n\n");
  
  printf("==== Printing and escape sequences ====\n\n");

  printf("1\t2\t3\n");
  printf("4\t5\t6\n");
  printf("7\t8\t9\n\n");
  printf("Path: C:\\users\\victor.silva\\desktop");

  printf("\n\n==== Variables ====\n\n");

  // Variable = Allocated space in memory to store a value.
  //            We refer to a variables's name to access the stored value.
  //            That variable now behaves as if it was the value it contains.
  //            BUT we need to declare what type of data we are storing.


  int x; // declaration ->  creating space im memory to store a value.
  x = 123; // Initialization -> Assigning value.

  int y = 321; // Declaration + Initialization.
  
  int age = 18;           // Integer
  float income = 2675.50; // Floating point number
  char grade = 'C';       // single character. It's only possible to assign with single quotes
  char name[] = "Victor"; // Array of characters (Strings)

  printf("Age (int): %d\n", age);
  printf("income (float): %0.2f\n", income);
  printf("Grade (char): %c\n", grade);
  printf("Name (Array of characters - strings): %s\n", name);

  printf("\n\n==== More Data Types ====\n\n");

  char c = 'C';                  // Single Character %c
  char str[] = "Bro";            // array of characters %s

  float f = 3.141592;            // 4 bytes (32 bits of precision) 6 - 7 digits %f
  double d = 3.141592653589793;  // 8 bytes (64 bits of precision) 15 - 16 digits %lf

  bool e = true;                 // 1 byte (true or false) %d
  char n = 120;                  // 1 byte (-128 to +127)  %d or %c
  unsigned char g = 255;         // 1 byte (0 to +255) %d or %c
  signed char j = 150;           // It's unecessary to put the signed typel, cause it's default

  short int h = 32767;           // 2 bytes (-32,768 to +32,767) %d
  unsigned short int i = 65535;  // 2 bytes (0 to +65,535) %d

  int a = 2147483646;            // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 4294967295L;  // 4 bytes (0 to +4,294,967,295) %u
 
  /**
   * ints are considered long type integers. That means we don't need to explicitly specify 
   * the long key word before the int type. But since we want to increase the range
   * we can apply the the value long long to transform the int into a number of 8 bytes;
   * 
  */

 long long int l  =  -9223372036854775807; // %lld
 unsigned long long int m  = 18446744073709551615U; //%llu

 // To render the m variable above without warns, we add a U to the end of the long long integers.

  printf("%c\n", c);
  printf("%s\n", str);
  printf("%f\n", f);
  printf("%0.15lf\n", d);
  printf("%d\n", e);
  printf("%d\n", n); // here if I use %c it will print the corresponding character.
  printf("%d\n", g);
  printf("%d\n", h);
  printf("%d\n", a);
  printf("%u\n", k);

  // Long numbers;

  printf("%lld\n", l);
  printf("%llu\n", m);

  printf("\n\n==== Format Specifiers ====\n\n");

  // format specifier % = defines and formats a type data to be displayed;

  // %c = character
  // %s = string (array of characters)
  // %f = float
  // %lf = double (long float)
  // %d = integer

  // %.1 = decimal precison
  // %1 minimum field width
  // %- left align

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%-8.2f\n", item1);
  printf("Item 2: $%8.2f\n", item2);
  printf("Item 3: $%-8.2f\n", item3);

  return 0;
}
