#include <stdio.h>

int main() {
    int number;

    printf("Enter numbers (enter 0 to stop):\n");

    do {
        scanf("%d", &number);

        if (number != 0) {
            printf("You entered: %d\n", number);
        }

    } while (number != 0);

    printf("Zero entered. Program terminated.\n");

    return 0;
}

