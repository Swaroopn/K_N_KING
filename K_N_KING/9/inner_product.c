/***********************************
 * PROGRAM NAME:  inner_product.c  *
 * PAGE NUMBER:               214  *
 * AUTHOR:                SWAROOP  *
 ***********************************/

#include <stdio.h>

#define N 10

double inner_prod(double [], double [], int );

int main(void)
{
    double a[N] = {0,1,2,3,4,5,6,7,8,9}, b[N] = {0,1,2,3,4,5,6,7,8,9};

    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("%.2lf\n", inner_prod(a, b, n));

    return 0;
}

double inner_prod(double a[N], double b[N], int n)
{
    if (n <= 1)
        return 1;
    else
        return a[n]*b[n] + inner_prod(a,b,--n);
}
