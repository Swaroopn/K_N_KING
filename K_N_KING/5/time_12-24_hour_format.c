/********************************
 * NAME:       24hour-12hour.c  *
 * PAGE NUM:                89  *
 * AUTHOR:             SWAROOP  *
 ********************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, min;

    printf("Enter a 24-hour time(hour:min): ");
    scanf("%d:%d", &hour, &min);

        if (min >= 60)
        {
            do
            {
                min = min - 60;
            } while(min > 60);
        }
        if (hour > 12)
        {
            hour = hour - 12;

            printf("\nEquivalent 12-hour time: %.2d:%.2d PM\n", hour, min);
            exit(0);
        }


    printf("\nEquivalent 12-hour time: %.2d:%.2d AM\n", hour, min);
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
