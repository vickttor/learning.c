#include <stdio.h>

int main() {
  // array = a data structure that can store many values of the same type

  double prices[6] = {5.0, 10.0, 15.0, 25.0, 20.0}; // assigning in declaration
  prices[5] = 34.5; // assigning later

  int index = 5;

  printf("prices[%d] = $%.2lf\n", index, prices[index]);

  return 0;
}