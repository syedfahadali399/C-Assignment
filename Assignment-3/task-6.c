#include <stdio.h>

int main() {
    int students, subjects;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    int marks[100][100];
    int totalMarks[100];

    int highestTotal = 0;
    int firstPosition = 0;

    for (int i = 0; i < students; i++) {
        int sum = 0;
        printf("\nEnter marks for Student %d:\n", i + 1);

        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }

        totalMarks[i] = sum;

        if (sum > highestTotal) {
            highestTotal = sum;
            firstPosition = i;
        }
    }

    printf("\nTotal Marks of Each Student:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d: %d marks\n", i + 1, totalMarks[i]);
    }

    printf("\nStudent %d wins the first position with %d marks.\n", firstPosition + 1, highestTotal);

    return 0;
}
