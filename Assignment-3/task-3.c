#include<stdio.h>
int main() {
	int i, arr[7], max = 0;
	for (i = 0; i < 7; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("The maximum number is: %d\n", max);

}