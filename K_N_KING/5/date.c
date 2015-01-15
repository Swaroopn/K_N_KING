/*********************
* NAME:     date.c   *
* PAGE NUM:     50   *
* AUTHOR    SWAROOP  *
***********************/

#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm,&dd,&yyyy);

    printf("You entered the date: %d%.2d%d", yyyy, mm, dd);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
