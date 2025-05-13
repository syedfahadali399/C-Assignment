// Q4: Write a program that receives the radius of  the circle from the user and displays the area and circumference of  the circle. 

#include <stdio.h>

int main() {
    float radius, area, circumference, PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
