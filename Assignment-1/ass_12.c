// Q12: Write a program that displays sum of first N integer numbers. Where as the number N is 
// provided by the user. 

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
