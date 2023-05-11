#include <stdio.h>

int max(int x, int y) {
 return x > y ? x : y;
}

int main() {

  int higher = max(10, 15);
  printf("%d\n", higher);

  return 0;
}