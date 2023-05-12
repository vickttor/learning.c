#include <stdio.h>

int main() {
  // 2D array = an array, where each element is an entire array
  //          useful if you need a matrix, grid, or table of data;

  /*
  int numbers[2][3] = {
    {1,2,3},
    {4,5,6}
  };
  */

 int numbers[2][3];

  // assigning: 
  // numbers[0][0] = 1;
  // numbers[0][1] = 2;
  // numbers[0][2] = 3;
  // numbers[1][0] = 4;
  // numbers[1][1] = 5;
  // numbers[1][2] = 6;

  // catching
  for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
    for(int j = 0; j < sizeof(numbers[i])/sizeof(numbers[i][0]); j++) {
      int x;
      scanf("%d", &x);
      numbers[i][j] = x;
    }
  }

  // printing
  for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
    printf("{");
    for(int j = 0; j < sizeof(numbers[i])/sizeof(numbers[i][0]); j++) {
      printf(" %d ", numbers[i][j]);
    }
    printf("}\n");
  }

  return 0;
}