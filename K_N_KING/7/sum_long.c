/****************************
 * PROGRAM NAME:   sum2.c   *
 * PAGE NUMBER:       132   *
 * AUTHOR:        SWAROOP   *
 ****************************/

#include <stdio.h>

int main(void)
{
    long n, sum = 0;

    printf("This program sums a series of integers: ");
    printf("Enter integers (0 to terminate): \n");
    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n", sum);

    return 0;
}