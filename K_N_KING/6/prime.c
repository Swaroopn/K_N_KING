/*******************************
 * PROGRAM NAME:     prime.c   *
 * PAGE NUMBER:          122   *
 * AUTHOR:           SWAROOP   *
 *******************************/

#include <stdio.h>

int main(void)
 {
    int n, divisor;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime\n");
        return 0;
    }

    for (divisor = 2; divisor * divisor <= n ; divisor++)
    {
        if (n % divisor == 0)
        {
            printf("Not Prime.\n");
            return 0;
        }
    }

    printf("prime.\n");

    return 0;
}
