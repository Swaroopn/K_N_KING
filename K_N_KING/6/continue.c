/******************************
 * PROGRAM NAME:  continue.c  *
 * PAGE NUMBER:         113   *
 * AUTHOR:          SWAROOP   *
 ******************************/

#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0, i;

    while (n < 10)
    {
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
        n++;
    }
    printf("\nSum is: %d", sum);
    return 0;
}
