#include <stdio.h>

int main() {
	int userNumber, sum = 0, i = 1;
	
	printf("Enter Number from 1 to 20 In Positive: ");
	scanf("%d", &userNumber);
	
	while(i <= userNumber) {
		sum += i;
		i++;
	}
	
	printf("The sum of integers from 1 to %d is %d\n", userNumber, sum);
	
	return 0;
}
