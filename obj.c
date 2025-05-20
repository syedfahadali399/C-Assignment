#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

struct UserInput {
    char name[10];
    int age;
};

int main(){
    struct Student s1;
    
    strcpy(s1.name, "Fahad");
    s1.age = 50;
    s1.marks = 85.5;
    
    printf("Name %s \n", s1.name);
    printf("Age %d \n", s1.age);
    printf("Marks %f \n", s1.marks);

    struct UserInput s2;

    printf("Enter your name: ");
    fgets(s2.name, sizeof(s2.name), stdin);  // safer string input

    // Remove newline from name if exists
    // size_t len = strlen(s2.name);
    // if (len > 0 && s2.name[len - 1] == '\n') {
    //     s2.name[len - 1] = '\0';
    // }

    printf("Enter your age: ");
    scanf("%d", &s2.age);

    // Output the data
    printf("\n--- User Info ---\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
}