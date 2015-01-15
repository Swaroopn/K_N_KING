/*********************************
 * NAME:        num_of_digits.c  *
 * PAGE NUM:                214  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

int num_digits(long n)
{
    int count = 0;

    do
    {
        n /= 10;
        count++;
    } while (n > 0);

    return count;
}

int main(void)
{
    long n, digits;

    printf("Enter a number: ");
    scanf("%ld", &n);

    digits = num_digits(n);

    printf("%d has %d digits\n", n, digits);

    return 0;
}
