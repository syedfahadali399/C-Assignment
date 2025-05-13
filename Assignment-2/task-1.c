#include <stdio.h>
#define Students 3
#define Exams 8

int main() {
    float marks[Students][Exams];
    float highest_Avg = 0.0;
    int topStudent = -1;
    //This section of the program takes the marks of each student and storing sum of marks./
    for (int i = 0; i < Students; i++) {
        float sum = 0.0;

        printf("\nEnter marks less than 50 for Student %d:\n", i + 1);
        //In this section of program taking input from user of each exam marks and adding the marks to the SUM variable./
        for (int j = 0; j < Exams; j++) {
            printf("Exam %d Marks: ", j + 1);
            scanf_s("%f", &marks[i][j]);
            sum += marks[i][j];
        }
        /* In this section of program calculating the average of the marks of each student and printing the average*/
        float average = sum / Exams;
        printf("Average marks for Student %d = %.2f\n", i + 1, average);

        //In this section of the program checking the highest average marks of a student amomg all and printing that./
        if (average > highest_Avg) {
            highest_Avg = average;
            topStudent = i + 1;
        }
    }

    printf("\n Student %d has scored highest average among all students: %.2f\n", topStudent, highest_Avg);
}
