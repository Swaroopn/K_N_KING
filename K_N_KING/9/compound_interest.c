/***************************************
 * PROGRAM NAME:   compound_literal.c  *
 * PAGE NUMBER:                   186  *
 * AUTHOR:                    SWAROOP  *
 ***************************************/

#include <stdio.h>


int sum_array(int b[], int n)
{
    int i, sum=0;

    for (i = 0;i < n; i++)
    {
        sum += b[i];
    }

    return sum;
}
int main(void)
{
    int total;

    total = sum_array((int []) {1, 2, 3, 4, 5, 6}, 6);  // compound literal

    /* above declaration can also be written as
        sum_array((int [6]) {1, 2, 3, 4, 5, 6});
    */
    printf("Total is: %d ", total);
    return 0;
}
