#include<stdio.h>
int main() {
    int num1, num2, num3;
    int average;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);

    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    printf("Enter 3rd Number: ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The Average of three number is %d", average);
}