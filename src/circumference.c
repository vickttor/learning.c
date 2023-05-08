#include <stdio.h>
#include <math.h>

int main() {

  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("\nenter radius of a circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius; // 2PIr
  area = PI * pow(radius, 2); // PIr^2

  printf("\nCircumference: %lf", circumference);
  printf("\nCircle Area: %lf", area);

  return 0;
}