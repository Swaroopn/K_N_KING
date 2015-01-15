/**********************
 * NAME:       UPC2.c  *
 * PAGE NUM:      50  *
 * AUTHOR:   SWAROOP  *
 **********************/

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6, first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of six digits: ");
    scanf("%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6);
    printf("Enter second group of six digits: ");
    scanf("%1d%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = d + i2 + i4 + i6 + j2 + j4 + j6 ;
    second_sum = i1 + i3 + i5 + j1 + j3 + j5;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
