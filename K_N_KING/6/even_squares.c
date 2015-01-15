/******************************
 * NAME:       even_square.c  *
 * PAGE NUM:              50  *
 * AUTHOR:           SWAROOP  *
 ******************************/

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even squares between 2 to %d: \n", n);
    for (i = 2; i*i <= n; i += 2)
    {
        printf("%d\n", i*i);
    }

    return 0;
}
