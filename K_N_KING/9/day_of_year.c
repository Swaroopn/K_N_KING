/*********************************
 * PROGRAM NAME:  day_of_year.c  *
 * PAGE NUMBER:             214  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

int b[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

int day_of_year(int y, int m, int d)
{
    if (y % 4 == 0)
        return b[m-1] + d + 1;
    return b[m-1] + d;
}

int main(void)
{
    int y, m, d;

    printf("Enter date (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &y, &m, &d);

    printf("number of days: %d", day_of_year(y,m,d));

    return 0;
}

