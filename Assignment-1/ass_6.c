// Q6: A person enters the bank and stands in the  queue to get his salary. When his turn comes, 
// he requests the cashier that I need my salary with minimum notes and coins. Write  a program 
// for the cashier that first asks the cashier to enter the  salary amount and then displays the 
// number of notes and coins of(Rs. 5000, Rs. 1000, Rs. 100, Rs. 50, Rs. 20, Rs. 10, Rs. 5, Rs. 2 and 
// Re. 1). 

#include <stdio.h>

int main() {
    int amount;
    int n5000, n1000, n100, n50, n20, n10, n5, n2, n1;

    printf("Enter the salary amount: ");
    scanf("%d", &amount);

    n5000 = amount / 5000;
    amount %= 5000;

    n1000 = amount / 1000;
    amount %= 1000;

    n100 = amount / 100;
    amount %= 100;

    n50 = amount / 50;
    amount %= 50;

    n20 = amount / 20;
    amount %= 20;

    n10 = amount / 10;
    amount %= 10;

    n5 = amount / 5;
    amount %= 5;

    n2 = amount / 2;
    amount %= 2;

    n1 = amount;

    printf("Minimum notes and coins required:\n");
    printf("Rs. 5000: %d\n", n5000);
    printf("Rs. 1000: %d\n", n1000);
    printf("Rs.  100: %d\n", n100);
    printf("Rs.   50: %d\n", n50);
    printf("Rs.   20: %d\n", n20);
    printf("Rs.   10: %d\n", n10);
    printf("Rs.    5: %d\n", n5);
    printf("Rs.    2: %d\n", n2);
    printf("Re.    1: %d\n", n1);

    return 0;
}
