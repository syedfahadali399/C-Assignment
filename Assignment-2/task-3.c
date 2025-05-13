#include <stdio.h>

int main() {
    int sound, count = 0, total = 0, highest = 0;
	float average;
    /*In this section of program user inputs the sounds then run a while loop because there is not a fixed numbers 
    of inputs*/

    printf("Enter sound levels in dB (enter 0 to stop):\n");

    while (1) {
        scanf_s("%d", &sound);

        if (sound == 0)
            break;
     //In this section of the program taking sum of the sounds and calculating which one is the highest/
        total += sound;
        count++;

        if (sound > highest)
            highest = sound;
    }
   /* In this section of program calculating the average of sounds and printing the output*/
    if (count > 0) {
        average = (float)total / count;
        printf("Average sound level: %.2f dB\n", average);
        printf("Highest recorded sound level: %d dB\n", highest);
    }
    else {
        printf("No sound levels were entered.\n");
    }
}