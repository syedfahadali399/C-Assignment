#include <stdio.h>

int main() {
    int number, msd, lsd;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    lsd = number % 10;

    msd = number;
    while (msd >= 10) {
        msd = msd / 10;
    }

    printf("Most Significant Digit: %d\n", msd);
    printf("Least Significant Digit: %d\n", lsd);
    
}