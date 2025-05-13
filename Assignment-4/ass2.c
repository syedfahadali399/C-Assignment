#include <stdio.h>

int main() 
{
  float amount, rate, time, interest;

  printf("Enter the amount: ");
  scanf("%f", &amount);

  printf("Enter the rate of interest (in percentage): ");
  scanf("%f", &rate);

  printf("Enter the time period (in years): ");
  scanf("%f", &time);

  interest = (amount * rate * time) / 100.0;

  printf("Simple Interest = %.2f\n", interest);

}
