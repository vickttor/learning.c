#include <stdio.h>
#include <math.h>

int main() {

  double C1, C2, H;

  printf("Enter the first catet: ");
  scanf("%lf", &C1);

  printf("Enter the second catet: ");
  scanf("%lf", &C2);

  H = sqrt(C1*C1 + C2*C2);

  printf("Hypotenusa: %0.3lf\n", H);

  return 0;
}