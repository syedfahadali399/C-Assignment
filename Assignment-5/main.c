#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number negative number to quit: ");
        scanf("%d", &number);

        if (number >= 0) {
            printf("You entered: %d\n", number);
        }

    } while (number >= 0);

    printf("Negative number entered. Program stop!.\n");

    return 0;
}

