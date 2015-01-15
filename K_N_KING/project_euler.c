/***************************
 * PROGRAM NAME:  prime.c  *
 * PAGE NUMBER:       186  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i, k = 0, j;
    unsigned long long n,prime[500000], prime2[500000];
    prime[0] = prime[1] = 0;

    printf("Enter a number: ");

    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        prime[i] = i;
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (prime[i] != 0)
        {
            j = i * i;
            while (j <= n)
            {
                prime[j] = 0;
                j += i;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if ((prime[i] != 0) && (i % 2 != 0) && (n % i == 0))
         {
            prime2[k++] = prime[i];

         }
    }

    printf("%d ", prime2[--k]);

    return 0;
}
