#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;
    int **ptr1;
    ptr = &a;
    ptr1 = &ptr;

    printf("%d \n", &a);
    printf("%d \n", &ptr);
    printf("%d \n", &ptr1);
    printf("%d \n", a);
    printf("%d \n", *ptr);
    printf("%d \n", **ptr1);
    printf("%d \n", ptr);
    printf("%d \n", ptr1);
    // printf("%d \n", *ptr1);
}