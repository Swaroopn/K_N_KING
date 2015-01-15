/***************************************
 * PROGRAM NAME:  sum_of_n_nums.c      *
 * PAGE NUMBER:                  102   *
 * AUTHOR:                   SWAROOP   *
 ***************************************/

#include <stdio.h>

int main(void)
{
    int n=0, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): \n");

    //scanf("%d", &n);
    while (n != -1)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d\n", sum);

    return 0;
}
