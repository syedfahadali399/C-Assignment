#include <stdio.h>

int main() {
	
  int num1, num2, num3, average, sum;
  
  printf("Enter first number: ");
  scanf("%d", &num1);
  
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  printf("Enter third number: ");
  scanf("%d", &num3);
  
  sum = num1 + num2 + num3;
  average = num1 + num2 + num3 / 3;
  
  printf("The sum of three number is %d \n", sum);
  printf("The average of three number is %d", average);
}
