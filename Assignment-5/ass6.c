#include <stdio.h>

int main() {
    int number;
    int count = 0;
    int i;

    printf("Enter numbers (enter 0 to stop):\n");

    for (i = 0; i < 100; i++) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        count++;
    }

    printf("Total count of numbers entered (excluding zero): %d\n", count);

    return 0;
}

