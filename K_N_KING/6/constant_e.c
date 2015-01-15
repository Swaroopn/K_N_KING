/*********************************
 * PROGRAM NAME:  constant_e.c   *
 * PAGE NUMBER:            124   *
 * AUTHOR:             SWAROOP   *
 *********************************/

#include <stdio.h>

double fact (int n)
{
    int j;
    if ((n ==  0) || (n == 1))
        return 1;
   else
    return n * fact(n-1);
}

int main(void)
{
    int n, i;
    double e = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i=1; i<= n; i++)
    {
        e = e + 1/fact(i);
    }
    printf("%f", e);
    return 0;
}
