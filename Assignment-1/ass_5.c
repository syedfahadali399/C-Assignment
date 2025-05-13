// Q5: There are two friends Buntty and Bubbly.Buntty is standing at the top of a vertical building 
// and Bubblyis  standing on the ground away from the building. Write a program  that displays 
// the distance of Bubbly from the building after asking the user about the length of the building 
// and the distance between  Buntty and Bubbly. 

#include <stdio.h>
#include <math.h>

int main() {
    float height, hypotenuse, base;

    printf("Enter the height of the building in meters : ");
    scanf("%f", &height);

    printf("Enter the distance between Buntty and Bubbly in meters : ");
    scanf("%f", &hypotenuse);

    if (hypotenuse <= height) {
        printf("Invalid input! Hypotenuse must be greater than the height.\n");
    } else {
        base = sqrt((hypotenuse * hypotenuse) - (height * height));
        printf("The distance of Bubbly from the building is: %.2f meters\n", base);
    }

    return 0;
}
