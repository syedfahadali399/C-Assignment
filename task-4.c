#include<stdio.h>
int main() {
	int orderAmount, deliveryCharge;

	printf("Enter the order amount: ");
	scanf("%d", &orderAmount);

	if (orderAmount >= 1000) {
		deliveryCharge = 0;
	} else { 
		deliveryCharge = 150;
	}

	printf("Delivery Charges: %d\n", deliveryCharge);
	
}