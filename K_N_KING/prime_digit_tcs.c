/*****************************
 * PROGRAM NAME:    prime.c  *
 * PAGE NUMBER:              *
 * AUTHOR:          SWAROOP  *
 *****************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int prime[100], prime2[100], prime3[100];
    int i, j ,t1,t2, l = 0, k, n, z=0, pos;


    printf("Enter upper lim:");
    scanf("%d", &t1);

    printf("Enter lower lim:");
    scanf("%d", &t2);

    printf("Enter pos:");
    scanf("%d", &pos);

    if (pos > t2)
    {
        printf("\nNo number in that index!");
        exit(EXIT_FAILURE);
    }


    for (i = 2; i < t2; i++)
        prime[i] = i;

    for (i = 2; i < sqrt(t2); i++)
    {
    	if (prime[i] != 0)
    	{
        	j = i * i;
        	while (j <= t2)
        	{
        		prime[j] = 0;
        		j += i;
        	}
        }
    }
    prime[j] = '\0';

    for (i = t1; i < t2; i++)
    {
        if (prime[i] == 0)
            continue;
        else
        {
            prime2[l++] = i;
        }
    }



    for (i = 0; i < l; i++)
    {

        k= prime2[i];
        n = k %10;
        k /= 10;
        k += n;

        for (j = 2; j < t2; j++)
        {
            if (k == prime[j])
                prime3[z++] = prime2[i];
            else
                continue;
        }
    }

    printf("\n %d", prime3[pos-1]);

    return 0;
}
