#include <stdio.h>

int main() {
  
  float celsius, fahrenheit;

  printf("Enter the temperature in Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

  printf("%.2f Celsius is equal to %.2f*F Fahrenheit\n", celsius, fahrenheit);

  return 0;
}
