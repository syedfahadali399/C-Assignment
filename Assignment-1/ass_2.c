// Q2: Write a program that accepts three numbers from the user and displays the average of the numbers. 

#include <stdio.h>

int main()
{
    float num1, num2, num3, average;

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("Enter Third Number: ");
    scanf("%f", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The Average of Three Number is: %f", average);
}