/**********************************
 * PROGRAM NAME:    polynomial.c  *
 * PAGE NUMBER:              217  *
 * AUTHOR:               SWAROOP  *
 **********************************/

#include <stdio.h>
#include <math.h>

int polynomial (int x);

int main(void)
{
    int x, value;

    printf("Enter a number: ");
    scanf("%d", &x);

    value = polynomial(x);

    printf("%d ", value);

    return 0;
}

int polynomial (int x)
{
    int result;

    result = ((3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x,3)) - (x * x) + (7 * x) - 6);

    return result;
}
