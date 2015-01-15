/***************************
 * PROGRAM NAME:  prime.c  *
 * PAGE NUMBER:       186  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start_time = time(NULL);
    printf("%g\n", time);

    long int i = 0, num = 999999991, j;

    for (num; num > 0; num--)
    {
        for (j=1; j <= 20; j++)
        {
            if (num % j != 0)
                break;
        }

        if (j == 21)
            printf("%d ", num);
    }

    printf("%g\n", clock());
    printf("\n\nRunning time: %g sec.\n", difftime(time(NULL), start_time));

    return 0;
}


/******************
 * ans: 232792560 *
 ******************/
