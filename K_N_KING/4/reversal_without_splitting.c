/**************************
 * NAME:       reversal.c *
 * PAGE NUM:        Q & A *
 * AUTHOR:        SWAROOP *
 **************************/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k); // 123


    /**********************
     * j = i / 100; // 1  *
     * i = i % 100; // 23 *
     * h = i % 10;  // 3  *
     * k = i / 10;  // 2  *
     **********************/

    printf("The reversal is: %d%d%d", k, j, i);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
