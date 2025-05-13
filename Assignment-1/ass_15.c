// Q15: Write a program that receives a positive  integer number from the user and displays its 
// factorial. 

#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1;

    printf("Enter a integer: ");

    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}
