/****************************************
 * PROGRAM NAME:  pointer_arithmetic.c  *
 * PAGE NUMBER:                    261  *
 * AUTHOR:                     SWAROOP  *
 ****************************************/

#include <stdio.h>

#define SIZE 10

int main(void)
{
    int a[SIZE], *p, sum = 0;

    printf("Enter %d numbers: ", SIZE);
    for (p = &a[0]; p < &a[SIZE]; p++)	// (p = a; p < a + SIZE; p++)
    {
        scanf("%d", p);
        sum += *p;
    }

    printf("Total Sum: %d", sum);

    return 0;
}
