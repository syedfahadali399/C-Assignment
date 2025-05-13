#include<stdio.h>
int main() {
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int min = num1;
	if (num2 < min) {
		min = num2;
	} else if (num3 < min) {
		min = num3;
	}

	printf("The minimum number is: %d\n", min);
}