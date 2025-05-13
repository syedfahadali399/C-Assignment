#include <stdio.h>
#define Items 4

int main() {
    float price1[Items], price2[Items];
    int expensiveInMarket1 = 0;
    int expensiveInMarket2 = 0;
    float maxDifference = 0.0;

    //In this section of the program running a loop and taking input from the user prices of items in two different markets/
    for (int i = 0; i < Items; i++) {
        printf("\nEnter price of item %d in Supermarket 1: ", i + 1);
        scanf_s("%f", &price1[i]);

        printf("Enter price of item %d in Supermarket 2: ", i + 1);
        scanf_s("%f", &price2[i]);

        //In this section comparing the prices how many are expensive in each market by using if else statement/
        if (price1[i] > price2[i]) {
            expensiveInMarket1++;
        }
        else if (price2[i] > price1[i]) {
            expensiveInMarket2++;
        }

		//In this section calculating the difference between the prices of two markets and finding the maximum difference/
        float difference;
        if (price1[i] > price2[i]) {
            difference = price1[i] - price2[i];
        }
        else {
            difference = price2[i] - price1[i];
        }

        if (difference > maxDifference) {
            maxDifference = difference;
        }
    }

    //This section printing the outputs/
    printf("\nItems expensive in Supermarket 1: %d\n", expensiveInMarket1);
    printf("Items expensive in Supermarket 2: %d\n", expensiveInMarket2);
    printf("Price difference B/W both markets: %.2f\n", maxDifference);


}
