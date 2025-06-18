#include <stdio.h>
int main() {
    // 1D Array
    int number[5] = {10, 20, 30, 40, 50};

    printf("%d \n", number[2]);

    for(int i = 0; i < 5; i++){
        printf("%d \n", number[i]);
    }

    // 2D Array
    int array2d[3][5] = { {10, 20, 30, 40, 50},
    {60, 70, 80, 90, 100},{110, 120, 130, 140, 150}
    };

    printf("%d \n", array2d[0][1]);

    for(int j = 0; j<3; j++){  // For 3
        for(int k = 0; k < 5; k++){ //  For 5
            printf("%d \n", array2d[j][k]);
        }
    }

    // Array
    int arrs[5] = {3, 10, 5, 6, 9};
    int size = sizeof(arrs) / sizeof(arrs[0]);
    int k = 0;

    while(k < size) {
        printf("Element at index %d: %d \n", k, arrs[k]);
        k++;
    }

    int findarr[10] = {30, 50, 20, 40, 60, 10, 80, 100, 90, 70};
    int sizeofArr = sizeof(findarr) / sizeof(findarr[0]);
    int num, found = 0;

    printf("Enter number you find into the array: ");
    scanf("%d", &num);

    for(int m = 0; m < sizeofArr; m++){
        if(findarr[m] == num){
            found = m;
            break;
        }
    }

    if(found != 0){
        printf("Number %d found at index %d. \n", num, found);
    } else {
        printf("Number %d not found in the data \n", num);
    }
}
