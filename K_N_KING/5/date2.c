/****************************
 * PROGRAM NAME:  date2.c   *
 * PAGE NUMBER:        97   *
 * AUTHOR:        SWAROOP   *
 ***************************/

#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy, mm2, dd2, yyyy2;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    while ((mm != 0) && ( dd != 0) && (yyyy != 0))
     {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &mm2, &dd2, &yyyy2);

        if ((yyyy2 == 0) && (mm2 == 0) && (dd2 == 0))
            break;

        if (yyyy2 < yyyy)
        {
            yyyy = yyyy2;
            mm = mm2;
            dd = dd2;
        }
        else if ((yyyy2 <= yyyy) && (mm2 <= mm) && (dd2 < dd))  // copy only if dd2 < dd
        {
            yyyy = yyyy2;
            mm = mm2;
            dd = dd2;
        }
    }

    printf("Earliest date: %d/%d/%d\n\n", mm, dd, yyyy);
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

