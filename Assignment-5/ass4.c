#include <stdio.h>

int main() {
    int number;

    printf("Enter numbers (enter 0 to stop):\n");

    scanf("%d", &number);

    while (number != 0) {
        printf("You entered: %d\n", number);
        scanf("%d", &number);
    }

    printf("Zero entered. Program terminated.\n");

}

