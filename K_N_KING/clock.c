/***************************
 * PROGRAM NAME:  prime.c  *
 * PAGE NUMBER:       186  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start_clock = clock();

    long int i = 0, num = 999999991, j;

    for (num; num > 0; num--)
    {
        for (j=1; j <= 20; j++)
        {
            if (num % j != 0)
                break;
        }

        if (j == 21)
            printf("%ld ", num);
    }

    printf("\n\nProcessor time used: %g sec.\n", (clock() - start_clock) / (double) CLOCKS_PER_SEC);
    return 0;
}


/******************
 * ans: 232792560 *
 ******************/
