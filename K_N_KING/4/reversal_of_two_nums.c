/**************************
 * NAME:       reversal.c *
 * PAGE NUM:        Q & A *
 * AUTHOR:        SWAROOP *
 **************************/

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    j = i % 10;
    i = i/10;

    printf("The reversal is: %d%d", j, i);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
