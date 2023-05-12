#include <stdio.h>

int main() {
  // array = a data structure that can store many values of the same type

  double prices[6] = {5.0, 10.0, 15.0, 25.0, 20.0}; // assigning in declaration
  prices[5] = 34.5; // assigning later
  printf("$%.2lf\n", prices[0]);

  // iterating through the array using the sizeof operator
  
  /**
   * The sizeof calculates the amount of bytes. So
   * If we have an array of 6 elements which are double
   * that means we have 6 * 8 bytes (since the double is 8B)
   * what results in 48 bytes.
   * 
  */
  printf("sizef of pricess array: %d\n", sizeof(prices));

  // sizeof(prices)/sizeof(prices[0]) is the same that:
  // 48/8 = 6

  for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
    printf("prices[%d] = %.2lf\n", i, prices[i]);
  }

  return 0;
}