/****************************************
 * PROGRAM NAME:  equivalent_24_hour.c  *
 * PAGE NUMBER:                     97  *
 * AUTHOR:                     SWAROOP  *
 ****************************************/

#include <stdio.h>

int main(void)
{
    int hour, min;

    printf("Enter 12-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (min >= 60)
    {
        min = min - 60;
    }
    if (hour < 12)
        hour += 12;
    else
    {
        printf("Equivalent 24-hour time: %.2d:%.2d\n", hour-12, min);
        return 0;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, min);

    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

