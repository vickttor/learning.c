#include <stdio.h>
#include <math.h>

int main() {

  char operator;
  double n1, n2, res = 0;

  printf("\nEnter an operator (+ - * / % ^): ");
  scanf("%c", &operator);

  printf("Enter number 1: ");
  scanf("%lf", &n1);

  printf("Enter number 2: ");
  scanf("%lf", &n2);

  switch (operator) {
    case '+':
      res = n1 + n2;
      break;
    case '-':
      res = n1 - n2;
      break;
    case '*':
      res = n1 * n2;
      break;
    case '/':
      res = n1 / n2;
      break;
    case '%':
      res = (int) n1 % (int) n2;
      break;
    case '^':
      res = pow(n1, n2);
      break;
    default:
      printf("%c is not valid", operator);
  }

  printf("\nresult: %.2lf\n", res);

  return 0;
}