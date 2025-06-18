#include <stdio.h>
int main()
{
    int arr[7];
    int sum = 0;
    int average;
    int lowest;
    int highest;

    for (int i = 0; i < 7; i++)
    {

        printf("Enter the 7 days temprature: ");
        scanf("%d", &arr[i]);

        sum += arr[i];

        if (arr[i] > highest)
        {
            highest = arr[i];
        }

        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }

    average = (sum) / 7;

    printf("The average of 7 temp is %d \n", average);
    printf("The highest of 7 temp is %d \n", highest);
    printf("The lowest of 7 temp is %d", lowest);


}