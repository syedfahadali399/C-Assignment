#include<stdio.h>
int main() {
    // write a program to ask user 2d array of 3 * 3 and add both of the matrices
    int arr1[3][3];

    printf("Enter 1st Arr value \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[3][3];

    printf("Enter 2nd Arr value \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    int total = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            total = total + arr1[i][j] + arr2[i][j];
        }
    }

    printf("The Total is %d", total);
}