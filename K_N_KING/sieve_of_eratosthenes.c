/*****************************
 * PROGRAM NAME:    prime.c  *
 * PAGE NUMBER:              *
 * AUTHOR:          SWAROOP  *
 *****************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int prime[10];
    int i, j ;

    for (i = 2; i < 10; i++)
        prime[i] = i;

    for (i = 2; i < sqrt(10); i++)
    {
        for (j = 4; j < 10; j++)
        {
            if ( j % i == 0)
            {
                prime[j] = 0;
            }
        }
    }

    for (i = 2; i < 10; i++)
    {
        if (prime[i] == 0)
            continue;
        printf("%d\n", prime[i]);
    }

    return 0;
}
