#include <stdio.h>
#include <ctype.h> // toupper | toascii | tolower ...

int main() {

  char unit;
  float temp;

  printf("\nIs the temperature in (F) or (C)?: ");
  scanf("%c", &unit);

  unit = toupper(unit); // To Upper Case

  if(unit == 'C'){
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("The temp in Farenheit is: %0.1f", temp);
  }else if(unit == 'F'){
    printf("\nEnter the temperature in Farenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("The temp in Celsius is: %0.1f", temp);
  }else{
    printf("\n'%c' is not a valid unit of measurement", unit);
  }

  return 0;
}