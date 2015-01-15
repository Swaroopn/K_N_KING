/*************************************************
 * PROGRAM NAME:  departure_arrival_of_flight.c  *
 * PAGE NUMBER:                              97  *
 * AUTHOR:                              SWAROOP  *
 *************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, min, seconds;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    seconds = hour * 60 + min;

    if ( seconds <= 531)
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:15 a.m.\n");
    }
    else if ( seconds <= 631)
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (seconds <= 723)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (seconds <= 803)
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (seconds <= 892)
    {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (seconds <= 1042)
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (seconds <= 1222)
    {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else if (seconds <= 1305)
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

