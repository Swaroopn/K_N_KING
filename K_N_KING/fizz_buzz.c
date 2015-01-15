/*********************************
 * PROGRAM NAME:    fizz_buzz.c  *
 * PAGE NUMBER:                  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int a, m, n, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    printf("Enter value of n: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (i % (m * n) == 0)
            printf("Fizz Buzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
