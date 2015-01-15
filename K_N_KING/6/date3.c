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

    do
     {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &mm2, &dd2, &yyyy2);

        if ( yyyy2 > 0)
        {
            if (yyyy2 < yyyy)
            {
                if (mm2 < mm)
                {
                    if (dd2 < dd)
                    {
                        dd = dd2;
                        mm = mm2;
                        yyyy = yyyy2;
                    }
                }
            }
        }
     } while ((mm2 != 0) && ( dd2 != 0) && (yyyy2 != 0));

    printf("Earliest date: %d/%d/%d", dd, mm, yyyy);
    return 0;
}
