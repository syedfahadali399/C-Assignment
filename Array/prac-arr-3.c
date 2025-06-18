#include<stdio.h>
int main() {
    int arr[3][3];
    int tra[3][3];

    printf("Enter 1st Arr value \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter Number: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Before Transpose \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tra[j][i] = arr[i][j];
        }
    }

    printf("After Transpose \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", tra[i][j]);
        }
        printf("\n");
    }
}