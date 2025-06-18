#include<stdio.h>
int main() {

    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter Number: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ascending Array \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
    }

    printf("\nReverse Array \n");
    for(int i = 2; i >= 0; i--) {
        for(int j = 2; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
    }

}