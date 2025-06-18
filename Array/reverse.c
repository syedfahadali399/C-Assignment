#include <stdio.h>

int main() {
    int arr[5];
    int n = 5;

    // Print original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    printf("\nReversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
