// Q10: Write a program that receives the marks of  five different subjects from the user and 
// displays the percentage and grade obtained. 

#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A+\n");
    } else if (percentage >= 80) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else if (percentage >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
