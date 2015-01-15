/*********************************
 * NAME:         pos_of_a_num.c  *
 * PAGE NUM:                214  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

int digit(int , int);

int main(void)
{
    long n;
    int k, pos;

    printf("Enter a digit: ");
    scanf("%ld", &n);

    printf("Enter position: ");
    scanf("%d", &k);

    pos = digit(n, k);

    if (pos == 0)
        printf("Invalid!\n");
    else
        printf("%d\n", pos);

    return 0;
}

int digit(int n, int k)
{
    int position, i = 0;

    while(i < k)
    {
        position = n % 10;
        n = n / 10;
        i++;
    }

    if (n > 0)
        return position;
    else
        return 0;
}
