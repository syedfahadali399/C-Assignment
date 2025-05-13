// Q16: Write a program that receives a positive  integer number from the user and displays 
// whether it is a prime or composite numb

#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number should be greater than 1.\n");
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is a composite number.\n", num);
        }
    }

    return 0;
}
