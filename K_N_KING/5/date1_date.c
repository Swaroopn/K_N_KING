/***************************
 * PROGRAM NAME:  date.c   *
 * PAGE NUMBER:       97   *
 * AUTHOR:       SWAROOP   *
 ***************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mm, dd, yyyy, mm2, dd2, yyyy2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yyyy2);

    if ((dd == dd2) && (mm == mm2) && (yyyy == yyyy2))
    {
        printf("%.2d/%.2d/%.2d is same as %.2d/%.2d/%.2d\n", mm2, dd2, yyyy2, dd, mm, yyyy);
        exit(EXIT_SUCCESS);
    }

    if (yyyy2 < yyyy)
    {
    	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yyyy2, dd, mm, yyyy);
    }
    else if (yyyy < yyyy2)
    {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm, dd, yyyy, dd2, mm2, yyyy2);
    }
    // years are equal
    else {
        if (mm2 < mm)
        {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yyyy2, dd, mm, yyyy);
        }
        else if(mm < mm2)
            {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm, dd, yyyy, dd2, mm2, yyyy2);
            }
        // months are equal
        else {
            if (dd2 < dd)
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yyyy2, dd, mm, yyyy);
            else
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yyyy2, dd, mm, yyyy);
        }
    }

    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

