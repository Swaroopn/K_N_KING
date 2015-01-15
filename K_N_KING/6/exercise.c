/*******************************
 * PROGRAM NAME:  exercise.c   *
 * PAGE NUMBER:          113   *
 * AUTHOR:           SWAROOP   *
 *******************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum=0, i;

    for (i=0; i< 10; i++)
    {
        if (i % 2)
            continue;
        sum += i;
        printf("%d ", sum);
    }
    printf("%d ", sum);

    return 0;
}
