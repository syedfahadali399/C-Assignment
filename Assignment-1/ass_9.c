// Q9: Write a program that receives three unique  integer numbers from the user and displays 
// the largest number. 

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The largest number is: %d\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("The largest number is: %d\n", num3);
    } else {
        printf("Please enter unique numbers!\n");
    }

    return 0;
}
