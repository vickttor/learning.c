#include <stdio.h>

int main() {

  // continue = skipes rest of code & forces the next iteration of the loop
  // break = exits a loop switch

  for(int i = 1; i <= 20; i++) {
    if(i > 10 && i <= 15) continue;
    printf("%d\n", i);
    if(i == 18) break; // here we cal also use return 0 for example
  }

  return 0;
}