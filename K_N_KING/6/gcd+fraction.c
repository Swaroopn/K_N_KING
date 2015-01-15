/**********************************
 * PROGRAM NAME:  gcd_fraction.c  *
 * AUTHOR:        SWAROOP         *
 * PAGE NUM:      122             *
 **********************************/
 
#include <stdio.h>

int main(void)
{
    int gcd,lcm,m,n,p,q,r, s;

    printf("Enter two numbers: \n");
    scanf("%d/%d",&m,&n);
    p = m, q = n;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    gcd = m;
    lcm = (p * q)/gcd;

    printf("\nGreatest common divisor: %d\n", gcd);
    r = p / gcd;
    s = q / gcd;
    printf("\nLowest form of %d/%d is %d/%d\n", p, q,  r, s);
    return 0;
}
