#include<stdio.h>

void greet() {
    printf("Hello Welcome to Iqra University \n");
}

int add(int a, int b) {
        return a + b;
    }

int max(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main() {
    // For Greet Function usually normal invoke function
    greet();

    // For Two number these function with return data type which saved to be in a variable for result
    int result = add(5, 3);
    printf("The Result of two number is %d \n", result);

    // To find greatest number using input from user
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    int find = max(num1, num2);
    printf("The Greater Number is %d \n", find);

    // Find fact of any number
    int numFact;
    printf("Enter any Number to find the fact of the number: ");
    scanf("%d", &numFact);
    int resultFact = fact(numFact);
    printf("The factorial of number %d is %d \n", numFact, resultFact);

    // To find even or odd
    checkEvenOdd(7);
    checkEvenOdd(12);

    return 0;
}