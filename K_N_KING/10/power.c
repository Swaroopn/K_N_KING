/****************************
 * PROGRAM NAME:   power.c  *
 * PAGE NUMBER:        204  *
 * AUTHOR:         SWAROOP  *
 ****************************/

#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * power(x, n-1);
}
int main(void)
{
    int x, n, value;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter power of %d: ", x);
    scanf("%d", &n);

    value = power(x, n);

    printf("%d to the power %d: %d",x, n, value);
    return 0;
}
