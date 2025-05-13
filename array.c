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
}
