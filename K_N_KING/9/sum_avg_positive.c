/**************************************
 * PROGRAM NAME:  sum_avg_positive.c  *
 * PAGE NUMBER:         		 215  *
 * AUTHOR:            		 SWAROOP  *
 **************************************/
 
#include <stdio.h>

int main(void)
{
    int number[10], i = 0, ch, positive = 0, sum = 0, largest = -1;

    printf("Enter the Elements of an array (ctrl+d to terminate): \n");
    while (scanf("%d", &number[i]) != EOF){
        if (number[i] > largest)
            largest = number[i];
        sum += number[i];
        if (number[i] > 0)
            positive++;
        i++;
    }

    printf("Number of Positive Elements: %d\n", positive);
    printf("Largest : %d\n", largest);
    printf("Average of all numbers: %f\n", (float)sum / i);

    return 0;
}

