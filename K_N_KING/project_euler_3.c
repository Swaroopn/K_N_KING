/*****************************
 * PROGRAM NAME:    prime.c  *
 * PAGE NUMBER:              *
 * AUTHOR:          SWAROOP  *
 *****************************/

#include <stdio.h>
#include <math.h>
#define NUM 600851475143


int main(void)
{
    long int prime[100], count = 1, sum;
    long int i, j ;

    for (i = 2; i <= 100; i++)
        prime[i] = i;

    for (i = 2; i <= sqrt(100); i++)
    {
        if (prime[i] != 0)
        {
            j = i * i;
            while (j <= 100)
            {
                prime[j] = 0;
                j = j + i;
            }
        }
    }


    for (i = 2; i <= 100; i++)
    {
        if ((NUM % i == 0) && (prime[i] != 0))
            printf("%d ", i);
    }


    return 0;
}

/***********
 * ans: 71 *
 ***********/
