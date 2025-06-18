#include<stdio.h>
int main() {
    // write a program to input char from the user and print the name of the user
    char userName[5][1];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 1; j++){
            scanf(" %c", &userName[i][j]);
        }
    }

    printf("UserName is \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 1; j++){
            printf("%c", userName[i][j]);
        }
    }
    
}
