// Q13:Write a program that generates and displays  first N even numbers. Where as the 
// number N is provided by the  user. 

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("First %d even numbers are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    printf("\n");

    return 0;
}
