#include <stdio.h>
#include <math.h>

int main() {

  double A = sqrt(9);
  double B = pow(2,4); // exponential
  int C = round(3.4); // round down or up depending of the floating point
  int D = ceil(3.1); // always round up
  int E = floor(3.9); // always round down
  double F = abs(-5.1); // absolute integer number |-5| = +5
  double G = fabs(-100.50); // absolute floating number |-100.50| = +100.50
  double H = log2(8); // logarithms (Logarithm of base 2 that results in 8 is equal 3)
  double I = sin(45); // seno (in pt-br)
  double J = cos(45); // cosseno (in pt-br)
  double K = tan(45); // tangente (in pt-br)

  printf("sqrt(9) -> %.2lf\n", A);
  printf("pow(2,4) -> %.2lf\n", B);
  printf("round(3.4) -> %d\n", C);
  printf("ceil(3.1) -> %d\n", D);
  printf("floor(3.9) -> %d\n", E);
  printf("abs(-5) -> %.2lf\n", F);
  printf("fabs(-100.50) -> %.2lf\n", G);
  printf("log2(8) -> %lf\n", H);
  printf("sin(45) -> %lf\n", I);
  printf("cos(45) -> %lf\n", J);
  printf("tan(45) -> %lf\n", K);






  return 0;
}