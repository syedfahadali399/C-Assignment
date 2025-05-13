// Q8: Write a program that receives an integer  number from the user. If the number is positive 
// then display that  number. 

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is: %d\n", number);
    } else {
        printf("Error");
    }

    return 0;
}
