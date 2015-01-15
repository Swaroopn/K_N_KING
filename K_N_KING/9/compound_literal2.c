/***************************************
 * PROGRAM NAME:   compound_literal.c  *
 * PAGE NUMBER:                   201  *
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

    printf("Total is: %d ", total);
    return 0;
}
