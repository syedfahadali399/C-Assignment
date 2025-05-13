// Q3: Write a program that receives the  temperature in Celsius from the user and displays the temperature  in Fahrenheit and Kelvin. 

#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    kelvin = celsius + 273.15;

    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);

    return 0;
}
